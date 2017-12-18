#include "JsParserListenerImpl.h"
#include "jsc.h"

JsParserListenerImpl::JsParserListenerImpl(ICodeGenerator *codeGen)
	: m_codeGen(codeGen)
{
}

JsParserListenerImpl::~JsParserListenerImpl() {
}

void JsParserListenerImpl::enterProgram(JavaScriptParser::ProgramContext * ctx) {
#ifdef ANTLR_DEBUG_OUTPUT
	std::cout << "Program started\n";
	std::cout << ctx->toString() << std::endl;
#endif //ANTLR_DEBUG_OUTPUT
	m_codeGen->createProgram();
}

void JsParserListenerImpl::exitProgram(JavaScriptParser::ProgramContext * ctx) {
#ifdef ANTLR_DEBUG_OUTPUT
	std::cout << "Program finished\n";
#endif //ANTLR_DEBUG_OUTPUT
	m_codeGen->generate();
}
