#include <iostream>
#include <fstream>
#include <string>
#include <queue>

#include "boost/filesystem/convenience.hpp"

#include "antlr4-runtime.h"

#include "base/JavaScriptBaseLexer.h"
#include "base/JavaScriptBaseParser.h"

#include "generated/JavaScriptLexer.h"
#include "generated/JavaScriptParser.h"

#include "JsParserListenerImpl.h"
#include "LlvmCodeGenerator.h"
#include "jsc.h"

#pragma comment(lib, "antlr4-runtime.lib")

void walk1(antlr4::tree::ParseTree *tree) {
	std::queue<antlr4::tree::ParseTree*> q;
	q.push(tree);
	while (!q.empty()) {
		antlr4::tree::ParseTree *node = q.front();
		q.pop();

		std::cout << node->toString() << "\n";

		for (auto child : node->children)
			q.push(child);
	}
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " [js file name]";
		return -1;
	}

	const std::string filename = argv[1];
	std::ifstream jsFile(filename);
	if (!jsFile.is_open()) {
		std::cerr << "Error: cannot open " << filename << "\n";
		return -1;
	}

	antlr4::ANTLRInputStream input(jsFile);
	JavaScriptLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);

	tokens.fill();
#ifdef ANTLR_DEBUG_OUTPUT
	for (auto token : tokens.getTokens()) {
		std::cout << token->toString() << std::endl;
	}
#endif //ANTLR_DEBUG_OUTPUT

	JavaScriptParser parser(&tokens);
	antlr4::tree::ParseTree *tree = parser.program();
#ifdef ANTLR_DEBUG_OUTPUT
	std::cout << tree->toStringTree(&parser) << std::endl;
#endif //ANTLR_DEBUG_OUTPUT

	LlvmCodeGenerator llvmCodeGen(boost::filesystem::change_extension(filename, "bc").string());
	JsParserListenerImpl jsListener(&llvmCodeGen);
	antlr4::tree::ParseTreeWalker::DEFAULT.walk(&jsListener, tree);

	return 0;
}
