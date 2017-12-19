#pragma once

#include <string>

#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"

#include "CodeGenerator.h"

class LlvmCodeGenerator : public ICodeGenerator {
public:
	LlvmCodeGenerator(std::string const& outFileName);
	virtual ~LlvmCodeGenerator();

	virtual void createProgram();
	virtual void generate();

private:
	void optimizeCode();
	void generateBytecode();
	void dumpModule();
	void dumpValue(llvm::Value *v);

	void createGlobalFuncs();
	void createMainFunc();

	llvm::IRBuilder<> &Builder();

	std::string m_outFileName;

	llvm::LLVMContext &m_context;
	llvm::Module m_module;
	llvm::IRBuilder<> m_builder;
};
