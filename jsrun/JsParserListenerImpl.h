#pragma once

#include "generated/JavaScriptParserBaseListener.h"
#include "CodeGenerator.h"

class JsParserListenerImpl : public JavaScriptParserBaseListener {
public:
	JsParserListenerImpl(ICodeGenerator *codeGen);
	~JsParserListenerImpl();

	virtual void enterProgram(JavaScriptParser::ProgramContext * /*ctx*/);
	virtual void exitProgram(JavaScriptParser::ProgramContext * /*ctx*/);

private:
	ICodeGenerator *m_codeGen;
};
