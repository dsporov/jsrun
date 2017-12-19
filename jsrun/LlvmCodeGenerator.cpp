#include "LlvmCodeGenerator.h"
#include "jsc.h"

#include <iostream>

#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/PassManager.h>
#include <llvm/Transforms/IPO/PassManagerBuilder.h>
#include <llvm/IR/Verifier.h>
#include <llvm/Transforms/IPO.h>

#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/FileSystem.h>
#include <llvm/IR/AssemblyAnnotationWriter.h>
#include <llvm/Bitcode/ReaderWriter.h>

#include <boost/filesystem.hpp>

LlvmCodeGenerator::LlvmCodeGenerator(std::string const& outFileName)
	: m_outFileName(outFileName)
	, m_context(llvm::getGlobalContext())
	, m_module("", m_context)
	, m_builder(m_context)
{
}

LlvmCodeGenerator::~LlvmCodeGenerator() {
}

llvm::IRBuilder<> &LlvmCodeGenerator::Builder() {
	return m_builder;
}

void LlvmCodeGenerator::createProgram() {
	createGlobalFuncs();
	createMainFunc();
}

void LlvmCodeGenerator::createMainFunc() {
	llvm::FunctionType *mainFuncType = llvm::FunctionType::get(llvm::Type::getVoidTy(m_context), false);
	llvm::Function *mainFunc = llvm::Function::Create(mainFuncType, llvm::Function::ExternalLinkage, "js_main", &m_module);
	mainFunc->setCallingConv(llvm::CallingConv::C);
	mainFunc->setDoesNotThrow();

	llvm::BasicBlock *bb = llvm::BasicBlock::Create(m_context, "entry", mainFunc);
	Builder().SetInsertPoint(bb);
	Builder().CreateRetVoid();
}

void LlvmCodeGenerator::createGlobalFuncs() {
	// console methods
	std::vector<llvm::Type*> params;
	//Builder().CreateGlobalStringPtr();
	params.push_back(llvm::Type::getInt8PtrTy(m_context));
	llvm::FunctionType *consoleFuncType = llvm::FunctionType::get(llvm::Type::getVoidTy(m_context), params, true);
	llvm::Function *consoleFunc = llvm::Function::Create(consoleFuncType, llvm::Function::ExternalLinkage, "console", &m_module);
	consoleFunc->setCallingConv(llvm::CallingConv::C);
	consoleFunc->setDoesNotThrow();
}

void LlvmCodeGenerator::optimizeCode() {
	llvm::legacy::PassManager passManager;

	enum class OptLevel { opt_O0 = 0, opt_O1 = 1, opt_O2 = 2, opt_O3 = 3 };

	llvm::PassManagerBuilder PMBuilder;
	PMBuilder.OptLevel = (int)OptLevel::opt_O3;
	PMBuilder.SizeLevel = true;
	PMBuilder.DisableUnitAtATime = false;
	PMBuilder.DisableUnrollLoops = false;
	PMBuilder.populateModulePassManager(passManager);

	passManager.add(llvm::createConstantMergePass());
	passManager.add(llvm::createVerifierPass());

	passManager.run(m_module);
}

void LlvmCodeGenerator::generateBytecode() {
	std::error_code errorInfo;
	llvm::raw_fd_ostream out(m_outFileName.c_str(), errorInfo, llvm::sys::fs::F_None);
	llvm::WriteBitcodeToFile(&m_module, out);
	out.close();
}

void LlvmCodeGenerator::dumpModule() {
//	boost::filesystem::path temp = boost::filesystem::unique_path();
	std::string uniqueName = "tmp";// temp.string();
	std::string filePath = boost::filesystem::change_extension(m_outFileName, uniqueName).string() + ".ll";
	std::error_code errorInfo;
	llvm::raw_fd_ostream out(filePath.c_str(), errorInfo, llvm::sys::fs::F_Text);
	llvm::AssemblyAnnotationWriter aaw;
	m_module.print(out, &aaw);
	out.close();
}

void LlvmCodeGenerator::dumpValue(llvm::Value *v) {
	std::string str;
	llvm::raw_string_ostream rso(str);
	v->print(rso);

	std::cout << str << "\n";
}

void LlvmCodeGenerator::generate() {
#ifdef LLVM_DEBUG_OUTPUT
	dumpModule();
#endif // LLVM_DEBUG_OUTPUT

	optimizeCode();
	generateBytecode();
}
