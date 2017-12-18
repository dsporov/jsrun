
// Generated from JavaScriptParser.g4 by ANTLR 4.7


#include "JavaScriptParserListener.h"

#include "JavaScriptParser.h"


using namespace antlrcpp;
using namespace antlr4;

JavaScriptParser::JavaScriptParser(TokenStream *input) : JavaScriptBaseParser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JavaScriptParser::~JavaScriptParser() {
  delete _interpreter;
}

std::string JavaScriptParser::getGrammarFileName() const {
  return "JavaScriptParser.g4";
}

const std::vector<std::string>& JavaScriptParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JavaScriptParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

JavaScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ProgramContext::EOF() {
  return getToken(JavaScriptParser::EOF, 0);
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::ProgramContext::sourceElements() {
  return getRuleContext<JavaScriptParser::SourceElementsContext>(0);
}


size_t JavaScriptParser::ProgramContext::getRuleIndex() const {
  return JavaScriptParser::RuleProgram;
}

void JavaScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void JavaScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

JavaScriptParser::ProgramContext* JavaScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, JavaScriptParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(120);
      sourceElements();
      break;
    }

    }
    setState(123);
    match(JavaScriptParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementContext ------------------------------------------------------------------

JavaScriptParser::SourceElementContext::SourceElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::StatementContext* JavaScriptParser::SourceElementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

tree::TerminalNode* JavaScriptParser::SourceElementContext::Export() {
  return getToken(JavaScriptParser::Export, 0);
}


size_t JavaScriptParser::SourceElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleSourceElement;
}

void JavaScriptParser::SourceElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElement(this);
}

void JavaScriptParser::SourceElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElement(this);
}

JavaScriptParser::SourceElementContext* JavaScriptParser::sourceElement() {
  SourceElementContext *_localctx = _tracker.createInstance<SourceElementContext>(_ctx, getState());
  enterRule(_localctx, 2, JavaScriptParser::RuleSourceElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      setState(125);
      match(JavaScriptParser::Export);
      break;
    }

    }
    setState(128);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

JavaScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::BlockContext* JavaScriptParser::StatementContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}

JavaScriptParser::VariableStatementContext* JavaScriptParser::StatementContext::variableStatement() {
  return getRuleContext<JavaScriptParser::VariableStatementContext>(0);
}

JavaScriptParser::EmptyStatementContext* JavaScriptParser::StatementContext::emptyStatement() {
  return getRuleContext<JavaScriptParser::EmptyStatementContext>(0);
}

JavaScriptParser::ExpressionStatementContext* JavaScriptParser::StatementContext::expressionStatement() {
  return getRuleContext<JavaScriptParser::ExpressionStatementContext>(0);
}

JavaScriptParser::IfStatementContext* JavaScriptParser::StatementContext::ifStatement() {
  return getRuleContext<JavaScriptParser::IfStatementContext>(0);
}

JavaScriptParser::IterationStatementContext* JavaScriptParser::StatementContext::iterationStatement() {
  return getRuleContext<JavaScriptParser::IterationStatementContext>(0);
}

JavaScriptParser::ContinueStatementContext* JavaScriptParser::StatementContext::continueStatement() {
  return getRuleContext<JavaScriptParser::ContinueStatementContext>(0);
}

JavaScriptParser::BreakStatementContext* JavaScriptParser::StatementContext::breakStatement() {
  return getRuleContext<JavaScriptParser::BreakStatementContext>(0);
}

JavaScriptParser::ReturnStatementContext* JavaScriptParser::StatementContext::returnStatement() {
  return getRuleContext<JavaScriptParser::ReturnStatementContext>(0);
}

JavaScriptParser::WithStatementContext* JavaScriptParser::StatementContext::withStatement() {
  return getRuleContext<JavaScriptParser::WithStatementContext>(0);
}

JavaScriptParser::LabelledStatementContext* JavaScriptParser::StatementContext::labelledStatement() {
  return getRuleContext<JavaScriptParser::LabelledStatementContext>(0);
}

JavaScriptParser::SwitchStatementContext* JavaScriptParser::StatementContext::switchStatement() {
  return getRuleContext<JavaScriptParser::SwitchStatementContext>(0);
}

JavaScriptParser::ThrowStatementContext* JavaScriptParser::StatementContext::throwStatement() {
  return getRuleContext<JavaScriptParser::ThrowStatementContext>(0);
}

JavaScriptParser::TryStatementContext* JavaScriptParser::StatementContext::tryStatement() {
  return getRuleContext<JavaScriptParser::TryStatementContext>(0);
}

JavaScriptParser::DebuggerStatementContext* JavaScriptParser::StatementContext::debuggerStatement() {
  return getRuleContext<JavaScriptParser::DebuggerStatementContext>(0);
}

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::StatementContext::functionDeclaration() {
  return getRuleContext<JavaScriptParser::FunctionDeclarationContext>(0);
}

JavaScriptParser::ClassDeclarationContext* JavaScriptParser::StatementContext::classDeclaration() {
  return getRuleContext<JavaScriptParser::ClassDeclarationContext>(0);
}


size_t JavaScriptParser::StatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleStatement;
}

void JavaScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void JavaScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

JavaScriptParser::StatementContext* JavaScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, JavaScriptParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(130);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      variableStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      emptyStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(133);
      expressionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(134);
      ifStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(135);
      iterationStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(136);
      continueStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(137);
      breakStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(138);
      returnStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(139);
      withStatement();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(140);
      labelledStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(141);
      switchStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(142);
      throwStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(143);
      tryStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(144);
      debuggerStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(145);
      functionDeclaration();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(146);
      classDeclaration();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

JavaScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::StatementListContext* JavaScriptParser::BlockContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::BlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleBlock;
}

void JavaScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void JavaScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

JavaScriptParser::BlockContext* JavaScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, JavaScriptParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(JavaScriptParser::OpenBrace);
    setState(151);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(150);
      statementList();
      break;
    }

    }
    setState(153);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

JavaScriptParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::StatementContext *> JavaScriptParser::StatementListContext::statement() {
  return getRuleContexts<JavaScriptParser::StatementContext>();
}

JavaScriptParser::StatementContext* JavaScriptParser::StatementListContext::statement(size_t i) {
  return getRuleContext<JavaScriptParser::StatementContext>(i);
}


size_t JavaScriptParser::StatementListContext::getRuleIndex() const {
  return JavaScriptParser::RuleStatementList;
}

void JavaScriptParser::StatementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementList(this);
}

void JavaScriptParser::StatementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementList(this);
}

JavaScriptParser::StatementListContext* JavaScriptParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 8, JavaScriptParser::RuleStatementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(156); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(155);
              statement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(158); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableStatementContext ------------------------------------------------------------------

JavaScriptParser::VariableStatementContext::VariableStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::VarModifierContext* JavaScriptParser::VariableStatementContext::varModifier() {
  return getRuleContext<JavaScriptParser::VarModifierContext>(0);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::VariableStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::VariableStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::VariableStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableStatement;
}

void JavaScriptParser::VariableStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableStatement(this);
}

void JavaScriptParser::VariableStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableStatement(this);
}

JavaScriptParser::VariableStatementContext* JavaScriptParser::variableStatement() {
  VariableStatementContext *_localctx = _tracker.createInstance<VariableStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, JavaScriptParser::RuleVariableStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    varModifier();
    setState(161);
    variableDeclarationList();
    setState(162);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationListContext ------------------------------------------------------------------

JavaScriptParser::VariableDeclarationListContext::VariableDeclarationListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::VariableDeclarationContext *> JavaScriptParser::VariableDeclarationListContext::variableDeclaration() {
  return getRuleContexts<JavaScriptParser::VariableDeclarationContext>();
}

JavaScriptParser::VariableDeclarationContext* JavaScriptParser::VariableDeclarationListContext::variableDeclaration(size_t i) {
  return getRuleContext<JavaScriptParser::VariableDeclarationContext>(i);
}


size_t JavaScriptParser::VariableDeclarationListContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableDeclarationList;
}

void JavaScriptParser::VariableDeclarationListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationList(this);
}

void JavaScriptParser::VariableDeclarationListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationList(this);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::variableDeclarationList() {
  VariableDeclarationListContext *_localctx = _tracker.createInstance<VariableDeclarationListContext>(_ctx, getState());
  enterRule(_localctx, 12, JavaScriptParser::RuleVariableDeclarationList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(164);
    variableDeclaration();
    setState(169);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(165);
        match(JavaScriptParser::Comma);
        setState(166);
        variableDeclaration(); 
      }
      setState(171);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

JavaScriptParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::VariableDeclarationContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::VariableDeclarationContext::arrayLiteral() {
  return getRuleContext<JavaScriptParser::ArrayLiteralContext>(0);
}

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::VariableDeclarationContext::objectLiteral() {
  return getRuleContext<JavaScriptParser::ObjectLiteralContext>(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::VariableDeclarationContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}


size_t JavaScriptParser::VariableDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleVariableDeclaration;
}

void JavaScriptParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void JavaScriptParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

JavaScriptParser::VariableDeclarationContext* JavaScriptParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, JavaScriptParser::RuleVariableDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        setState(172);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::OpenBracket: {
        setState(173);
        arrayLiteral();
        break;
      }

      case JavaScriptParser::OpenBrace: {
        setState(174);
        objectLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(179);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(177);
      match(JavaScriptParser::Assign);
      setState(178);
      singleExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

JavaScriptParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::EmptyStatementContext::SemiColon() {
  return getToken(JavaScriptParser::SemiColon, 0);
}


size_t JavaScriptParser::EmptyStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleEmptyStatement;
}

void JavaScriptParser::EmptyStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement(this);
}

void JavaScriptParser::EmptyStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement(this);
}

JavaScriptParser::EmptyStatementContext* JavaScriptParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, JavaScriptParser::RuleEmptyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(JavaScriptParser::SemiColon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

JavaScriptParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ExpressionStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ExpressionStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::ExpressionStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleExpressionStatement;
}

void JavaScriptParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void JavaScriptParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

JavaScriptParser::ExpressionStatementContext* JavaScriptParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, JavaScriptParser::RuleExpressionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);

    if (!(notOpenBraceAndNotFunction())) throw FailedPredicateException(this, "notOpenBraceAndNotFunction()");
    setState(184);
    expressionSequence();
    setState(185);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

JavaScriptParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::If() {
  return getToken(JavaScriptParser::If, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::IfStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

std::vector<JavaScriptParser::StatementContext *> JavaScriptParser::IfStatementContext::statement() {
  return getRuleContexts<JavaScriptParser::StatementContext>();
}

JavaScriptParser::StatementContext* JavaScriptParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<JavaScriptParser::StatementContext>(i);
}

tree::TerminalNode* JavaScriptParser::IfStatementContext::Else() {
  return getToken(JavaScriptParser::Else, 0);
}


size_t JavaScriptParser::IfStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleIfStatement;
}

void JavaScriptParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void JavaScriptParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

JavaScriptParser::IfStatementContext* JavaScriptParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, JavaScriptParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(JavaScriptParser::If);
    setState(188);
    match(JavaScriptParser::OpenParen);
    setState(189);
    expressionSequence();
    setState(190);
    match(JavaScriptParser::CloseParen);
    setState(191);
    statement();
    setState(194);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(192);
      match(JavaScriptParser::Else);
      setState(193);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

JavaScriptParser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::IterationStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleIterationStatement;
}

void JavaScriptParser::IterationStatementContext::copyFrom(IterationStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::DoStatementContext::Do() {
  return getToken(JavaScriptParser::Do, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::DoStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

tree::TerminalNode* JavaScriptParser::DoStatementContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::DoStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::DoStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::DoStatementContext::DoStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::DoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoStatement(this);
}
void JavaScriptParser::DoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoStatement(this);
}
//----------------- ForVarStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForVarStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

JavaScriptParser::VarModifierContext* JavaScriptParser::ForVarStatementContext::varModifier() {
  return getRuleContext<JavaScriptParser::VarModifierContext>(0);
}

JavaScriptParser::VariableDeclarationListContext* JavaScriptParser::ForVarStatementContext::variableDeclarationList() {
  return getRuleContext<JavaScriptParser::VariableDeclarationListContext>(0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForVarStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

std::vector<JavaScriptParser::ExpressionSequenceContext *> JavaScriptParser::ForVarStatementContext::expressionSequence() {
  return getRuleContexts<JavaScriptParser::ExpressionSequenceContext>();
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForVarStatementContext::expressionSequence(size_t i) {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(i);
}

JavaScriptParser::ForVarStatementContext::ForVarStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForVarStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForVarStatement(this);
}
void JavaScriptParser::ForVarStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForVarStatement(this);
}
//----------------- ForVarInStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForVarInStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

JavaScriptParser::VarModifierContext* JavaScriptParser::ForVarInStatementContext::varModifier() {
  return getRuleContext<JavaScriptParser::VarModifierContext>(0);
}

JavaScriptParser::VariableDeclarationContext* JavaScriptParser::ForVarInStatementContext::variableDeclaration() {
  return getRuleContext<JavaScriptParser::VariableDeclarationContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForVarInStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForVarInStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

tree::TerminalNode* JavaScriptParser::ForVarInStatementContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

tree::TerminalNode* JavaScriptParser::ForVarInStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ForVarInStatementContext::ForVarInStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForVarInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForVarInStatement(this);
}
void JavaScriptParser::ForVarInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForVarInStatement(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::WhileStatementContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::WhileStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::StatementContext* JavaScriptParser::WhileStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

JavaScriptParser::WhileStatementContext::WhileStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}
void JavaScriptParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}
//----------------- ForStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

std::vector<JavaScriptParser::ExpressionSequenceContext *> JavaScriptParser::ForStatementContext::expressionSequence() {
  return getRuleContexts<JavaScriptParser::ExpressionSequenceContext>();
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForStatementContext::expressionSequence(size_t i) {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(i);
}

JavaScriptParser::ForStatementContext::ForStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}
void JavaScriptParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}
//----------------- ForInStatementContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ForInStatementContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ForInStatementContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ForInStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::StatementContext* JavaScriptParser::ForInStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}

tree::TerminalNode* JavaScriptParser::ForInStatementContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

tree::TerminalNode* JavaScriptParser::ForInStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ForInStatementContext::ForInStatementContext(IterationStatementContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ForInStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInStatement(this);
}
void JavaScriptParser::ForInStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInStatement(this);
}
JavaScriptParser::IterationStatementContext* JavaScriptParser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, JavaScriptParser::RuleIterationStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::DoStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(196);
      match(JavaScriptParser::Do);
      setState(197);
      statement();
      setState(198);
      match(JavaScriptParser::While);
      setState(199);
      match(JavaScriptParser::OpenParen);
      setState(200);
      expressionSequence();
      setState(201);
      match(JavaScriptParser::CloseParen);
      setState(202);
      eos();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::WhileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(204);
      match(JavaScriptParser::While);
      setState(205);
      match(JavaScriptParser::OpenParen);
      setState(206);
      expressionSequence();
      setState(207);
      match(JavaScriptParser::CloseParen);
      setState(208);
      statement();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(210);
      match(JavaScriptParser::For);
      setState(211);
      match(JavaScriptParser::OpenParen);
      setState(213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
        | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
        | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
        | (1ULL << (JavaScriptParser::Void - 66))
        | (1ULL << (JavaScriptParser::Function - 66))
        | (1ULL << (JavaScriptParser::This - 66))
        | (1ULL << (JavaScriptParser::Delete - 66))
        | (1ULL << (JavaScriptParser::Class - 66))
        | (1ULL << (JavaScriptParser::Super - 66))
        | (1ULL << (JavaScriptParser::Identifier - 66))
        | (1ULL << (JavaScriptParser::StringLiteral - 66))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
        setState(212);
        expressionSequence();
      }
      setState(215);
      match(JavaScriptParser::SemiColon);
      setState(217);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
        | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
        | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
        | (1ULL << (JavaScriptParser::Void - 66))
        | (1ULL << (JavaScriptParser::Function - 66))
        | (1ULL << (JavaScriptParser::This - 66))
        | (1ULL << (JavaScriptParser::Delete - 66))
        | (1ULL << (JavaScriptParser::Class - 66))
        | (1ULL << (JavaScriptParser::Super - 66))
        | (1ULL << (JavaScriptParser::Identifier - 66))
        | (1ULL << (JavaScriptParser::StringLiteral - 66))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
        setState(216);
        expressionSequence();
      }
      setState(219);
      match(JavaScriptParser::SemiColon);
      setState(221);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
        | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
        | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
        | (1ULL << (JavaScriptParser::Void - 66))
        | (1ULL << (JavaScriptParser::Function - 66))
        | (1ULL << (JavaScriptParser::This - 66))
        | (1ULL << (JavaScriptParser::Delete - 66))
        | (1ULL << (JavaScriptParser::Class - 66))
        | (1ULL << (JavaScriptParser::Super - 66))
        | (1ULL << (JavaScriptParser::Identifier - 66))
        | (1ULL << (JavaScriptParser::StringLiteral - 66))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
        setState(220);
        expressionSequence();
      }
      setState(223);
      match(JavaScriptParser::CloseParen);
      setState(224);
      statement();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForVarStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(225);
      match(JavaScriptParser::For);
      setState(226);
      match(JavaScriptParser::OpenParen);
      setState(227);
      varModifier();
      setState(228);
      variableDeclarationList();
      setState(229);
      match(JavaScriptParser::SemiColon);
      setState(231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
        | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
        | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
        | (1ULL << (JavaScriptParser::Void - 66))
        | (1ULL << (JavaScriptParser::Function - 66))
        | (1ULL << (JavaScriptParser::This - 66))
        | (1ULL << (JavaScriptParser::Delete - 66))
        | (1ULL << (JavaScriptParser::Class - 66))
        | (1ULL << (JavaScriptParser::Super - 66))
        | (1ULL << (JavaScriptParser::Identifier - 66))
        | (1ULL << (JavaScriptParser::StringLiteral - 66))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
        setState(230);
        expressionSequence();
      }
      setState(233);
      match(JavaScriptParser::SemiColon);
      setState(235);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
        | (1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenParen)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::PlusPlus)
        | (1ULL << JavaScriptParser::MinusMinus)
        | (1ULL << JavaScriptParser::Plus)
        | (1ULL << JavaScriptParser::Minus)
        | (1ULL << JavaScriptParser::BitNot)
        | (1ULL << JavaScriptParser::Not)
        | (1ULL << JavaScriptParser::NullLiteral)
        | (1ULL << JavaScriptParser::BooleanLiteral)
        | (1ULL << JavaScriptParser::DecimalLiteral)
        | (1ULL << JavaScriptParser::HexIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral)
        | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
        | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
        | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
        | (1ULL << (JavaScriptParser::Void - 66))
        | (1ULL << (JavaScriptParser::Function - 66))
        | (1ULL << (JavaScriptParser::This - 66))
        | (1ULL << (JavaScriptParser::Delete - 66))
        | (1ULL << (JavaScriptParser::Class - 66))
        | (1ULL << (JavaScriptParser::Super - 66))
        | (1ULL << (JavaScriptParser::Identifier - 66))
        | (1ULL << (JavaScriptParser::StringLiteral - 66))
        | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
        setState(234);
        expressionSequence();
      }
      setState(237);
      match(JavaScriptParser::CloseParen);
      setState(238);
      statement();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForInStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(240);
      match(JavaScriptParser::For);
      setState(241);
      match(JavaScriptParser::OpenParen);
      setState(242);
      singleExpression(0);
      setState(246);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::In: {
          setState(243);
          match(JavaScriptParser::In);
          break;
        }

        case JavaScriptParser::Identifier: {
          setState(244);
          match(JavaScriptParser::Identifier);
          setState(245);

          if (!(p("of"))) throw FailedPredicateException(this, "p(\"of\")");
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(248);
      expressionSequence();
      setState(249);
      match(JavaScriptParser::CloseParen);
      setState(250);
      statement();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<IterationStatementContext *>(_tracker.createInstance<JavaScriptParser::ForVarInStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(252);
      match(JavaScriptParser::For);
      setState(253);
      match(JavaScriptParser::OpenParen);
      setState(254);
      varModifier();
      setState(255);
      variableDeclaration();
      setState(259);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case JavaScriptParser::In: {
          setState(256);
          match(JavaScriptParser::In);
          break;
        }

        case JavaScriptParser::Identifier: {
          setState(257);
          match(JavaScriptParser::Identifier);
          setState(258);

          if (!(p("of"))) throw FailedPredicateException(this, "p(\"of\")");
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(261);
      expressionSequence();
      setState(262);
      match(JavaScriptParser::CloseParen);
      setState(263);
      statement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarModifierContext ------------------------------------------------------------------

JavaScriptParser::VarModifierContext::VarModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Var() {
  return getToken(JavaScriptParser::Var, 0);
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Let() {
  return getToken(JavaScriptParser::Let, 0);
}

tree::TerminalNode* JavaScriptParser::VarModifierContext::Const() {
  return getToken(JavaScriptParser::Const, 0);
}


size_t JavaScriptParser::VarModifierContext::getRuleIndex() const {
  return JavaScriptParser::RuleVarModifier;
}

void JavaScriptParser::VarModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarModifier(this);
}

void JavaScriptParser::VarModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarModifier(this);
}

JavaScriptParser::VarModifierContext* JavaScriptParser::varModifier() {
  VarModifierContext *_localctx = _tracker.createInstance<VarModifierContext>(_ctx, getState());
  enterRule(_localctx, 24, JavaScriptParser::RuleVarModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    _la = _input->LA(1);
    if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & ((1ULL << (JavaScriptParser::Var - 67))
      | (1ULL << (JavaScriptParser::Const - 67))
      | (1ULL << (JavaScriptParser::Let - 67)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStatementContext ------------------------------------------------------------------

JavaScriptParser::ContinueStatementContext::ContinueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ContinueStatementContext::Continue() {
  return getToken(JavaScriptParser::Continue, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::ContinueStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

tree::TerminalNode* JavaScriptParser::ContinueStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::ContinueStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleContinueStatement;
}

void JavaScriptParser::ContinueStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStatement(this);
}

void JavaScriptParser::ContinueStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStatement(this);
}

JavaScriptParser::ContinueStatementContext* JavaScriptParser::continueStatement() {
  ContinueStatementContext *_localctx = _tracker.createInstance<ContinueStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, JavaScriptParser::RuleContinueStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(JavaScriptParser::Continue);
    setState(272);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(270);

      if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
      setState(271);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
    setState(274);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

JavaScriptParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::BreakStatementContext::Break() {
  return getToken(JavaScriptParser::Break, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::BreakStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

tree::TerminalNode* JavaScriptParser::BreakStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::BreakStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleBreakStatement;
}

void JavaScriptParser::BreakStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStatement(this);
}

void JavaScriptParser::BreakStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStatement(this);
}

JavaScriptParser::BreakStatementContext* JavaScriptParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, JavaScriptParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(JavaScriptParser::Break);
    setState(279);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(277);

      if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
      setState(278);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
    setState(281);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

JavaScriptParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ReturnStatementContext::Return() {
  return getToken(JavaScriptParser::Return, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::ReturnStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ReturnStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}


size_t JavaScriptParser::ReturnStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleReturnStatement;
}

void JavaScriptParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void JavaScriptParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

JavaScriptParser::ReturnStatementContext* JavaScriptParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, JavaScriptParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    match(JavaScriptParser::Return);
    setState(286);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(284);

      if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
      setState(285);
      expressionSequence();
      break;
    }

    }
    setState(288);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithStatementContext ------------------------------------------------------------------

JavaScriptParser::WithStatementContext::WithStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::WithStatementContext::With() {
  return getToken(JavaScriptParser::With, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::WithStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::StatementContext* JavaScriptParser::WithStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}


size_t JavaScriptParser::WithStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleWithStatement;
}

void JavaScriptParser::WithStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithStatement(this);
}

void JavaScriptParser::WithStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithStatement(this);
}

JavaScriptParser::WithStatementContext* JavaScriptParser::withStatement() {
  WithStatementContext *_localctx = _tracker.createInstance<WithStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, JavaScriptParser::RuleWithStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(JavaScriptParser::With);
    setState(291);
    match(JavaScriptParser::OpenParen);
    setState(292);
    expressionSequence();
    setState(293);
    match(JavaScriptParser::CloseParen);
    setState(294);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStatementContext ------------------------------------------------------------------

JavaScriptParser::SwitchStatementContext::SwitchStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::SwitchStatementContext::Switch() {
  return getToken(JavaScriptParser::Switch, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::SwitchStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::CaseBlockContext* JavaScriptParser::SwitchStatementContext::caseBlock() {
  return getRuleContext<JavaScriptParser::CaseBlockContext>(0);
}


size_t JavaScriptParser::SwitchStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleSwitchStatement;
}

void JavaScriptParser::SwitchStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStatement(this);
}

void JavaScriptParser::SwitchStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStatement(this);
}

JavaScriptParser::SwitchStatementContext* JavaScriptParser::switchStatement() {
  SwitchStatementContext *_localctx = _tracker.createInstance<SwitchStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, JavaScriptParser::RuleSwitchStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    match(JavaScriptParser::Switch);
    setState(297);
    match(JavaScriptParser::OpenParen);
    setState(298);
    expressionSequence();
    setState(299);
    match(JavaScriptParser::CloseParen);
    setState(300);
    caseBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBlockContext ------------------------------------------------------------------

JavaScriptParser::CaseBlockContext::CaseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::CaseClausesContext *> JavaScriptParser::CaseBlockContext::caseClauses() {
  return getRuleContexts<JavaScriptParser::CaseClausesContext>();
}

JavaScriptParser::CaseClausesContext* JavaScriptParser::CaseBlockContext::caseClauses(size_t i) {
  return getRuleContext<JavaScriptParser::CaseClausesContext>(i);
}

JavaScriptParser::DefaultClauseContext* JavaScriptParser::CaseBlockContext::defaultClause() {
  return getRuleContext<JavaScriptParser::DefaultClauseContext>(0);
}


size_t JavaScriptParser::CaseBlockContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseBlock;
}

void JavaScriptParser::CaseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseBlock(this);
}

void JavaScriptParser::CaseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseBlock(this);
}

JavaScriptParser::CaseBlockContext* JavaScriptParser::caseBlock() {
  CaseBlockContext *_localctx = _tracker.createInstance<CaseBlockContext>(_ctx, getState());
  enterRule(_localctx, 36, JavaScriptParser::RuleCaseBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(JavaScriptParser::OpenBrace);
    setState(304);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Case) {
      setState(303);
      caseClauses();
    }
    setState(310);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Default) {
      setState(306);
      defaultClause();
      setState(308);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Case) {
        setState(307);
        caseClauses();
      }
    }
    setState(312);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClausesContext ------------------------------------------------------------------

JavaScriptParser::CaseClausesContext::CaseClausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::CaseClauseContext *> JavaScriptParser::CaseClausesContext::caseClause() {
  return getRuleContexts<JavaScriptParser::CaseClauseContext>();
}

JavaScriptParser::CaseClauseContext* JavaScriptParser::CaseClausesContext::caseClause(size_t i) {
  return getRuleContext<JavaScriptParser::CaseClauseContext>(i);
}


size_t JavaScriptParser::CaseClausesContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseClauses;
}

void JavaScriptParser::CaseClausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClauses(this);
}

void JavaScriptParser::CaseClausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClauses(this);
}

JavaScriptParser::CaseClausesContext* JavaScriptParser::caseClauses() {
  CaseClausesContext *_localctx = _tracker.createInstance<CaseClausesContext>(_ctx, getState());
  enterRule(_localctx, 38, JavaScriptParser::RuleCaseClauses);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(314);
      caseClause();
      setState(317); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == JavaScriptParser::Case);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseClauseContext ------------------------------------------------------------------

JavaScriptParser::CaseClauseContext::CaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::CaseClauseContext::Case() {
  return getToken(JavaScriptParser::Case, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::CaseClauseContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::StatementListContext* JavaScriptParser::CaseClauseContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::CaseClauseContext::getRuleIndex() const {
  return JavaScriptParser::RuleCaseClause;
}

void JavaScriptParser::CaseClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseClause(this);
}

void JavaScriptParser::CaseClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseClause(this);
}

JavaScriptParser::CaseClauseContext* JavaScriptParser::caseClause() {
  CaseClauseContext *_localctx = _tracker.createInstance<CaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 40, JavaScriptParser::RuleCaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    match(JavaScriptParser::Case);
    setState(320);
    expressionSequence();
    setState(321);
    match(JavaScriptParser::Colon);
    setState(323);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(322);
      statementList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultClauseContext ------------------------------------------------------------------

JavaScriptParser::DefaultClauseContext::DefaultClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::DefaultClauseContext::Default() {
  return getToken(JavaScriptParser::Default, 0);
}

JavaScriptParser::StatementListContext* JavaScriptParser::DefaultClauseContext::statementList() {
  return getRuleContext<JavaScriptParser::StatementListContext>(0);
}


size_t JavaScriptParser::DefaultClauseContext::getRuleIndex() const {
  return JavaScriptParser::RuleDefaultClause;
}

void JavaScriptParser::DefaultClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultClause(this);
}

void JavaScriptParser::DefaultClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultClause(this);
}

JavaScriptParser::DefaultClauseContext* JavaScriptParser::defaultClause() {
  DefaultClauseContext *_localctx = _tracker.createInstance<DefaultClauseContext>(_ctx, getState());
  enterRule(_localctx, 42, JavaScriptParser::RuleDefaultClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(JavaScriptParser::Default);
    setState(326);
    match(JavaScriptParser::Colon);
    setState(328);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(327);
      statementList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelledStatementContext ------------------------------------------------------------------

JavaScriptParser::LabelledStatementContext::LabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LabelledStatementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::StatementContext* JavaScriptParser::LabelledStatementContext::statement() {
  return getRuleContext<JavaScriptParser::StatementContext>(0);
}


size_t JavaScriptParser::LabelledStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleLabelledStatement;
}

void JavaScriptParser::LabelledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelledStatement(this);
}

void JavaScriptParser::LabelledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelledStatement(this);
}

JavaScriptParser::LabelledStatementContext* JavaScriptParser::labelledStatement() {
  LabelledStatementContext *_localctx = _tracker.createInstance<LabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, JavaScriptParser::RuleLabelledStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(JavaScriptParser::Identifier);
    setState(331);
    match(JavaScriptParser::Colon);
    setState(332);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowStatementContext ------------------------------------------------------------------

JavaScriptParser::ThrowStatementContext::ThrowStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ThrowStatementContext::Throw() {
  return getToken(JavaScriptParser::Throw, 0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ThrowStatementContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::EosContext* JavaScriptParser::ThrowStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::ThrowStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleThrowStatement;
}

void JavaScriptParser::ThrowStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrowStatement(this);
}

void JavaScriptParser::ThrowStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrowStatement(this);
}

JavaScriptParser::ThrowStatementContext* JavaScriptParser::throwStatement() {
  ThrowStatementContext *_localctx = _tracker.createInstance<ThrowStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, JavaScriptParser::RuleThrowStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(JavaScriptParser::Throw);
    setState(335);

    if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
    setState(336);
    expressionSequence();
    setState(337);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryStatementContext ------------------------------------------------------------------

JavaScriptParser::TryStatementContext::TryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::TryStatementContext::Try() {
  return getToken(JavaScriptParser::Try, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::TryStatementContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}

JavaScriptParser::CatchProductionContext* JavaScriptParser::TryStatementContext::catchProduction() {
  return getRuleContext<JavaScriptParser::CatchProductionContext>(0);
}

JavaScriptParser::FinallyProductionContext* JavaScriptParser::TryStatementContext::finallyProduction() {
  return getRuleContext<JavaScriptParser::FinallyProductionContext>(0);
}


size_t JavaScriptParser::TryStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleTryStatement;
}

void JavaScriptParser::TryStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTryStatement(this);
}

void JavaScriptParser::TryStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTryStatement(this);
}

JavaScriptParser::TryStatementContext* JavaScriptParser::tryStatement() {
  TryStatementContext *_localctx = _tracker.createInstance<TryStatementContext>(_ctx, getState());
  enterRule(_localctx, 48, JavaScriptParser::RuleTryStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(JavaScriptParser::Try);
    setState(340);
    block();
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Catch: {
        setState(341);
        catchProduction();
        setState(343);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(342);
          finallyProduction();
          break;
        }

        }
        break;
      }

      case JavaScriptParser::Finally: {
        setState(345);
        finallyProduction();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatchProductionContext ------------------------------------------------------------------

JavaScriptParser::CatchProductionContext::CatchProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::CatchProductionContext::Catch() {
  return getToken(JavaScriptParser::Catch, 0);
}

tree::TerminalNode* JavaScriptParser::CatchProductionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::CatchProductionContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}


size_t JavaScriptParser::CatchProductionContext::getRuleIndex() const {
  return JavaScriptParser::RuleCatchProduction;
}

void JavaScriptParser::CatchProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCatchProduction(this);
}

void JavaScriptParser::CatchProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCatchProduction(this);
}

JavaScriptParser::CatchProductionContext* JavaScriptParser::catchProduction() {
  CatchProductionContext *_localctx = _tracker.createInstance<CatchProductionContext>(_ctx, getState());
  enterRule(_localctx, 50, JavaScriptParser::RuleCatchProduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(JavaScriptParser::Catch);
    setState(349);
    match(JavaScriptParser::OpenParen);
    setState(350);
    match(JavaScriptParser::Identifier);
    setState(351);
    match(JavaScriptParser::CloseParen);
    setState(352);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinallyProductionContext ------------------------------------------------------------------

JavaScriptParser::FinallyProductionContext::FinallyProductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::FinallyProductionContext::Finally() {
  return getToken(JavaScriptParser::Finally, 0);
}

JavaScriptParser::BlockContext* JavaScriptParser::FinallyProductionContext::block() {
  return getRuleContext<JavaScriptParser::BlockContext>(0);
}


size_t JavaScriptParser::FinallyProductionContext::getRuleIndex() const {
  return JavaScriptParser::RuleFinallyProduction;
}

void JavaScriptParser::FinallyProductionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinallyProduction(this);
}

void JavaScriptParser::FinallyProductionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinallyProduction(this);
}

JavaScriptParser::FinallyProductionContext* JavaScriptParser::finallyProduction() {
  FinallyProductionContext *_localctx = _tracker.createInstance<FinallyProductionContext>(_ctx, getState());
  enterRule(_localctx, 52, JavaScriptParser::RuleFinallyProduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(JavaScriptParser::Finally);
    setState(355);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DebuggerStatementContext ------------------------------------------------------------------

JavaScriptParser::DebuggerStatementContext::DebuggerStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::DebuggerStatementContext::Debugger() {
  return getToken(JavaScriptParser::Debugger, 0);
}

JavaScriptParser::EosContext* JavaScriptParser::DebuggerStatementContext::eos() {
  return getRuleContext<JavaScriptParser::EosContext>(0);
}


size_t JavaScriptParser::DebuggerStatementContext::getRuleIndex() const {
  return JavaScriptParser::RuleDebuggerStatement;
}

void JavaScriptParser::DebuggerStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDebuggerStatement(this);
}

void JavaScriptParser::DebuggerStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDebuggerStatement(this);
}

JavaScriptParser::DebuggerStatementContext* JavaScriptParser::debuggerStatement() {
  DebuggerStatementContext *_localctx = _tracker.createInstance<DebuggerStatementContext>(_ctx, getState());
  enterRule(_localctx, 54, JavaScriptParser::RuleDebuggerStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    match(JavaScriptParser::Debugger);
    setState(358);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

JavaScriptParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

tree::TerminalNode* JavaScriptParser::FunctionDeclarationContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::FunctionDeclarationContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::FunctionDeclarationContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}


size_t JavaScriptParser::FunctionDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleFunctionDeclaration;
}

void JavaScriptParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void JavaScriptParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

JavaScriptParser::FunctionDeclarationContext* JavaScriptParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 56, JavaScriptParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(JavaScriptParser::Function);
    setState(361);
    match(JavaScriptParser::Identifier);
    setState(362);
    match(JavaScriptParser::OpenParen);
    setState(364);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
      setState(363);
      formalParameterList();
    }
    setState(366);
    match(JavaScriptParser::CloseParen);
    setState(367);
    match(JavaScriptParser::OpenBrace);
    setState(368);
    functionBody();
    setState(369);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

JavaScriptParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ClassDeclarationContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

tree::TerminalNode* JavaScriptParser::ClassDeclarationContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::ClassDeclarationContext::classTail() {
  return getRuleContext<JavaScriptParser::ClassTailContext>(0);
}


size_t JavaScriptParser::ClassDeclarationContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassDeclaration;
}

void JavaScriptParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void JavaScriptParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

JavaScriptParser::ClassDeclarationContext* JavaScriptParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, JavaScriptParser::RuleClassDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    match(JavaScriptParser::Class);
    setState(372);
    match(JavaScriptParser::Identifier);
    setState(373);
    classTail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTailContext ------------------------------------------------------------------

JavaScriptParser::ClassTailContext::ClassTailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ClassTailContext::Extends() {
  return getToken(JavaScriptParser::Extends, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ClassTailContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

std::vector<JavaScriptParser::ClassElementContext *> JavaScriptParser::ClassTailContext::classElement() {
  return getRuleContexts<JavaScriptParser::ClassElementContext>();
}

JavaScriptParser::ClassElementContext* JavaScriptParser::ClassTailContext::classElement(size_t i) {
  return getRuleContext<JavaScriptParser::ClassElementContext>(i);
}


size_t JavaScriptParser::ClassTailContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassTail;
}

void JavaScriptParser::ClassTailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassTail(this);
}

void JavaScriptParser::ClassTailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassTail(this);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::classTail() {
  ClassTailContext *_localctx = _tracker.createInstance<ClassTailContext>(_ctx, getState());
  enterRule(_localctx, 60, JavaScriptParser::RuleClassTail);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Extends) {
      setState(375);
      match(JavaScriptParser::Extends);
      setState(376);
      singleExpression(0);
    }
    setState(379);
    match(JavaScriptParser::OpenBrace);
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::Multiply)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
      | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
      | (1ULL << JavaScriptParser::Break)
      | (1ULL << JavaScriptParser::Do)
      | (1ULL << JavaScriptParser::Instanceof)
      | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::Case - 64))
      | (1ULL << (JavaScriptParser::Else - 64))
      | (1ULL << (JavaScriptParser::New - 64))
      | (1ULL << (JavaScriptParser::Var - 64))
      | (1ULL << (JavaScriptParser::Catch - 64))
      | (1ULL << (JavaScriptParser::Finally - 64))
      | (1ULL << (JavaScriptParser::Return - 64))
      | (1ULL << (JavaScriptParser::Void - 64))
      | (1ULL << (JavaScriptParser::Continue - 64))
      | (1ULL << (JavaScriptParser::For - 64))
      | (1ULL << (JavaScriptParser::Switch - 64))
      | (1ULL << (JavaScriptParser::While - 64))
      | (1ULL << (JavaScriptParser::Debugger - 64))
      | (1ULL << (JavaScriptParser::Function - 64))
      | (1ULL << (JavaScriptParser::This - 64))
      | (1ULL << (JavaScriptParser::With - 64))
      | (1ULL << (JavaScriptParser::Default - 64))
      | (1ULL << (JavaScriptParser::If - 64))
      | (1ULL << (JavaScriptParser::Throw - 64))
      | (1ULL << (JavaScriptParser::Delete - 64))
      | (1ULL << (JavaScriptParser::In - 64))
      | (1ULL << (JavaScriptParser::Try - 64))
      | (1ULL << (JavaScriptParser::Class - 64))
      | (1ULL << (JavaScriptParser::Enum - 64))
      | (1ULL << (JavaScriptParser::Extends - 64))
      | (1ULL << (JavaScriptParser::Super - 64))
      | (1ULL << (JavaScriptParser::Const - 64))
      | (1ULL << (JavaScriptParser::Export - 64))
      | (1ULL << (JavaScriptParser::Import - 64))
      | (1ULL << (JavaScriptParser::Implements - 64))
      | (1ULL << (JavaScriptParser::Let - 64))
      | (1ULL << (JavaScriptParser::Private - 64))
      | (1ULL << (JavaScriptParser::Public - 64))
      | (1ULL << (JavaScriptParser::Interface - 64))
      | (1ULL << (JavaScriptParser::Package - 64))
      | (1ULL << (JavaScriptParser::Protected - 64))
      | (1ULL << (JavaScriptParser::Static - 64))
      | (1ULL << (JavaScriptParser::Yield - 64))
      | (1ULL << (JavaScriptParser::Identifier - 64))
      | (1ULL << (JavaScriptParser::StringLiteral - 64)))) != 0)) {
      setState(380);
      classElement();
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(386);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassElementContext ------------------------------------------------------------------

JavaScriptParser::ClassElementContext::ClassElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::MethodDefinitionContext* JavaScriptParser::ClassElementContext::methodDefinition() {
  return getRuleContext<JavaScriptParser::MethodDefinitionContext>(0);
}

tree::TerminalNode* JavaScriptParser::ClassElementContext::Static() {
  return getToken(JavaScriptParser::Static, 0);
}


size_t JavaScriptParser::ClassElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleClassElement;
}

void JavaScriptParser::ClassElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassElement(this);
}

void JavaScriptParser::ClassElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassElement(this);
}

JavaScriptParser::ClassElementContext* JavaScriptParser::classElement() {
  ClassElementContext *_localctx = _tracker.createInstance<ClassElementContext>(_ctx, getState());
  enterRule(_localctx, 62, JavaScriptParser::RuleClassElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(388);
      match(JavaScriptParser::Static);
      break;
    }

    }
    setState(391);
    methodDefinition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDefinitionContext ------------------------------------------------------------------

JavaScriptParser::MethodDefinitionContext::MethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::MethodDefinitionContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::MethodDefinitionContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::MethodDefinitionContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}

JavaScriptParser::GetterContext* JavaScriptParser::MethodDefinitionContext::getter() {
  return getRuleContext<JavaScriptParser::GetterContext>(0);
}

JavaScriptParser::SetterContext* JavaScriptParser::MethodDefinitionContext::setter() {
  return getRuleContext<JavaScriptParser::SetterContext>(0);
}

JavaScriptParser::GeneratorMethodContext* JavaScriptParser::MethodDefinitionContext::generatorMethod() {
  return getRuleContext<JavaScriptParser::GeneratorMethodContext>(0);
}


size_t JavaScriptParser::MethodDefinitionContext::getRuleIndex() const {
  return JavaScriptParser::RuleMethodDefinition;
}

void JavaScriptParser::MethodDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodDefinition(this);
}

void JavaScriptParser::MethodDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodDefinition(this);
}

JavaScriptParser::MethodDefinitionContext* JavaScriptParser::methodDefinition() {
  MethodDefinitionContext *_localctx = _tracker.createInstance<MethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 64, JavaScriptParser::RuleMethodDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(393);
      propertyName();
      setState(394);
      match(JavaScriptParser::OpenParen);
      setState(396);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(395);
        formalParameterList();
      }
      setState(398);
      match(JavaScriptParser::CloseParen);
      setState(399);
      match(JavaScriptParser::OpenBrace);
      setState(400);
      functionBody();
      setState(401);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(403);
      getter();
      setState(404);
      match(JavaScriptParser::OpenParen);
      setState(405);
      match(JavaScriptParser::CloseParen);
      setState(406);
      match(JavaScriptParser::OpenBrace);
      setState(407);
      functionBody();
      setState(408);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(410);
      setter();
      setState(411);
      match(JavaScriptParser::OpenParen);
      setState(413);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(412);
        formalParameterList();
      }
      setState(415);
      match(JavaScriptParser::CloseParen);
      setState(416);
      match(JavaScriptParser::OpenBrace);
      setState(417);
      functionBody();
      setState(418);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(420);
      generatorMethod();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneratorMethodContext ------------------------------------------------------------------

JavaScriptParser::GeneratorMethodContext::GeneratorMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::GeneratorMethodContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::GeneratorMethodContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::GeneratorMethodContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}


size_t JavaScriptParser::GeneratorMethodContext::getRuleIndex() const {
  return JavaScriptParser::RuleGeneratorMethod;
}

void JavaScriptParser::GeneratorMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeneratorMethod(this);
}

void JavaScriptParser::GeneratorMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeneratorMethod(this);
}

JavaScriptParser::GeneratorMethodContext* JavaScriptParser::generatorMethod() {
  GeneratorMethodContext *_localctx = _tracker.createInstance<GeneratorMethodContext>(_ctx, getState());
  enterRule(_localctx, 66, JavaScriptParser::RuleGeneratorMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Multiply) {
      setState(423);
      match(JavaScriptParser::Multiply);
    }
    setState(426);
    match(JavaScriptParser::Identifier);
    setState(427);
    match(JavaScriptParser::OpenParen);
    setState(429);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
      setState(428);
      formalParameterList();
    }
    setState(431);
    match(JavaScriptParser::CloseParen);
    setState(432);
    match(JavaScriptParser::OpenBrace);
    setState(433);
    functionBody();
    setState(434);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

JavaScriptParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::FormalParameterArgContext *> JavaScriptParser::FormalParameterListContext::formalParameterArg() {
  return getRuleContexts<JavaScriptParser::FormalParameterArgContext>();
}

JavaScriptParser::FormalParameterArgContext* JavaScriptParser::FormalParameterListContext::formalParameterArg(size_t i) {
  return getRuleContext<JavaScriptParser::FormalParameterArgContext>(i);
}

JavaScriptParser::LastFormalParameterArgContext* JavaScriptParser::FormalParameterListContext::lastFormalParameterArg() {
  return getRuleContext<JavaScriptParser::LastFormalParameterArgContext>(0);
}

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::FormalParameterListContext::arrayLiteral() {
  return getRuleContext<JavaScriptParser::ArrayLiteralContext>(0);
}

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::FormalParameterListContext::objectLiteral() {
  return getRuleContext<JavaScriptParser::ObjectLiteralContext>(0);
}


size_t JavaScriptParser::FormalParameterListContext::getRuleIndex() const {
  return JavaScriptParser::RuleFormalParameterList;
}

void JavaScriptParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void JavaScriptParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 68, JavaScriptParser::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(451);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(436);
        formalParameterArg();
        setState(441);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(437);
            match(JavaScriptParser::Comma);
            setState(438);
            formalParameterArg(); 
          }
          setState(443);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
        }
        setState(446);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaScriptParser::Comma) {
          setState(444);
          match(JavaScriptParser::Comma);
          setState(445);
          lastFormalParameterArg();
        }
        break;
      }

      case JavaScriptParser::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(448);
        lastFormalParameterArg();
        break;
      }

      case JavaScriptParser::OpenBracket: {
        enterOuterAlt(_localctx, 3);
        setState(449);
        arrayLiteral();
        break;
      }

      case JavaScriptParser::OpenBrace: {
        enterOuterAlt(_localctx, 4);
        setState(450);
        objectLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterArgContext ------------------------------------------------------------------

JavaScriptParser::FormalParameterArgContext::FormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::FormalParameterArgContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::FormalParameterArgContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}


size_t JavaScriptParser::FormalParameterArgContext::getRuleIndex() const {
  return JavaScriptParser::RuleFormalParameterArg;
}

void JavaScriptParser::FormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterArg(this);
}

void JavaScriptParser::FormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterArg(this);
}

JavaScriptParser::FormalParameterArgContext* JavaScriptParser::formalParameterArg() {
  FormalParameterArgContext *_localctx = _tracker.createInstance<FormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 70, JavaScriptParser::RuleFormalParameterArg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(JavaScriptParser::Identifier);
    setState(456);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Assign) {
      setState(454);
      match(JavaScriptParser::Assign);
      setState(455);
      singleExpression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastFormalParameterArgContext ------------------------------------------------------------------

JavaScriptParser::LastFormalParameterArgContext::LastFormalParameterArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LastFormalParameterArgContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}

tree::TerminalNode* JavaScriptParser::LastFormalParameterArgContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::LastFormalParameterArgContext::getRuleIndex() const {
  return JavaScriptParser::RuleLastFormalParameterArg;
}

void JavaScriptParser::LastFormalParameterArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastFormalParameterArg(this);
}

void JavaScriptParser::LastFormalParameterArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastFormalParameterArg(this);
}

JavaScriptParser::LastFormalParameterArgContext* JavaScriptParser::lastFormalParameterArg() {
  LastFormalParameterArgContext *_localctx = _tracker.createInstance<LastFormalParameterArgContext>(_ctx, getState());
  enterRule(_localctx, 72, JavaScriptParser::RuleLastFormalParameterArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(JavaScriptParser::Ellipsis);
    setState(459);
    match(JavaScriptParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionBodyContext ------------------------------------------------------------------

JavaScriptParser::FunctionBodyContext::FunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::FunctionBodyContext::sourceElements() {
  return getRuleContext<JavaScriptParser::SourceElementsContext>(0);
}


size_t JavaScriptParser::FunctionBodyContext::getRuleIndex() const {
  return JavaScriptParser::RuleFunctionBody;
}

void JavaScriptParser::FunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionBody(this);
}

void JavaScriptParser::FunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionBody(this);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::functionBody() {
  FunctionBodyContext *_localctx = _tracker.createInstance<FunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 74, JavaScriptParser::RuleFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(461);
      sourceElements();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceElementsContext ------------------------------------------------------------------

JavaScriptParser::SourceElementsContext::SourceElementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SourceElementContext *> JavaScriptParser::SourceElementsContext::sourceElement() {
  return getRuleContexts<JavaScriptParser::SourceElementContext>();
}

JavaScriptParser::SourceElementContext* JavaScriptParser::SourceElementsContext::sourceElement(size_t i) {
  return getRuleContext<JavaScriptParser::SourceElementContext>(i);
}


size_t JavaScriptParser::SourceElementsContext::getRuleIndex() const {
  return JavaScriptParser::RuleSourceElements;
}

void JavaScriptParser::SourceElementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceElements(this);
}

void JavaScriptParser::SourceElementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceElements(this);
}

JavaScriptParser::SourceElementsContext* JavaScriptParser::sourceElements() {
  SourceElementsContext *_localctx = _tracker.createInstance<SourceElementsContext>(_ctx, getState());
  enterRule(_localctx, 76, JavaScriptParser::RuleSourceElements);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(465); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(464);
              sourceElement();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(467); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLiteralContext ------------------------------------------------------------------

JavaScriptParser::ArrayLiteralContext::ArrayLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::ElementListContext* JavaScriptParser::ArrayLiteralContext::elementList() {
  return getRuleContext<JavaScriptParser::ElementListContext>(0);
}


size_t JavaScriptParser::ArrayLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrayLiteral;
}

void JavaScriptParser::ArrayLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteral(this);
}

void JavaScriptParser::ArrayLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteral(this);
}

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::arrayLiteral() {
  ArrayLiteralContext *_localctx = _tracker.createInstance<ArrayLiteralContext>(_ctx, getState());
  enterRule(_localctx, 78, JavaScriptParser::RuleArrayLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(JavaScriptParser::OpenBracket);
    setState(473);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(470);
        match(JavaScriptParser::Comma); 
      }
      setState(475);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
    setState(477);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::RegularExpressionLiteral)
      | (1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::OpenParen)
      | (1ULL << JavaScriptParser::OpenBrace)
      | (1ULL << JavaScriptParser::Ellipsis)
      | (1ULL << JavaScriptParser::PlusPlus)
      | (1ULL << JavaScriptParser::MinusMinus)
      | (1ULL << JavaScriptParser::Plus)
      | (1ULL << JavaScriptParser::Minus)
      | (1ULL << JavaScriptParser::BitNot)
      | (1ULL << JavaScriptParser::Not)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
      | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
      | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 66) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 66)) & ((1ULL << (JavaScriptParser::New - 66))
      | (1ULL << (JavaScriptParser::Void - 66))
      | (1ULL << (JavaScriptParser::Function - 66))
      | (1ULL << (JavaScriptParser::This - 66))
      | (1ULL << (JavaScriptParser::Delete - 66))
      | (1ULL << (JavaScriptParser::Class - 66))
      | (1ULL << (JavaScriptParser::Super - 66))
      | (1ULL << (JavaScriptParser::Identifier - 66))
      | (1ULL << (JavaScriptParser::StringLiteral - 66))
      | (1ULL << (JavaScriptParser::TemplateStringLiteral - 66)))) != 0)) {
      setState(476);
      elementList();
    }
    setState(482);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == JavaScriptParser::Comma) {
      setState(479);
      match(JavaScriptParser::Comma);
      setState(484);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(485);
    match(JavaScriptParser::CloseBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

JavaScriptParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ElementListContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ElementListContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::LastElementContext* JavaScriptParser::ElementListContext::lastElement() {
  return getRuleContext<JavaScriptParser::LastElementContext>(0);
}


size_t JavaScriptParser::ElementListContext::getRuleIndex() const {
  return JavaScriptParser::RuleElementList;
}

void JavaScriptParser::ElementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementList(this);
}

void JavaScriptParser::ElementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementList(this);
}

JavaScriptParser::ElementListContext* JavaScriptParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 80, JavaScriptParser::RuleElementList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(508);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::RegularExpressionLiteral:
      case JavaScriptParser::OpenBracket:
      case JavaScriptParser::OpenParen:
      case JavaScriptParser::OpenBrace:
      case JavaScriptParser::PlusPlus:
      case JavaScriptParser::MinusMinus:
      case JavaScriptParser::Plus:
      case JavaScriptParser::Minus:
      case JavaScriptParser::BitNot:
      case JavaScriptParser::Not:
      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::New:
      case JavaScriptParser::Void:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::Delete:
      case JavaScriptParser::Class:
      case JavaScriptParser::Super:
      case JavaScriptParser::Identifier:
      case JavaScriptParser::StringLiteral:
      case JavaScriptParser::TemplateStringLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        singleExpression(0);
        setState(496);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(489); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(488);
              match(JavaScriptParser::Comma);
              setState(491); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while (_la == JavaScriptParser::Comma);
            setState(493);
            singleExpression(0); 
          }
          setState(498);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
        }
        setState(505);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
        case 1: {
          setState(500); 
          _errHandler->sync(this);
          _la = _input->LA(1);
          do {
            setState(499);
            match(JavaScriptParser::Comma);
            setState(502); 
            _errHandler->sync(this);
            _la = _input->LA(1);
          } while (_la == JavaScriptParser::Comma);
          setState(504);
          lastElement();
          break;
        }

        }
        break;
      }

      case JavaScriptParser::Ellipsis: {
        enterOuterAlt(_localctx, 2);
        setState(507);
        lastElement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastElementContext ------------------------------------------------------------------

JavaScriptParser::LastElementContext::LastElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LastElementContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}

tree::TerminalNode* JavaScriptParser::LastElementContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::LastElementContext::getRuleIndex() const {
  return JavaScriptParser::RuleLastElement;
}

void JavaScriptParser::LastElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastElement(this);
}

void JavaScriptParser::LastElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastElement(this);
}

JavaScriptParser::LastElementContext* JavaScriptParser::lastElement() {
  LastElementContext *_localctx = _tracker.createInstance<LastElementContext>(_ctx, getState());
  enterRule(_localctx, 82, JavaScriptParser::RuleLastElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(510);
    match(JavaScriptParser::Ellipsis);
    setState(511);
    match(JavaScriptParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectLiteralContext ------------------------------------------------------------------

JavaScriptParser::ObjectLiteralContext::ObjectLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::PropertyAssignmentContext *> JavaScriptParser::ObjectLiteralContext::propertyAssignment() {
  return getRuleContexts<JavaScriptParser::PropertyAssignmentContext>();
}

JavaScriptParser::PropertyAssignmentContext* JavaScriptParser::ObjectLiteralContext::propertyAssignment(size_t i) {
  return getRuleContext<JavaScriptParser::PropertyAssignmentContext>(i);
}


size_t JavaScriptParser::ObjectLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleObjectLiteral;
}

void JavaScriptParser::ObjectLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteral(this);
}

void JavaScriptParser::ObjectLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteral(this);
}

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::objectLiteral() {
  ObjectLiteralContext *_localctx = _tracker.createInstance<ObjectLiteralContext>(_ctx, getState());
  enterRule(_localctx, 84, JavaScriptParser::RuleObjectLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(JavaScriptParser::OpenBrace);
    setState(522);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
      | (1ULL << JavaScriptParser::Multiply)
      | (1ULL << JavaScriptParser::NullLiteral)
      | (1ULL << JavaScriptParser::BooleanLiteral)
      | (1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
      | (1ULL << JavaScriptParser::BinaryIntegerLiteral)
      | (1ULL << JavaScriptParser::Break)
      | (1ULL << JavaScriptParser::Do)
      | (1ULL << JavaScriptParser::Instanceof)
      | (1ULL << JavaScriptParser::Typeof))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (JavaScriptParser::Case - 64))
      | (1ULL << (JavaScriptParser::Else - 64))
      | (1ULL << (JavaScriptParser::New - 64))
      | (1ULL << (JavaScriptParser::Var - 64))
      | (1ULL << (JavaScriptParser::Catch - 64))
      | (1ULL << (JavaScriptParser::Finally - 64))
      | (1ULL << (JavaScriptParser::Return - 64))
      | (1ULL << (JavaScriptParser::Void - 64))
      | (1ULL << (JavaScriptParser::Continue - 64))
      | (1ULL << (JavaScriptParser::For - 64))
      | (1ULL << (JavaScriptParser::Switch - 64))
      | (1ULL << (JavaScriptParser::While - 64))
      | (1ULL << (JavaScriptParser::Debugger - 64))
      | (1ULL << (JavaScriptParser::Function - 64))
      | (1ULL << (JavaScriptParser::This - 64))
      | (1ULL << (JavaScriptParser::With - 64))
      | (1ULL << (JavaScriptParser::Default - 64))
      | (1ULL << (JavaScriptParser::If - 64))
      | (1ULL << (JavaScriptParser::Throw - 64))
      | (1ULL << (JavaScriptParser::Delete - 64))
      | (1ULL << (JavaScriptParser::In - 64))
      | (1ULL << (JavaScriptParser::Try - 64))
      | (1ULL << (JavaScriptParser::Class - 64))
      | (1ULL << (JavaScriptParser::Enum - 64))
      | (1ULL << (JavaScriptParser::Extends - 64))
      | (1ULL << (JavaScriptParser::Super - 64))
      | (1ULL << (JavaScriptParser::Const - 64))
      | (1ULL << (JavaScriptParser::Export - 64))
      | (1ULL << (JavaScriptParser::Import - 64))
      | (1ULL << (JavaScriptParser::Implements - 64))
      | (1ULL << (JavaScriptParser::Let - 64))
      | (1ULL << (JavaScriptParser::Private - 64))
      | (1ULL << (JavaScriptParser::Public - 64))
      | (1ULL << (JavaScriptParser::Interface - 64))
      | (1ULL << (JavaScriptParser::Package - 64))
      | (1ULL << (JavaScriptParser::Protected - 64))
      | (1ULL << (JavaScriptParser::Static - 64))
      | (1ULL << (JavaScriptParser::Yield - 64))
      | (1ULL << (JavaScriptParser::Identifier - 64))
      | (1ULL << (JavaScriptParser::StringLiteral - 64)))) != 0)) {
      setState(514);
      propertyAssignment();
      setState(519);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(515);
          match(JavaScriptParser::Comma);
          setState(516);
          propertyAssignment(); 
        }
        setState(521);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
      }
    }
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JavaScriptParser::Comma) {
      setState(524);
      match(JavaScriptParser::Comma);
    }
    setState(527);
    match(JavaScriptParser::CloseBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyAssignmentContext ------------------------------------------------------------------

JavaScriptParser::PropertyAssignmentContext::PropertyAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::PropertyAssignmentContext::getRuleIndex() const {
  return JavaScriptParser::RulePropertyAssignment;
}

void JavaScriptParser::PropertyAssignmentContext::copyFrom(PropertyAssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PropertyExpressionAssignmentContext ------------------------------------------------------------------

JavaScriptParser::PropertyNameContext* JavaScriptParser::PropertyExpressionAssignmentContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PropertyExpressionAssignmentContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PropertyExpressionAssignmentContext::PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyExpressionAssignment(this);
}
void JavaScriptParser::PropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyExpressionAssignment(this);
}
//----------------- ComputedPropertyExpressionAssignmentContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ComputedPropertyExpressionAssignmentContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ComputedPropertyExpressionAssignmentContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::ComputedPropertyExpressionAssignmentContext::ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ComputedPropertyExpressionAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComputedPropertyExpressionAssignment(this);
}
void JavaScriptParser::ComputedPropertyExpressionAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComputedPropertyExpressionAssignment(this);
}
//----------------- PropertyShorthandContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::PropertyShorthandContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::PropertyShorthandContext::PropertyShorthandContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyShorthandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyShorthand(this);
}
void JavaScriptParser::PropertyShorthandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyShorthand(this);
}
//----------------- PropertySetterContext ------------------------------------------------------------------

JavaScriptParser::SetterContext* JavaScriptParser::PropertySetterContext::setter() {
  return getRuleContext<JavaScriptParser::SetterContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertySetterContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::PropertySetterContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

JavaScriptParser::PropertySetterContext::PropertySetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertySetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertySetter(this);
}
void JavaScriptParser::PropertySetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertySetter(this);
}
//----------------- PropertyGetterContext ------------------------------------------------------------------

JavaScriptParser::GetterContext* JavaScriptParser::PropertyGetterContext::getter() {
  return getRuleContext<JavaScriptParser::GetterContext>(0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::PropertyGetterContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

JavaScriptParser::PropertyGetterContext::PropertyGetterContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PropertyGetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyGetter(this);
}
void JavaScriptParser::PropertyGetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyGetter(this);
}
//----------------- MethodPropertyContext ------------------------------------------------------------------

JavaScriptParser::GeneratorMethodContext* JavaScriptParser::MethodPropertyContext::generatorMethod() {
  return getRuleContext<JavaScriptParser::GeneratorMethodContext>(0);
}

JavaScriptParser::MethodPropertyContext::MethodPropertyContext(PropertyAssignmentContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MethodPropertyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodProperty(this);
}
void JavaScriptParser::MethodPropertyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodProperty(this);
}
JavaScriptParser::PropertyAssignmentContext* JavaScriptParser::propertyAssignment() {
  PropertyAssignmentContext *_localctx = _tracker.createInstance<PropertyAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 86, JavaScriptParser::RulePropertyAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(556);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(529);
      propertyName();
      setState(530);
      _la = _input->LA(1);
      if (!(_la == JavaScriptParser::Assign

      || _la == JavaScriptParser::Colon)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(531);
      singleExpression(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::ComputedPropertyExpressionAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(533);
      match(JavaScriptParser::OpenBracket);
      setState(534);
      singleExpression(0);
      setState(535);
      match(JavaScriptParser::CloseBracket);
      setState(536);
      match(JavaScriptParser::Colon);
      setState(537);
      singleExpression(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyGetterContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(539);
      getter();
      setState(540);
      match(JavaScriptParser::OpenParen);
      setState(541);
      match(JavaScriptParser::CloseParen);
      setState(542);
      match(JavaScriptParser::OpenBrace);
      setState(543);
      functionBody();
      setState(544);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertySetterContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(546);
      setter();
      setState(547);
      match(JavaScriptParser::OpenParen);
      setState(548);
      match(JavaScriptParser::Identifier);
      setState(549);
      match(JavaScriptParser::CloseParen);
      setState(550);
      match(JavaScriptParser::OpenBrace);
      setState(551);
      functionBody();
      setState(552);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::MethodPropertyContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(554);
      generatorMethod();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<PropertyAssignmentContext *>(_tracker.createInstance<JavaScriptParser::PropertyShorthandContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(555);
      match(JavaScriptParser::Identifier);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyNameContext ------------------------------------------------------------------

JavaScriptParser::PropertyNameContext::PropertyNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::PropertyNameContext::identifierName() {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(0);
}

tree::TerminalNode* JavaScriptParser::PropertyNameContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::PropertyNameContext::numericLiteral() {
  return getRuleContext<JavaScriptParser::NumericLiteralContext>(0);
}


size_t JavaScriptParser::PropertyNameContext::getRuleIndex() const {
  return JavaScriptParser::RulePropertyName;
}

void JavaScriptParser::PropertyNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyName(this);
}

void JavaScriptParser::PropertyNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyName(this);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::propertyName() {
  PropertyNameContext *_localctx = _tracker.createInstance<PropertyNameContext>(_ctx, getState());
  enterRule(_localctx, 88, JavaScriptParser::RulePropertyName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(561);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield:
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(558);
        identifierName();
        break;
      }

      case JavaScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(559);
        match(JavaScriptParser::StringLiteral);
        break;
      }

      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(560);
        numericLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

JavaScriptParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ArgumentsContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArgumentsContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::LastArgumentContext* JavaScriptParser::ArgumentsContext::lastArgument() {
  return getRuleContext<JavaScriptParser::LastArgumentContext>(0);
}


size_t JavaScriptParser::ArgumentsContext::getRuleIndex() const {
  return JavaScriptParser::RuleArguments;
}

void JavaScriptParser::ArgumentsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArguments(this);
}

void JavaScriptParser::ArgumentsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArguments(this);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 90, JavaScriptParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(JavaScriptParser::OpenParen);
    setState(577);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::RegularExpressionLiteral:
      case JavaScriptParser::OpenBracket:
      case JavaScriptParser::OpenParen:
      case JavaScriptParser::OpenBrace:
      case JavaScriptParser::PlusPlus:
      case JavaScriptParser::MinusMinus:
      case JavaScriptParser::Plus:
      case JavaScriptParser::Minus:
      case JavaScriptParser::BitNot:
      case JavaScriptParser::Not:
      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::New:
      case JavaScriptParser::Void:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::Delete:
      case JavaScriptParser::Class:
      case JavaScriptParser::Super:
      case JavaScriptParser::Identifier:
      case JavaScriptParser::StringLiteral:
      case JavaScriptParser::TemplateStringLiteral: {
        setState(564);
        singleExpression(0);
        setState(569);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(565);
            match(JavaScriptParser::Comma);
            setState(566);
            singleExpression(0); 
          }
          setState(571);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
        }
        setState(574);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == JavaScriptParser::Comma) {
          setState(572);
          match(JavaScriptParser::Comma);
          setState(573);
          lastArgument();
        }
        break;
      }

      case JavaScriptParser::Ellipsis: {
        setState(576);
        lastArgument();
        break;
      }

      case JavaScriptParser::CloseParen: {
        break;
      }

    default:
      break;
    }
    setState(579);
    match(JavaScriptParser::CloseParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LastArgumentContext ------------------------------------------------------------------

JavaScriptParser::LastArgumentContext::LastArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LastArgumentContext::Ellipsis() {
  return getToken(JavaScriptParser::Ellipsis, 0);
}

tree::TerminalNode* JavaScriptParser::LastArgumentContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}


size_t JavaScriptParser::LastArgumentContext::getRuleIndex() const {
  return JavaScriptParser::RuleLastArgument;
}

void JavaScriptParser::LastArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastArgument(this);
}

void JavaScriptParser::LastArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastArgument(this);
}

JavaScriptParser::LastArgumentContext* JavaScriptParser::lastArgument() {
  LastArgumentContext *_localctx = _tracker.createInstance<LastArgumentContext>(_ctx, getState());
  enterRule(_localctx, 92, JavaScriptParser::RuleLastArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(JavaScriptParser::Ellipsis);
    setState(582);
    match(JavaScriptParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionSequenceContext ------------------------------------------------------------------

JavaScriptParser::ExpressionSequenceContext::ExpressionSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::ExpressionSequenceContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ExpressionSequenceContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}


size_t JavaScriptParser::ExpressionSequenceContext::getRuleIndex() const {
  return JavaScriptParser::RuleExpressionSequence;
}

void JavaScriptParser::ExpressionSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionSequence(this);
}

void JavaScriptParser::ExpressionSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionSequence(this);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::expressionSequence() {
  ExpressionSequenceContext *_localctx = _tracker.createInstance<ExpressionSequenceContext>(_ctx, getState());
  enterRule(_localctx, 94, JavaScriptParser::RuleExpressionSequence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(584);
    singleExpression(0);
    setState(589);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(585);
        match(JavaScriptParser::Comma);
        setState(586);
        singleExpression(0); 
      }
      setState(591);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext::SingleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::SingleExpressionContext::getRuleIndex() const {
  return JavaScriptParser::RuleSingleExpression;
}

void JavaScriptParser::SingleExpressionContext::copyFrom(SingleExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TemplateStringExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TemplateStringExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

tree::TerminalNode* JavaScriptParser::TemplateStringExpressionContext::TemplateStringLiteral() {
  return getToken(JavaScriptParser::TemplateStringLiteral, 0);
}

JavaScriptParser::TemplateStringExpressionContext::TemplateStringExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TemplateStringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateStringExpression(this);
}
void JavaScriptParser::TemplateStringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateStringExpression(this);
}
//----------------- TernaryExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::TernaryExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TernaryExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::TernaryExpressionContext::TernaryExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TernaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryExpression(this);
}
void JavaScriptParser::TernaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryExpression(this);
}
//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::LogicalAndExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::LogicalAndExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::LogicalAndExpressionContext::LogicalAndExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}
void JavaScriptParser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}
//----------------- PreIncrementExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PreIncrementExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PreIncrementExpressionContext::PreIncrementExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PreIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIncrementExpression(this);
}
void JavaScriptParser::PreIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIncrementExpression(this);
}
//----------------- ObjectLiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::ObjectLiteralContext* JavaScriptParser::ObjectLiteralExpressionContext::objectLiteral() {
  return getRuleContext<JavaScriptParser::ObjectLiteralContext>(0);
}

JavaScriptParser::ObjectLiteralExpressionContext::ObjectLiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ObjectLiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectLiteralExpression(this);
}
void JavaScriptParser::ObjectLiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectLiteralExpression(this);
}
//----------------- InExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::InExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::InExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::InExpressionContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

JavaScriptParser::InExpressionContext::InExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::InExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInExpression(this);
}
void JavaScriptParser::InExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInExpression(this);
}
//----------------- LogicalOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::LogicalOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::LogicalOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::LogicalOrExpressionContext::LogicalOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LogicalOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOrExpression(this);
}
void JavaScriptParser::LogicalOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOrExpression(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::NotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::NotExpressionContext::NotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void JavaScriptParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}
//----------------- PreDecreaseExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PreDecreaseExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PreDecreaseExpressionContext::PreDecreaseExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PreDecreaseExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreDecreaseExpression(this);
}
void JavaScriptParser::PreDecreaseExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreDecreaseExpression(this);
}
//----------------- ArgumentsExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArgumentsExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::ArgumentsExpressionContext::arguments() {
  return getRuleContext<JavaScriptParser::ArgumentsContext>(0);
}

JavaScriptParser::ArgumentsExpressionContext::ArgumentsExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArgumentsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentsExpression(this);
}
void JavaScriptParser::ArgumentsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentsExpression(this);
}
//----------------- ThisExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ThisExpressionContext::This() {
  return getToken(JavaScriptParser::This, 0);
}

JavaScriptParser::ThisExpressionContext::ThisExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ThisExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThisExpression(this);
}
void JavaScriptParser::ThisExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThisExpression(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::FunctionExpressionContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::FunctionExpressionContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}

tree::TerminalNode* JavaScriptParser::FunctionExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::FunctionExpressionContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}

JavaScriptParser::FunctionExpressionContext::FunctionExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::FunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionExpression(this);
}
void JavaScriptParser::FunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionExpression(this);
}
//----------------- UnaryMinusExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::UnaryMinusExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::UnaryMinusExpressionContext::UnaryMinusExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::UnaryMinusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusExpression(this);
}
void JavaScriptParser::UnaryMinusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusExpression(this);
}
//----------------- AssignmentExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AssignmentExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AssignmentExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::AssignmentExpressionContext::AssignmentExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}
void JavaScriptParser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}
//----------------- PostDecreaseExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PostDecreaseExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PostDecreaseExpressionContext::PostDecreaseExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PostDecreaseExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecreaseExpression(this);
}
void JavaScriptParser::PostDecreaseExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecreaseExpression(this);
}
//----------------- TypeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::TypeofExpressionContext::Typeof() {
  return getToken(JavaScriptParser::Typeof, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::TypeofExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::TypeofExpressionContext::TypeofExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::TypeofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeofExpression(this);
}
void JavaScriptParser::TypeofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeofExpression(this);
}
//----------------- InstanceofExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::InstanceofExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::InstanceofExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

tree::TerminalNode* JavaScriptParser::InstanceofExpressionContext::Instanceof() {
  return getToken(JavaScriptParser::Instanceof, 0);
}

JavaScriptParser::InstanceofExpressionContext::InstanceofExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::InstanceofExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstanceofExpression(this);
}
void JavaScriptParser::InstanceofExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstanceofExpression(this);
}
//----------------- UnaryPlusExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::UnaryPlusExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::UnaryPlusExpressionContext::UnaryPlusExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::UnaryPlusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPlusExpression(this);
}
void JavaScriptParser::UnaryPlusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPlusExpression(this);
}
//----------------- DeleteExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::DeleteExpressionContext::Delete() {
  return getToken(JavaScriptParser::Delete, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::DeleteExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::DeleteExpressionContext::DeleteExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::DeleteExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteExpression(this);
}
void JavaScriptParser::DeleteExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteExpression(this);
}
//----------------- ArrowFunctionExpressionContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionParametersContext* JavaScriptParser::ArrowFunctionExpressionContext::arrowFunctionParameters() {
  return getRuleContext<JavaScriptParser::ArrowFunctionParametersContext>(0);
}

JavaScriptParser::ArrowFunctionBodyContext* JavaScriptParser::ArrowFunctionExpressionContext::arrowFunctionBody() {
  return getRuleContext<JavaScriptParser::ArrowFunctionBodyContext>(0);
}

JavaScriptParser::ArrowFunctionExpressionContext::ArrowFunctionExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArrowFunctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionExpression(this);
}
void JavaScriptParser::ArrowFunctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionExpression(this);
}
//----------------- EqualityExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::EqualityExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::EqualityExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::EqualityExpressionContext::EqualityExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}
void JavaScriptParser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}
//----------------- BitXOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitXOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitXOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::BitXOrExpressionContext::BitXOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitXOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitXOrExpression(this);
}
void JavaScriptParser::BitXOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitXOrExpression(this);
}
//----------------- SuperExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::SuperExpressionContext::Super() {
  return getToken(JavaScriptParser::Super, 0);
}

JavaScriptParser::SuperExpressionContext::SuperExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::SuperExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuperExpression(this);
}
void JavaScriptParser::SuperExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuperExpression(this);
}
//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::MultiplicativeExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MultiplicativeExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}
void JavaScriptParser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}
//----------------- BitShiftExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitShiftExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitShiftExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::BitShiftExpressionContext::BitShiftExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitShiftExpression(this);
}
void JavaScriptParser::BitShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitShiftExpression(this);
}
//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::ParenthesizedExpressionContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ParenthesizedExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedExpression(this);
}
void JavaScriptParser::ParenthesizedExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedExpression(this);
}
//----------------- AdditiveExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AdditiveExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AdditiveExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::AdditiveExpressionContext::AdditiveExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}
void JavaScriptParser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}
//----------------- RelationalExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::RelationalExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::RelationalExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::RelationalExpressionContext::RelationalExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::RelationalExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalExpression(this);
}
void JavaScriptParser::RelationalExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalExpression(this);
}
//----------------- PostIncrementExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::PostIncrementExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::PostIncrementExpressionContext::PostIncrementExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::PostIncrementExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrementExpression(this);
}
void JavaScriptParser::PostIncrementExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrementExpression(this);
}
//----------------- BitNotExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitNotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::BitNotExpressionContext::BitNotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitNotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitNotExpression(this);
}
void JavaScriptParser::BitNotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitNotExpression(this);
}
//----------------- NewExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::NewExpressionContext::New() {
  return getToken(JavaScriptParser::New, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::NewExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ArgumentsContext* JavaScriptParser::NewExpressionContext::arguments() {
  return getRuleContext<JavaScriptParser::ArgumentsContext>(0);
}

JavaScriptParser::NewExpressionContext::NewExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::NewExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewExpression(this);
}
void JavaScriptParser::NewExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewExpression(this);
}
//----------------- LiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::LiteralContext* JavaScriptParser::LiteralExpressionContext::literal() {
  return getRuleContext<JavaScriptParser::LiteralContext>(0);
}

JavaScriptParser::LiteralExpressionContext::LiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::LiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpression(this);
}
void JavaScriptParser::LiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpression(this);
}
//----------------- ArrayLiteralExpressionContext ------------------------------------------------------------------

JavaScriptParser::ArrayLiteralContext* JavaScriptParser::ArrayLiteralExpressionContext::arrayLiteral() {
  return getRuleContext<JavaScriptParser::ArrayLiteralContext>(0);
}

JavaScriptParser::ArrayLiteralExpressionContext::ArrayLiteralExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ArrayLiteralExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLiteralExpression(this);
}
void JavaScriptParser::ArrayLiteralExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLiteralExpression(this);
}
//----------------- MemberDotExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MemberDotExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::MemberDotExpressionContext::identifierName() {
  return getRuleContext<JavaScriptParser::IdentifierNameContext>(0);
}

JavaScriptParser::MemberDotExpressionContext::MemberDotExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MemberDotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberDotExpression(this);
}
void JavaScriptParser::MemberDotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberDotExpression(this);
}
//----------------- ClassExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::ClassExpressionContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

JavaScriptParser::ClassTailContext* JavaScriptParser::ClassExpressionContext::classTail() {
  return getRuleContext<JavaScriptParser::ClassTailContext>(0);
}

tree::TerminalNode* JavaScriptParser::ClassExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ClassExpressionContext::ClassExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::ClassExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassExpression(this);
}
void JavaScriptParser::ClassExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassExpression(this);
}
//----------------- MemberIndexExpressionContext ------------------------------------------------------------------

JavaScriptParser::SingleExpressionContext* JavaScriptParser::MemberIndexExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::ExpressionSequenceContext* JavaScriptParser::MemberIndexExpressionContext::expressionSequence() {
  return getRuleContext<JavaScriptParser::ExpressionSequenceContext>(0);
}

JavaScriptParser::MemberIndexExpressionContext::MemberIndexExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::MemberIndexExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberIndexExpression(this);
}
void JavaScriptParser::MemberIndexExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberIndexExpression(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::IdentifierExpressionContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::IdentifierExpressionContext::IdentifierExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void JavaScriptParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}
//----------------- BitAndExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitAndExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitAndExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::BitAndExpressionContext::BitAndExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAndExpression(this);
}
void JavaScriptParser::BitAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAndExpression(this);
}
//----------------- BitOrExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::BitOrExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::BitOrExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::BitOrExpressionContext::BitOrExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::BitOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOrExpression(this);
}
void JavaScriptParser::BitOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOrExpression(this);
}
//----------------- AssignmentOperatorExpressionContext ------------------------------------------------------------------

std::vector<JavaScriptParser::SingleExpressionContext *> JavaScriptParser::AssignmentOperatorExpressionContext::singleExpression() {
  return getRuleContexts<JavaScriptParser::SingleExpressionContext>();
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::AssignmentOperatorExpressionContext::singleExpression(size_t i) {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(i);
}

JavaScriptParser::AssignmentOperatorContext* JavaScriptParser::AssignmentOperatorExpressionContext::assignmentOperator() {
  return getRuleContext<JavaScriptParser::AssignmentOperatorContext>(0);
}

JavaScriptParser::AssignmentOperatorExpressionContext::AssignmentOperatorExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::AssignmentOperatorExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperatorExpression(this);
}
void JavaScriptParser::AssignmentOperatorExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperatorExpression(this);
}
//----------------- VoidExpressionContext ------------------------------------------------------------------

tree::TerminalNode* JavaScriptParser::VoidExpressionContext::Void() {
  return getToken(JavaScriptParser::Void, 0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::VoidExpressionContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::VoidExpressionContext::VoidExpressionContext(SingleExpressionContext *ctx) { copyFrom(ctx); }

void JavaScriptParser::VoidExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoidExpression(this);
}
void JavaScriptParser::VoidExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoidExpression(this);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::singleExpression() {
   return singleExpression(0);
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::singleExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  JavaScriptParser::SingleExpressionContext *_localctx = _tracker.createInstance<SingleExpressionContext>(_ctx, parentState);
  JavaScriptParser::SingleExpressionContext *previousContext = _localctx;
  size_t startState = 96;
  enterRecursionRule(_localctx, 96, JavaScriptParser::RuleSingleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(648);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(593);
      match(JavaScriptParser::Function);
      setState(595);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Identifier) {
        setState(594);
        match(JavaScriptParser::Identifier);
      }
      setState(597);
      match(JavaScriptParser::OpenParen);
      setState(599);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
        | (1ULL << JavaScriptParser::OpenBrace)
        | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
        setState(598);
        formalParameterList();
      }
      setState(601);
      match(JavaScriptParser::CloseParen);
      setState(602);
      match(JavaScriptParser::OpenBrace);
      setState(603);
      functionBody();
      setState(604);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ClassExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(606);
      match(JavaScriptParser::Class);
      setState(608);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JavaScriptParser::Identifier) {
        setState(607);
        match(JavaScriptParser::Identifier);
      }
      setState(610);
      classTail();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NewExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(611);
      match(JavaScriptParser::New);
      setState(612);
      singleExpression(0);
      setState(614);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
      case 1: {
        setState(613);
        arguments();
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DeleteExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(616);
      match(JavaScriptParser::Delete);
      setState(617);
      singleExpression(33);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<VoidExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(618);
      match(JavaScriptParser::Void);
      setState(619);
      singleExpression(32);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<TypeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(620);
      match(JavaScriptParser::Typeof);
      setState(621);
      singleExpression(31);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PreIncrementExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(622);
      match(JavaScriptParser::PlusPlus);
      setState(623);
      singleExpression(30);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PreDecreaseExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(624);
      match(JavaScriptParser::MinusMinus);
      setState(625);
      singleExpression(29);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<UnaryPlusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(626);
      match(JavaScriptParser::Plus);
      setState(627);
      singleExpression(28);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(628);
      match(JavaScriptParser::Minus);
      setState(629);
      singleExpression(27);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<BitNotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(630);
      match(JavaScriptParser::BitNot);
      setState(631);
      singleExpression(26);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(632);
      match(JavaScriptParser::Not);
      setState(633);
      singleExpression(25);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<ThisExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(634);
      match(JavaScriptParser::This);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(635);
      match(JavaScriptParser::Identifier);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<SuperExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(636);
      match(JavaScriptParser::Super);
      break;
    }

    case 16: {
      _localctx = _tracker.createInstance<LiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(637);
      literal();
      break;
    }

    case 17: {
      _localctx = _tracker.createInstance<ArrayLiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(638);
      arrayLiteral();
      break;
    }

    case 18: {
      _localctx = _tracker.createInstance<ObjectLiteralExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(639);
      objectLiteral();
      break;
    }

    case 19: {
      _localctx = _tracker.createInstance<ParenthesizedExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(640);
      match(JavaScriptParser::OpenParen);
      setState(641);
      expressionSequence();
      setState(642);
      match(JavaScriptParser::CloseParen);
      break;
    }

    case 20: {
      _localctx = _tracker.createInstance<ArrowFunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(644);
      arrowFunctionParameters();
      setState(645);
      match(JavaScriptParser::ARROW);
      setState(646);
      arrowFunctionBody();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(719);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(717);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplicativeExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(650);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(651);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::Multiply)
            | (1ULL << JavaScriptParser::Divide)
            | (1ULL << JavaScriptParser::Modulus))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(652);
          singleExpression(25);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AdditiveExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(653);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(654);
          _la = _input->LA(1);
          if (!(_la == JavaScriptParser::Plus

          || _la == JavaScriptParser::Minus)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(655);
          singleExpression(24);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitShiftExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(656);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(657);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::RightShiftArithmetic)
            | (1ULL << JavaScriptParser::LeftShiftArithmetic)
            | (1ULL << JavaScriptParser::RightShiftLogical))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(658);
          singleExpression(23);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(659);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(660);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::LessThan)
            | (1ULL << JavaScriptParser::MoreThan)
            | (1ULL << JavaScriptParser::LessThanEquals)
            | (1ULL << JavaScriptParser::GreaterThanEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(661);
          singleExpression(22);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<InstanceofExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(662);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(663);
          match(JavaScriptParser::Instanceof);
          setState(664);
          singleExpression(21);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<InExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(665);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(666);
          match(JavaScriptParser::In);
          setState(667);
          singleExpression(20);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(668);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(669);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << JavaScriptParser::Equals_)
            | (1ULL << JavaScriptParser::NotEquals)
            | (1ULL << JavaScriptParser::IdentityEquals)
            | (1ULL << JavaScriptParser::IdentityNotEquals))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(670);
          singleExpression(19);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<BitAndExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(671);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(672);
          match(JavaScriptParser::BitAnd);
          setState(673);
          singleExpression(18);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<BitXOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(674);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(675);
          match(JavaScriptParser::BitXOr);
          setState(676);
          singleExpression(17);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<BitOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(677);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(678);
          match(JavaScriptParser::BitOr);
          setState(679);
          singleExpression(16);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<LogicalAndExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(680);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(681);
          match(JavaScriptParser::And);
          setState(682);
          singleExpression(15);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<LogicalOrExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(683);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(684);
          match(JavaScriptParser::Or);
          setState(685);
          singleExpression(14);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<TernaryExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(686);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(687);
          match(JavaScriptParser::QuestionMark);
          setState(688);
          singleExpression(0);
          setState(689);
          match(JavaScriptParser::Colon);
          setState(690);
          singleExpression(13);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<AssignmentExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(692);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(693);
          match(JavaScriptParser::Assign);
          setState(694);
          singleExpression(12);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<AssignmentOperatorExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(695);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(696);
          assignmentOperator();
          setState(697);
          singleExpression(11);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<MemberIndexExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(699);

          if (!(precpred(_ctx, 39))) throw FailedPredicateException(this, "precpred(_ctx, 39)");
          setState(700);
          match(JavaScriptParser::OpenBracket);
          setState(701);
          expressionSequence();
          setState(702);
          match(JavaScriptParser::CloseBracket);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<MemberDotExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(704);

          if (!(precpred(_ctx, 38))) throw FailedPredicateException(this, "precpred(_ctx, 38)");
          setState(705);
          match(JavaScriptParser::Dot);
          setState(706);
          identifierName();
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<ArgumentsExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(707);

          if (!(precpred(_ctx, 37))) throw FailedPredicateException(this, "precpred(_ctx, 37)");
          setState(708);
          arguments();
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<PostIncrementExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(709);

          if (!(precpred(_ctx, 35))) throw FailedPredicateException(this, "precpred(_ctx, 35)");
          setState(710);

          if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
          setState(711);
          match(JavaScriptParser::PlusPlus);
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<PostDecreaseExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(712);

          if (!(precpred(_ctx, 34))) throw FailedPredicateException(this, "precpred(_ctx, 34)");
          setState(713);

          if (!(notLineTerminator())) throw FailedPredicateException(this, "notLineTerminator()");
          setState(714);
          match(JavaScriptParser::MinusMinus);
          break;
        }

        case 21: {
          auto newContext = _tracker.createInstance<TemplateStringExpressionContext>(_tracker.createInstance<SingleExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSingleExpression);
          setState(715);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(716);
          match(JavaScriptParser::TemplateStringLiteral);
          break;
        }

        } 
      }
      setState(721);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrowFunctionParametersContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionParametersContext::ArrowFunctionParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::ArrowFunctionParametersContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::FormalParameterListContext* JavaScriptParser::ArrowFunctionParametersContext::formalParameterList() {
  return getRuleContext<JavaScriptParser::FormalParameterListContext>(0);
}


size_t JavaScriptParser::ArrowFunctionParametersContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrowFunctionParameters;
}

void JavaScriptParser::ArrowFunctionParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionParameters(this);
}

void JavaScriptParser::ArrowFunctionParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionParameters(this);
}

JavaScriptParser::ArrowFunctionParametersContext* JavaScriptParser::arrowFunctionParameters() {
  ArrowFunctionParametersContext *_localctx = _tracker.createInstance<ArrowFunctionParametersContext>(_ctx, getState());
  enterRule(_localctx, 98, JavaScriptParser::RuleArrowFunctionParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(728);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(722);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::OpenParen: {
        enterOuterAlt(_localctx, 2);
        setState(723);
        match(JavaScriptParser::OpenParen);
        setState(725);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << JavaScriptParser::OpenBracket)
          | (1ULL << JavaScriptParser::OpenBrace)
          | (1ULL << JavaScriptParser::Ellipsis))) != 0) || _la == JavaScriptParser::Identifier) {
          setState(724);
          formalParameterList();
        }
        setState(727);
        match(JavaScriptParser::CloseParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrowFunctionBodyContext ------------------------------------------------------------------

JavaScriptParser::ArrowFunctionBodyContext::ArrowFunctionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::SingleExpressionContext* JavaScriptParser::ArrowFunctionBodyContext::singleExpression() {
  return getRuleContext<JavaScriptParser::SingleExpressionContext>(0);
}

JavaScriptParser::FunctionBodyContext* JavaScriptParser::ArrowFunctionBodyContext::functionBody() {
  return getRuleContext<JavaScriptParser::FunctionBodyContext>(0);
}


size_t JavaScriptParser::ArrowFunctionBodyContext::getRuleIndex() const {
  return JavaScriptParser::RuleArrowFunctionBody;
}

void JavaScriptParser::ArrowFunctionBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrowFunctionBody(this);
}

void JavaScriptParser::ArrowFunctionBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrowFunctionBody(this);
}

JavaScriptParser::ArrowFunctionBodyContext* JavaScriptParser::arrowFunctionBody() {
  ArrowFunctionBodyContext *_localctx = _tracker.createInstance<ArrowFunctionBodyContext>(_ctx, getState());
  enterRule(_localctx, 100, JavaScriptParser::RuleArrowFunctionBody);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(735);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(730);
      singleExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(731);
      match(JavaScriptParser::OpenBrace);
      setState(732);
      functionBody();
      setState(733);
      match(JavaScriptParser::CloseBrace);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

JavaScriptParser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t JavaScriptParser::AssignmentOperatorContext::getRuleIndex() const {
  return JavaScriptParser::RuleAssignmentOperator;
}

void JavaScriptParser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void JavaScriptParser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

JavaScriptParser::AssignmentOperatorContext* JavaScriptParser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 102, JavaScriptParser::RuleAssignmentOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(737);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::MultiplyAssign)
      | (1ULL << JavaScriptParser::DivideAssign)
      | (1ULL << JavaScriptParser::ModulusAssign)
      | (1ULL << JavaScriptParser::PlusAssign)
      | (1ULL << JavaScriptParser::MinusAssign)
      | (1ULL << JavaScriptParser::LeftShiftArithmeticAssign)
      | (1ULL << JavaScriptParser::RightShiftArithmeticAssign)
      | (1ULL << JavaScriptParser::RightShiftLogicalAssign)
      | (1ULL << JavaScriptParser::BitAndAssign)
      | (1ULL << JavaScriptParser::BitXorAssign)
      | (1ULL << JavaScriptParser::BitOrAssign))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

JavaScriptParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::LiteralContext::NullLiteral() {
  return getToken(JavaScriptParser::NullLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::BooleanLiteral() {
  return getToken(JavaScriptParser::BooleanLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::StringLiteral() {
  return getToken(JavaScriptParser::StringLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::TemplateStringLiteral() {
  return getToken(JavaScriptParser::TemplateStringLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::LiteralContext::RegularExpressionLiteral() {
  return getToken(JavaScriptParser::RegularExpressionLiteral, 0);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::LiteralContext::numericLiteral() {
  return getRuleContext<JavaScriptParser::NumericLiteralContext>(0);
}


size_t JavaScriptParser::LiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleLiteral;
}

void JavaScriptParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void JavaScriptParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

JavaScriptParser::LiteralContext* JavaScriptParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 104, JavaScriptParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(745);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(739);
        match(JavaScriptParser::NullLiteral);
        break;
      }

      case JavaScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(740);
        match(JavaScriptParser::BooleanLiteral);
        break;
      }

      case JavaScriptParser::StringLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(741);
        match(JavaScriptParser::StringLiteral);
        break;
      }

      case JavaScriptParser::TemplateStringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(742);
        match(JavaScriptParser::TemplateStringLiteral);
        break;
      }

      case JavaScriptParser::RegularExpressionLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(743);
        match(JavaScriptParser::RegularExpressionLiteral);
        break;
      }

      case JavaScriptParser::DecimalLiteral:
      case JavaScriptParser::HexIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral:
      case JavaScriptParser::OctalIntegerLiteral2:
      case JavaScriptParser::BinaryIntegerLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(744);
        numericLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

JavaScriptParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::DecimalLiteral() {
  return getToken(JavaScriptParser::DecimalLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::HexIntegerLiteral() {
  return getToken(JavaScriptParser::HexIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::OctalIntegerLiteral() {
  return getToken(JavaScriptParser::OctalIntegerLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::OctalIntegerLiteral2() {
  return getToken(JavaScriptParser::OctalIntegerLiteral2, 0);
}

tree::TerminalNode* JavaScriptParser::NumericLiteralContext::BinaryIntegerLiteral() {
  return getToken(JavaScriptParser::BinaryIntegerLiteral, 0);
}


size_t JavaScriptParser::NumericLiteralContext::getRuleIndex() const {
  return JavaScriptParser::RuleNumericLiteral;
}

void JavaScriptParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void JavaScriptParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}

JavaScriptParser::NumericLiteralContext* JavaScriptParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 106, JavaScriptParser::RuleNumericLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JavaScriptParser::DecimalLiteral)
      | (1ULL << JavaScriptParser::HexIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral)
      | (1ULL << JavaScriptParser::OctalIntegerLiteral2)
      | (1ULL << JavaScriptParser::BinaryIntegerLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierNameContext ------------------------------------------------------------------

JavaScriptParser::IdentifierNameContext::IdentifierNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::IdentifierNameContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::ReservedWordContext* JavaScriptParser::IdentifierNameContext::reservedWord() {
  return getRuleContext<JavaScriptParser::ReservedWordContext>(0);
}


size_t JavaScriptParser::IdentifierNameContext::getRuleIndex() const {
  return JavaScriptParser::RuleIdentifierName;
}

void JavaScriptParser::IdentifierNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierName(this);
}

void JavaScriptParser::IdentifierNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierName(this);
}

JavaScriptParser::IdentifierNameContext* JavaScriptParser::identifierName() {
  IdentifierNameContext *_localctx = _tracker.createInstance<IdentifierNameContext>(_ctx, getState());
  enterRule(_localctx, 108, JavaScriptParser::RuleIdentifierName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(751);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(749);
        match(JavaScriptParser::Identifier);
        break;
      }

      case JavaScriptParser::NullLiteral:
      case JavaScriptParser::BooleanLiteral:
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield: {
        enterOuterAlt(_localctx, 2);
        setState(750);
        reservedWord();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReservedWordContext ------------------------------------------------------------------

JavaScriptParser::ReservedWordContext::ReservedWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JavaScriptParser::KeywordContext* JavaScriptParser::ReservedWordContext::keyword() {
  return getRuleContext<JavaScriptParser::KeywordContext>(0);
}

tree::TerminalNode* JavaScriptParser::ReservedWordContext::NullLiteral() {
  return getToken(JavaScriptParser::NullLiteral, 0);
}

tree::TerminalNode* JavaScriptParser::ReservedWordContext::BooleanLiteral() {
  return getToken(JavaScriptParser::BooleanLiteral, 0);
}


size_t JavaScriptParser::ReservedWordContext::getRuleIndex() const {
  return JavaScriptParser::RuleReservedWord;
}

void JavaScriptParser::ReservedWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReservedWord(this);
}

void JavaScriptParser::ReservedWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReservedWord(this);
}

JavaScriptParser::ReservedWordContext* JavaScriptParser::reservedWord() {
  ReservedWordContext *_localctx = _tracker.createInstance<ReservedWordContext>(_ctx, getState());
  enterRule(_localctx, 110, JavaScriptParser::RuleReservedWord);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(756);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JavaScriptParser::Break:
      case JavaScriptParser::Do:
      case JavaScriptParser::Instanceof:
      case JavaScriptParser::Typeof:
      case JavaScriptParser::Case:
      case JavaScriptParser::Else:
      case JavaScriptParser::New:
      case JavaScriptParser::Var:
      case JavaScriptParser::Catch:
      case JavaScriptParser::Finally:
      case JavaScriptParser::Return:
      case JavaScriptParser::Void:
      case JavaScriptParser::Continue:
      case JavaScriptParser::For:
      case JavaScriptParser::Switch:
      case JavaScriptParser::While:
      case JavaScriptParser::Debugger:
      case JavaScriptParser::Function:
      case JavaScriptParser::This:
      case JavaScriptParser::With:
      case JavaScriptParser::Default:
      case JavaScriptParser::If:
      case JavaScriptParser::Throw:
      case JavaScriptParser::Delete:
      case JavaScriptParser::In:
      case JavaScriptParser::Try:
      case JavaScriptParser::Class:
      case JavaScriptParser::Enum:
      case JavaScriptParser::Extends:
      case JavaScriptParser::Super:
      case JavaScriptParser::Const:
      case JavaScriptParser::Export:
      case JavaScriptParser::Import:
      case JavaScriptParser::Implements:
      case JavaScriptParser::Let:
      case JavaScriptParser::Private:
      case JavaScriptParser::Public:
      case JavaScriptParser::Interface:
      case JavaScriptParser::Package:
      case JavaScriptParser::Protected:
      case JavaScriptParser::Static:
      case JavaScriptParser::Yield: {
        enterOuterAlt(_localctx, 1);
        setState(753);
        keyword();
        break;
      }

      case JavaScriptParser::NullLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(754);
        match(JavaScriptParser::NullLiteral);
        break;
      }

      case JavaScriptParser::BooleanLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(755);
        match(JavaScriptParser::BooleanLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordContext ------------------------------------------------------------------

JavaScriptParser::KeywordContext::KeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Break() {
  return getToken(JavaScriptParser::Break, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Do() {
  return getToken(JavaScriptParser::Do, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Instanceof() {
  return getToken(JavaScriptParser::Instanceof, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Typeof() {
  return getToken(JavaScriptParser::Typeof, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Case() {
  return getToken(JavaScriptParser::Case, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Else() {
  return getToken(JavaScriptParser::Else, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::New() {
  return getToken(JavaScriptParser::New, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Var() {
  return getToken(JavaScriptParser::Var, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Catch() {
  return getToken(JavaScriptParser::Catch, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Finally() {
  return getToken(JavaScriptParser::Finally, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Return() {
  return getToken(JavaScriptParser::Return, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Void() {
  return getToken(JavaScriptParser::Void, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Continue() {
  return getToken(JavaScriptParser::Continue, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::For() {
  return getToken(JavaScriptParser::For, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Switch() {
  return getToken(JavaScriptParser::Switch, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::While() {
  return getToken(JavaScriptParser::While, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Debugger() {
  return getToken(JavaScriptParser::Debugger, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Function() {
  return getToken(JavaScriptParser::Function, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::This() {
  return getToken(JavaScriptParser::This, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::With() {
  return getToken(JavaScriptParser::With, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Default() {
  return getToken(JavaScriptParser::Default, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::If() {
  return getToken(JavaScriptParser::If, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Throw() {
  return getToken(JavaScriptParser::Throw, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Delete() {
  return getToken(JavaScriptParser::Delete, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::In() {
  return getToken(JavaScriptParser::In, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Try() {
  return getToken(JavaScriptParser::Try, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Class() {
  return getToken(JavaScriptParser::Class, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Enum() {
  return getToken(JavaScriptParser::Enum, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Extends() {
  return getToken(JavaScriptParser::Extends, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Super() {
  return getToken(JavaScriptParser::Super, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Const() {
  return getToken(JavaScriptParser::Const, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Export() {
  return getToken(JavaScriptParser::Export, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Import() {
  return getToken(JavaScriptParser::Import, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Implements() {
  return getToken(JavaScriptParser::Implements, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Let() {
  return getToken(JavaScriptParser::Let, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Private() {
  return getToken(JavaScriptParser::Private, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Public() {
  return getToken(JavaScriptParser::Public, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Interface() {
  return getToken(JavaScriptParser::Interface, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Package() {
  return getToken(JavaScriptParser::Package, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Protected() {
  return getToken(JavaScriptParser::Protected, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Static() {
  return getToken(JavaScriptParser::Static, 0);
}

tree::TerminalNode* JavaScriptParser::KeywordContext::Yield() {
  return getToken(JavaScriptParser::Yield, 0);
}


size_t JavaScriptParser::KeywordContext::getRuleIndex() const {
  return JavaScriptParser::RuleKeyword;
}

void JavaScriptParser::KeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeyword(this);
}

void JavaScriptParser::KeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeyword(this);
}

JavaScriptParser::KeywordContext* JavaScriptParser::keyword() {
  KeywordContext *_localctx = _tracker.createInstance<KeywordContext>(_ctx, getState());
  enterRule(_localctx, 112, JavaScriptParser::RuleKeyword);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(758);
    _la = _input->LA(1);
    if (!(((((_la - 60) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 60)) & ((1ULL << (JavaScriptParser::Break - 60))
      | (1ULL << (JavaScriptParser::Do - 60))
      | (1ULL << (JavaScriptParser::Instanceof - 60))
      | (1ULL << (JavaScriptParser::Typeof - 60))
      | (1ULL << (JavaScriptParser::Case - 60))
      | (1ULL << (JavaScriptParser::Else - 60))
      | (1ULL << (JavaScriptParser::New - 60))
      | (1ULL << (JavaScriptParser::Var - 60))
      | (1ULL << (JavaScriptParser::Catch - 60))
      | (1ULL << (JavaScriptParser::Finally - 60))
      | (1ULL << (JavaScriptParser::Return - 60))
      | (1ULL << (JavaScriptParser::Void - 60))
      | (1ULL << (JavaScriptParser::Continue - 60))
      | (1ULL << (JavaScriptParser::For - 60))
      | (1ULL << (JavaScriptParser::Switch - 60))
      | (1ULL << (JavaScriptParser::While - 60))
      | (1ULL << (JavaScriptParser::Debugger - 60))
      | (1ULL << (JavaScriptParser::Function - 60))
      | (1ULL << (JavaScriptParser::This - 60))
      | (1ULL << (JavaScriptParser::With - 60))
      | (1ULL << (JavaScriptParser::Default - 60))
      | (1ULL << (JavaScriptParser::If - 60))
      | (1ULL << (JavaScriptParser::Throw - 60))
      | (1ULL << (JavaScriptParser::Delete - 60))
      | (1ULL << (JavaScriptParser::In - 60))
      | (1ULL << (JavaScriptParser::Try - 60))
      | (1ULL << (JavaScriptParser::Class - 60))
      | (1ULL << (JavaScriptParser::Enum - 60))
      | (1ULL << (JavaScriptParser::Extends - 60))
      | (1ULL << (JavaScriptParser::Super - 60))
      | (1ULL << (JavaScriptParser::Const - 60))
      | (1ULL << (JavaScriptParser::Export - 60))
      | (1ULL << (JavaScriptParser::Import - 60))
      | (1ULL << (JavaScriptParser::Implements - 60))
      | (1ULL << (JavaScriptParser::Let - 60))
      | (1ULL << (JavaScriptParser::Private - 60))
      | (1ULL << (JavaScriptParser::Public - 60))
      | (1ULL << (JavaScriptParser::Interface - 60))
      | (1ULL << (JavaScriptParser::Package - 60))
      | (1ULL << (JavaScriptParser::Protected - 60))
      | (1ULL << (JavaScriptParser::Static - 60))
      | (1ULL << (JavaScriptParser::Yield - 60)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetterContext ------------------------------------------------------------------

JavaScriptParser::GetterContext::GetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::GetterContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::GetterContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}


size_t JavaScriptParser::GetterContext::getRuleIndex() const {
  return JavaScriptParser::RuleGetter;
}

void JavaScriptParser::GetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetter(this);
}

void JavaScriptParser::GetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetter(this);
}

JavaScriptParser::GetterContext* JavaScriptParser::getter() {
  GetterContext *_localctx = _tracker.createInstance<GetterContext>(_ctx, getState());
  enterRule(_localctx, 114, JavaScriptParser::RuleGetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(760);
    match(JavaScriptParser::Identifier);
    setState(761);

    if (!(p("get"))) throw FailedPredicateException(this, "p(\"get\")");
    setState(762);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetterContext ------------------------------------------------------------------

JavaScriptParser::SetterContext::SetterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::SetterContext::Identifier() {
  return getToken(JavaScriptParser::Identifier, 0);
}

JavaScriptParser::PropertyNameContext* JavaScriptParser::SetterContext::propertyName() {
  return getRuleContext<JavaScriptParser::PropertyNameContext>(0);
}


size_t JavaScriptParser::SetterContext::getRuleIndex() const {
  return JavaScriptParser::RuleSetter;
}

void JavaScriptParser::SetterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetter(this);
}

void JavaScriptParser::SetterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetter(this);
}

JavaScriptParser::SetterContext* JavaScriptParser::setter() {
  SetterContext *_localctx = _tracker.createInstance<SetterContext>(_ctx, getState());
  enterRule(_localctx, 116, JavaScriptParser::RuleSetter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(764);
    match(JavaScriptParser::Identifier);
    setState(765);

    if (!(p("set"))) throw FailedPredicateException(this, "p(\"set\")");
    setState(766);
    propertyName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

JavaScriptParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JavaScriptParser::EosContext::SemiColon() {
  return getToken(JavaScriptParser::SemiColon, 0);
}

tree::TerminalNode* JavaScriptParser::EosContext::EOF() {
  return getToken(JavaScriptParser::EOF, 0);
}


size_t JavaScriptParser::EosContext::getRuleIndex() const {
  return JavaScriptParser::RuleEos;
}

void JavaScriptParser::EosContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEos(this);
}

void JavaScriptParser::EosContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JavaScriptParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEos(this);
}

JavaScriptParser::EosContext* JavaScriptParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 118, JavaScriptParser::RuleEos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(772);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(768);
      match(JavaScriptParser::SemiColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(769);
      match(JavaScriptParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(770);

      if (!(lineTerminatorAhead())) throw FailedPredicateException(this, "lineTerminatorAhead()");
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(771);

      if (!(closeBrace())) throw FailedPredicateException(this, "closeBrace()");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool JavaScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return expressionStatementSempred(dynamic_cast<ExpressionStatementContext *>(context), predicateIndex);
    case 11: return iterationStatementSempred(dynamic_cast<IterationStatementContext *>(context), predicateIndex);
    case 13: return continueStatementSempred(dynamic_cast<ContinueStatementContext *>(context), predicateIndex);
    case 14: return breakStatementSempred(dynamic_cast<BreakStatementContext *>(context), predicateIndex);
    case 15: return returnStatementSempred(dynamic_cast<ReturnStatementContext *>(context), predicateIndex);
    case 23: return throwStatementSempred(dynamic_cast<ThrowStatementContext *>(context), predicateIndex);
    case 48: return singleExpressionSempred(dynamic_cast<SingleExpressionContext *>(context), predicateIndex);
    case 57: return getterSempred(dynamic_cast<GetterContext *>(context), predicateIndex);
    case 58: return setterSempred(dynamic_cast<SetterContext *>(context), predicateIndex);
    case 59: return eosSempred(dynamic_cast<EosContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return notOpenBraceAndNotFunction();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return p("of");
    case 2: return p("of");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return notLineTerminator();

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::singleExpressionSempred(SingleExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 24);
    case 8: return precpred(_ctx, 23);
    case 9: return precpred(_ctx, 22);
    case 10: return precpred(_ctx, 21);
    case 11: return precpred(_ctx, 20);
    case 12: return precpred(_ctx, 19);
    case 13: return precpred(_ctx, 18);
    case 14: return precpred(_ctx, 17);
    case 15: return precpred(_ctx, 16);
    case 16: return precpred(_ctx, 15);
    case 17: return precpred(_ctx, 14);
    case 18: return precpred(_ctx, 13);
    case 19: return precpred(_ctx, 12);
    case 20: return precpred(_ctx, 11);
    case 21: return precpred(_ctx, 10);
    case 22: return precpred(_ctx, 39);
    case 23: return precpred(_ctx, 38);
    case 24: return precpred(_ctx, 37);
    case 25: return precpred(_ctx, 35);
    case 26: return notLineTerminator();
    case 27: return precpred(_ctx, 34);
    case 28: return notLineTerminator();
    case 29: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::getterSempred(GetterContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return p("get");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::setterSempred(SetterContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 31: return p("set");

  default:
    break;
  }
  return true;
}

bool JavaScriptParser::eosSempred(EosContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 32: return lineTerminatorAhead();
    case 33: return closeBrace();

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> JavaScriptParser::_decisionToDFA;
atn::PredictionContextCache JavaScriptParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JavaScriptParser::_atn;
std::vector<uint16_t> JavaScriptParser::_serializedATN;

std::vector<std::string> JavaScriptParser::_ruleNames = {
  "program", "sourceElement", "statement", "block", "statementList", "variableStatement", 
  "variableDeclarationList", "variableDeclaration", "emptyStatement", "expressionStatement", 
  "ifStatement", "iterationStatement", "varModifier", "continueStatement", 
  "breakStatement", "returnStatement", "withStatement", "switchStatement", 
  "caseBlock", "caseClauses", "caseClause", "defaultClause", "labelledStatement", 
  "throwStatement", "tryStatement", "catchProduction", "finallyProduction", 
  "debuggerStatement", "functionDeclaration", "classDeclaration", "classTail", 
  "classElement", "methodDefinition", "generatorMethod", "formalParameterList", 
  "formalParameterArg", "lastFormalParameterArg", "functionBody", "sourceElements", 
  "arrayLiteral", "elementList", "lastElement", "objectLiteral", "propertyAssignment", 
  "propertyName", "arguments", "lastArgument", "expressionSequence", "singleExpression", 
  "arrowFunctionParameters", "arrowFunctionBody", "assignmentOperator", 
  "literal", "numericLiteral", "identifierName", "reservedWord", "keyword", 
  "getter", "setter", "eos"
};

std::vector<std::string> JavaScriptParser::_literalNames = {
  "", "", "", "'['", "']'", "'('", "')'", "'{'", "'}'", "';'", "','", "'='", 
  "'?'", "':'", "'...'", "'.'", "'++'", "'--'", "'+'", "'-'", "'~'", "'!'", 
  "'*'", "'/'", "'%'", "'>>'", "'<<'", "'>>>'", "'<'", "'>'", "'<='", "'>='", 
  "'=='", "'!='", "'==='", "'!=='", "'&'", "'^'", "'|'", "'&&'", "'||'", 
  "'*='", "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'>>>='", "'&='", 
  "'^='", "'|='", "'=>'", "'null'", "", "", "", "", "", "", "'break'", "'do'", 
  "'instanceof'", "'typeof'", "'case'", "'else'", "'new'", "'var'", "'catch'", 
  "'finally'", "'return'", "'void'", "'continue'", "'for'", "'switch'", 
  "'while'", "'debugger'", "'function'", "'this'", "'with'", "'default'", 
  "'if'", "'throw'", "'delete'", "'in'", "'try'", "'class'", "'enum'", "'extends'", 
  "'super'", "'const'", "'export'", "'import'"
};

std::vector<std::string> JavaScriptParser::_symbolicNames = {
  "", "RegularExpressionLiteral", "LineTerminator", "OpenBracket", "CloseBracket", 
  "OpenParen", "CloseParen", "OpenBrace", "CloseBrace", "SemiColon", "Comma", 
  "Assign", "QuestionMark", "Colon", "Ellipsis", "Dot", "PlusPlus", "MinusMinus", 
  "Plus", "Minus", "BitNot", "Not", "Multiply", "Divide", "Modulus", "RightShiftArithmetic", 
  "LeftShiftArithmetic", "RightShiftLogical", "LessThan", "MoreThan", "LessThanEquals", 
  "GreaterThanEquals", "Equals_", "NotEquals", "IdentityEquals", "IdentityNotEquals", 
  "BitAnd", "BitXOr", "BitOr", "And", "Or", "MultiplyAssign", "DivideAssign", 
  "ModulusAssign", "PlusAssign", "MinusAssign", "LeftShiftArithmeticAssign", 
  "RightShiftArithmeticAssign", "RightShiftLogicalAssign", "BitAndAssign", 
  "BitXorAssign", "BitOrAssign", "ARROW", "NullLiteral", "BooleanLiteral", 
  "DecimalLiteral", "HexIntegerLiteral", "OctalIntegerLiteral", "OctalIntegerLiteral2", 
  "BinaryIntegerLiteral", "Break", "Do", "Instanceof", "Typeof", "Case", 
  "Else", "New", "Var", "Catch", "Finally", "Return", "Void", "Continue", 
  "For", "Switch", "While", "Debugger", "Function", "This", "With", "Default", 
  "If", "Throw", "Delete", "In", "Try", "Class", "Enum", "Extends", "Super", 
  "Const", "Export", "Import", "Implements", "Let", "Private", "Public", 
  "Interface", "Package", "Protected", "Static", "Yield", "Identifier", 
  "StringLiteral", "TemplateStringLiteral", "WhiteSpaces", "MultiLineComment", 
  "SingleLineComment", "HtmlComment", "CDataComment", "UnexpectedCharacter"
};

dfa::Vocabulary JavaScriptParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JavaScriptParser::_tokenNames;

JavaScriptParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x70, 0x309, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x3, 0x2, 0x5, 0x2, 0x7c, 0xa, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x5, 0x3, 0x81, 0xa, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x96, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x9a, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 
    0x6, 0x9f, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xa0, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xaa, 0xa, 0x8, 
    0xc, 0x8, 0xe, 0x8, 0xad, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xb2, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xb6, 0xa, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xc5, 
    0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd8, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0xdc, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0xe0, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xea, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0xee, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xf9, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x106, 0xa, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x10c, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x113, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x11a, 0xa, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x121, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x133, 
    0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x137, 0xa, 0x14, 0x5, 0x14, 
    0x139, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x6, 0x15, 0x13e, 
    0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x13f, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x146, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x14b, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x15a, 0xa, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x15d, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x16f, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x5, 
    0x20, 0x17c, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x180, 0xa, 
    0x20, 0xc, 0x20, 0xe, 0x20, 0x183, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x5, 0x21, 0x188, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x18f, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x1a0, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1a8, 0xa, 0x22, 0x3, 0x23, 0x5, 0x23, 
    0x1ab, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1b0, 
    0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x1ba, 0xa, 0x24, 0xc, 0x24, 
    0xe, 0x24, 0x1bd, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1c1, 
    0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1c6, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1cb, 0xa, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x5, 0x27, 0x1d1, 0xa, 0x27, 0x3, 0x28, 
    0x6, 0x28, 0x1d4, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 0x1d5, 0x3, 0x29, 
    0x3, 0x29, 0x7, 0x29, 0x1da, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x1dd, 
    0xb, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1e0, 0xa, 0x29, 0x3, 0x29, 0x7, 0x29, 
    0x1e3, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x1e6, 0xb, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1ec, 0xa, 0x2a, 0xd, 0x2a, 
    0xe, 0x2a, 0x1ed, 0x3, 0x2a, 0x7, 0x2a, 0x1f1, 0xa, 0x2a, 0xc, 0x2a, 
    0xe, 0x2a, 0x1f4, 0xb, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1f7, 0xa, 0x2a, 
    0xd, 0x2a, 0xe, 0x2a, 0x1f8, 0x3, 0x2a, 0x5, 0x2a, 0x1fc, 0xa, 0x2a, 
    0x3, 0x2a, 0x5, 0x2a, 0x1ff, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x208, 0xa, 0x2c, 
    0xc, 0x2c, 0xe, 0x2c, 0x20b, 0xb, 0x2c, 0x5, 0x2c, 0x20d, 0xa, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x210, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x5, 0x2d, 0x22f, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 
    0x234, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x7, 0x2f, 
    0x23a, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x23d, 0xb, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x241, 0xa, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x244, 
    0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 0x24e, 0xa, 0x31, 0xc, 0x31, 
    0xe, 0x31, 0x251, 0xb, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 
    0x256, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x25a, 0xa, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x5, 0x32, 0x263, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x269, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x28b, 0xa, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
    0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x7, 0x32, 0x2d0, 0xa, 0x32, 0xc, 0x32, 0xe, 0x32, 0x2d3, 
    0xb, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2d8, 0xa, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x2db, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x2e2, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 
    0x36, 0x2ec, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x2f2, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 
    0x2f7, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x5, 0x3d, 0x307, 0xa, 0x3d, 0x3, 0x3d, 
    0x2, 0x3, 0x62, 0x3e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 
    0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 
    0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 
    0x74, 0x76, 0x78, 0x2, 0xc, 0x5, 0x2, 0x45, 0x45, 0x5c, 0x5c, 0x60, 
    0x60, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x3, 0x2, 0x18, 0x1a, 0x3, 0x2, 
    0x14, 0x15, 0x3, 0x2, 0x1b, 0x1d, 0x3, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x22, 
    0x25, 0x3, 0x2, 0x2b, 0x35, 0x3, 0x2, 0x39, 0x3d, 0x3, 0x2, 0x3e, 0x67, 
    0x2, 0x360, 0x2, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x4, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x95, 0x3, 0x2, 0x2, 0x2, 0x8, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0xc, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x16, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x10d, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x124, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x26, 0x130, 0x3, 0x2, 0x2, 0x2, 0x28, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x141, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x155, 0x3, 0x2, 0x2, 0x2, 0x34, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x164, 0x3, 0x2, 0x2, 0x2, 0x38, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x175, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x17b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x187, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1a7, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1c5, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1cc, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1d3, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1fe, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x200, 0x3, 0x2, 0x2, 0x2, 0x56, 0x203, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x233, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x235, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x247, 0x3, 0x2, 0x2, 0x2, 0x60, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2da, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2e3, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x2f8, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2fe, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x306, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x5, 
    0x4e, 0x28, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x2, 0x2, 
    0x3, 0x7e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x5d, 0x2, 0x2, 
    0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x5, 0x6, 0x4, 0x2, 0x83, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x96, 0x5, 0x8, 0x5, 0x2, 0x85, 0x96, 0x5, 
    0xc, 0x7, 0x2, 0x86, 0x96, 0x5, 0x12, 0xa, 0x2, 0x87, 0x96, 0x5, 0x14, 
    0xb, 0x2, 0x88, 0x96, 0x5, 0x16, 0xc, 0x2, 0x89, 0x96, 0x5, 0x18, 0xd, 
    0x2, 0x8a, 0x96, 0x5, 0x1c, 0xf, 0x2, 0x8b, 0x96, 0x5, 0x1e, 0x10, 0x2, 
    0x8c, 0x96, 0x5, 0x20, 0x11, 0x2, 0x8d, 0x96, 0x5, 0x22, 0x12, 0x2, 
    0x8e, 0x96, 0x5, 0x2e, 0x18, 0x2, 0x8f, 0x96, 0x5, 0x24, 0x13, 0x2, 
    0x90, 0x96, 0x5, 0x30, 0x19, 0x2, 0x91, 0x96, 0x5, 0x32, 0x1a, 0x2, 
    0x92, 0x96, 0x5, 0x38, 0x1d, 0x2, 0x93, 0x96, 0x5, 0x3a, 0x1e, 0x2, 
    0x94, 0x96, 0x5, 0x3c, 0x1f, 0x2, 0x95, 0x84, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x95, 0x86, 0x3, 0x2, 0x2, 0x2, 0x95, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x95, 0x88, 0x3, 0x2, 0x2, 0x2, 0x95, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x95, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x90, 0x3, 0x2, 0x2, 0x2, 0x95, 0x91, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x7, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x7, 
    0x9, 0x2, 0x2, 0x98, 0x9a, 0x5, 0xa, 0x6, 0x2, 0x99, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9c, 0x7, 0xa, 0x2, 0x2, 0x9c, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9f, 0x5, 0x6, 0x4, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 
    0x3, 0x2, 0x2, 0x2, 0xa1, 0xb, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 
    0x1a, 0xe, 0x2, 0xa3, 0xa4, 0x5, 0xe, 0x8, 0x2, 0xa4, 0xa5, 0x5, 0x78, 
    0x3d, 0x2, 0xa5, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xab, 0x5, 0x10, 0x9, 
    0x2, 0xa7, 0xa8, 0x7, 0xc, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x10, 0x9, 0x2, 
    0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb2, 0x7, 
    0x68, 0x2, 0x2, 0xaf, 0xb2, 0x5, 0x50, 0x29, 0x2, 0xb0, 0xb2, 0x5, 0x56, 
    0x2c, 0x2, 0xb1, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb4, 0x7, 0xd, 0x2, 0x2, 0xb4, 0xb6, 0x5, 0x62, 0x32, 0x2, 0xb5, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0xb, 0x2, 0x2, 0xb8, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x6, 0xb, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x60, 
    0x31, 0x2, 0xbb, 0xbc, 0x5, 0x78, 0x3d, 0x2, 0xbc, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbe, 0x7, 0x53, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x7, 0x2, 0x2, 
    0xbf, 0xc0, 0x5, 0x60, 0x31, 0x2, 0xc0, 0xc1, 0x7, 0x8, 0x2, 0x2, 0xc1, 
    0xc4, 0x5, 0x6, 0x4, 0x2, 0xc2, 0xc3, 0x7, 0x43, 0x2, 0x2, 0xc3, 0xc5, 
    0x5, 0x6, 0x4, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x3f, 
    0x2, 0x2, 0xc7, 0xc8, 0x5, 0x6, 0x4, 0x2, 0xc8, 0xc9, 0x7, 0x4d, 0x2, 
    0x2, 0xc9, 0xca, 0x7, 0x7, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x60, 0x31, 0x2, 
    0xcb, 0xcc, 0x7, 0x8, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x78, 0x3d, 0x2, 0xcd, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x4d, 0x2, 0x2, 0xcf, 0xd0, 
    0x7, 0x7, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x60, 0x31, 0x2, 0xd1, 0xd2, 0x7, 
    0x8, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x6, 0x4, 0x2, 0xd3, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xd5, 0x7, 0x4b, 0x2, 0x2, 0xd5, 0xd7, 0x7, 0x7, 0x2, 
    0x2, 0xd6, 0xd8, 0x5, 0x60, 0x31, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xdb, 0x7, 0xb, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x60, 0x31, 0x2, 0xdb, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xdf, 0x7, 0xb, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x60, 
    0x31, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x8, 0x2, 0x2, 
    0xe2, 0x10c, 0x5, 0x6, 0x4, 0x2, 0xe3, 0xe4, 0x7, 0x4b, 0x2, 0x2, 0xe4, 
    0xe5, 0x7, 0x7, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x1a, 0xe, 0x2, 0xe6, 0xe7, 
    0x5, 0xe, 0x8, 0x2, 0xe7, 0xe9, 0x7, 0xb, 0x2, 0x2, 0xe8, 0xea, 0x5, 
    0x60, 0x31, 0x2, 0xe9, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 0x7, 0xb, 0x2, 
    0x2, 0xec, 0xee, 0x5, 0x60, 0x31, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x7, 0x8, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x6, 0x4, 0x2, 0xf1, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x4b, 0x2, 0x2, 0xf3, 0xf4, 0x7, 
    0x7, 0x2, 0x2, 0xf4, 0xf8, 0x5, 0x62, 0x32, 0x2, 0xf5, 0xf9, 0x7, 0x56, 
    0x2, 0x2, 0xf6, 0xf7, 0x7, 0x68, 0x2, 0x2, 0xf7, 0xf9, 0x6, 0xd, 0x3, 
    0x2, 0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x5, 0x60, 0x31, 0x2, 0xfb, 
    0xfc, 0x7, 0x8, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x6, 0x4, 0x2, 0xfd, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x4b, 0x2, 0x2, 0xff, 0x100, 0x7, 
    0x7, 0x2, 0x2, 0x100, 0x101, 0x5, 0x1a, 0xe, 0x2, 0x101, 0x105, 0x5, 
    0x10, 0x9, 0x2, 0x102, 0x106, 0x7, 0x56, 0x2, 0x2, 0x103, 0x104, 0x7, 
    0x68, 0x2, 0x2, 0x104, 0x106, 0x6, 0xd, 0x4, 0x2, 0x105, 0x102, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x108, 0x5, 0x60, 0x31, 0x2, 0x108, 0x109, 0x7, 
    0x8, 0x2, 0x2, 0x109, 0x10a, 0x5, 0x6, 0x4, 0x2, 0x10a, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10b, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0x10c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x9, 0x2, 0x2, 0x2, 0x10e, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x7, 0x4a, 0x2, 0x2, 0x110, 
    0x111, 0x6, 0xf, 0x5, 0x2, 0x111, 0x113, 0x7, 0x68, 0x2, 0x2, 0x112, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 0x2, 0x113, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x5, 0x78, 0x3d, 0x2, 0x115, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x7, 0x3e, 0x2, 0x2, 0x117, 
    0x118, 0x6, 0x10, 0x6, 0x2, 0x118, 0x11a, 0x7, 0x68, 0x2, 0x2, 0x119, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x78, 0x3d, 0x2, 0x11c, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x120, 0x7, 0x48, 0x2, 0x2, 0x11e, 
    0x11f, 0x6, 0x11, 0x7, 0x2, 0x11f, 0x121, 0x5, 0x60, 0x31, 0x2, 0x120, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x5, 0x78, 0x3d, 0x2, 0x123, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x51, 0x2, 0x2, 0x125, 
    0x126, 0x7, 0x7, 0x2, 0x2, 0x126, 0x127, 0x5, 0x60, 0x31, 0x2, 0x127, 
    0x128, 0x7, 0x8, 0x2, 0x2, 0x128, 0x129, 0x5, 0x6, 0x4, 0x2, 0x129, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x7, 0x4c, 0x2, 0x2, 0x12b, 
    0x12c, 0x7, 0x7, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x60, 0x31, 0x2, 0x12d, 
    0x12e, 0x7, 0x8, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x26, 0x14, 0x2, 0x12f, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x130, 0x132, 0x7, 0x9, 0x2, 0x2, 0x131, 0x133, 
    0x5, 0x28, 0x15, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x133, 0x138, 0x3, 0x2, 0x2, 0x2, 0x134, 0x136, 
    0x5, 0x2c, 0x17, 0x2, 0x135, 0x137, 0x5, 0x28, 0x15, 0x2, 0x136, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x134, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 
    0x7, 0xa, 0x2, 0x2, 0x13b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13e, 0x5, 
    0x2a, 0x16, 0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x29, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x7, 0x42, 
    0x2, 0x2, 0x142, 0x143, 0x5, 0x60, 0x31, 0x2, 0x143, 0x145, 0x7, 0xf, 
    0x2, 0x2, 0x144, 0x146, 0x5, 0xa, 0x6, 0x2, 0x145, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x148, 0x7, 0x52, 0x2, 0x2, 0x148, 0x14a, 0x7, 0xf, 0x2, 
    0x2, 0x149, 0x14b, 0x5, 0xa, 0x6, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14d, 0x7, 0x68, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0xf, 0x2, 0x2, 
    0x14e, 0x14f, 0x5, 0x6, 0x4, 0x2, 0x14f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x151, 0x7, 0x54, 0x2, 0x2, 0x151, 0x152, 0x6, 0x19, 0x8, 0x2, 0x152, 
    0x153, 0x5, 0x60, 0x31, 0x2, 0x153, 0x154, 0x5, 0x78, 0x3d, 0x2, 0x154, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x7, 0x57, 0x2, 0x2, 0x156, 
    0x15c, 0x5, 0x8, 0x5, 0x2, 0x157, 0x159, 0x5, 0x34, 0x1b, 0x2, 0x158, 
    0x15a, 0x5, 0x36, 0x1c, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x159, 
    0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x15d, 0x5, 0x36, 0x1c, 0x2, 0x15c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 
    0x7, 0x46, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x7, 0x2, 0x2, 0x160, 0x161, 
    0x7, 0x68, 0x2, 0x2, 0x161, 0x162, 0x7, 0x8, 0x2, 0x2, 0x162, 0x163, 
    0x5, 0x8, 0x5, 0x2, 0x163, 0x35, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x7, 
    0x47, 0x2, 0x2, 0x165, 0x166, 0x5, 0x8, 0x5, 0x2, 0x166, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x168, 0x7, 0x4e, 0x2, 0x2, 0x168, 0x169, 0x5, 
    0x78, 0x3d, 0x2, 0x169, 0x39, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 
    0x4f, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x68, 0x2, 0x2, 0x16c, 0x16e, 0x7, 
    0x7, 0x2, 0x2, 0x16d, 0x16f, 0x5, 0x46, 0x24, 0x2, 0x16e, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 
    0x2, 0x2, 0x2, 0x170, 0x171, 0x7, 0x8, 0x2, 0x2, 0x171, 0x172, 0x7, 
    0x9, 0x2, 0x2, 0x172, 0x173, 0x5, 0x4c, 0x27, 0x2, 0x173, 0x174, 0x7, 
    0xa, 0x2, 0x2, 0x174, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x58, 
    0x2, 0x2, 0x176, 0x177, 0x7, 0x68, 0x2, 0x2, 0x177, 0x178, 0x5, 0x3e, 
    0x20, 0x2, 0x178, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x7, 0x5a, 
    0x2, 0x2, 0x17a, 0x17c, 0x5, 0x62, 0x32, 0x2, 0x17b, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x181, 0x7, 0x9, 0x2, 0x2, 0x17e, 0x180, 0x5, 0x40, 
    0x21, 0x2, 0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x183, 0x3, 0x2, 
    0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x182, 0x184, 0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x185, 0x7, 0xa, 0x2, 0x2, 0x185, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x188, 0x7, 0x66, 0x2, 0x2, 0x187, 0x186, 0x3, 0x2, 0x2, 
    0x2, 0x187, 0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x18a, 0x5, 0x42, 0x22, 0x2, 0x18a, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18c, 0x5, 0x5a, 0x2e, 0x2, 0x18c, 0x18e, 0x7, 0x7, 0x2, 
    0x2, 0x18d, 0x18f, 0x5, 0x46, 0x24, 0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x191, 0x7, 0x8, 0x2, 0x2, 0x191, 0x192, 0x7, 0x9, 0x2, 
    0x2, 0x192, 0x193, 0x5, 0x4c, 0x27, 0x2, 0x193, 0x194, 0x7, 0xa, 0x2, 
    0x2, 0x194, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x5, 0x74, 0x3b, 
    0x2, 0x196, 0x197, 0x7, 0x7, 0x2, 0x2, 0x197, 0x198, 0x7, 0x8, 0x2, 
    0x2, 0x198, 0x199, 0x7, 0x9, 0x2, 0x2, 0x199, 0x19a, 0x5, 0x4c, 0x27, 
    0x2, 0x19a, 0x19b, 0x7, 0xa, 0x2, 0x2, 0x19b, 0x1a8, 0x3, 0x2, 0x2, 
    0x2, 0x19c, 0x19d, 0x5, 0x76, 0x3c, 0x2, 0x19d, 0x19f, 0x7, 0x7, 0x2, 
    0x2, 0x19e, 0x1a0, 0x5, 0x46, 0x24, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x1a1, 0x1a2, 0x7, 0x8, 0x2, 0x2, 0x1a2, 0x1a3, 0x7, 0x9, 0x2, 
    0x2, 0x1a3, 0x1a4, 0x5, 0x4c, 0x27, 0x2, 0x1a4, 0x1a5, 0x7, 0xa, 0x2, 
    0x2, 0x1a5, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a8, 0x5, 0x44, 0x23, 
    0x2, 0x1a7, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ab, 0x7, 0x18, 0x2, 
    0x2, 0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 0x68, 0x2, 
    0x2, 0x1ad, 0x1af, 0x7, 0x7, 0x2, 0x2, 0x1ae, 0x1b0, 0x5, 0x46, 0x24, 
    0x2, 0x1af, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x8, 0x2, 
    0x2, 0x1b2, 0x1b3, 0x7, 0x9, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x4c, 0x27, 
    0x2, 0x1b4, 0x1b5, 0x7, 0xa, 0x2, 0x2, 0x1b5, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1bb, 0x5, 0x48, 0x25, 0x2, 0x1b7, 0x1b8, 0x7, 0xc, 0x2, 0x2, 
    0x1b8, 0x1ba, 0x5, 0x48, 0x25, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1ba, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0xc, 0x2, 0x2, 
    0x1bf, 0x1c1, 0x5, 0x4a, 0x26, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 
    0x1c0, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c6, 0x3, 0x2, 0x2, 0x2, 
    0x1c2, 0x1c6, 0x5, 0x4a, 0x26, 0x2, 0x1c3, 0x1c6, 0x5, 0x50, 0x29, 0x2, 
    0x1c4, 0x1c6, 0x5, 0x56, 0x2c, 0x2, 0x1c5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
    0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1c7, 
    0x1ca, 0x7, 0x68, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0xd, 0x2, 0x2, 0x1c9, 
    0x1cb, 0x5, 0x62, 0x32, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 
    0x7, 0x10, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x68, 0x2, 0x2, 0x1ce, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d1, 0x5, 0x4e, 0x28, 0x2, 0x1d0, 0x1cf, 
    0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0x4, 0x3, 0x2, 0x1d3, 0x1d2, 0x3, 
    0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d3, 0x3, 
    0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x1d7, 0x1db, 0x7, 0x5, 0x2, 0x2, 0x1d8, 0x1da, 0x7, 0xc, 
    0x2, 0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 
    0x2, 0x2, 0x1dc, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1de, 0x1e0, 0x5, 0x52, 0x2a, 0x2, 0x1df, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e3, 0x7, 0xc, 0x2, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 
    0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e7, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x7, 0x6, 
    0x2, 0x2, 0x1e8, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1f2, 0x5, 0x62, 
    0x32, 0x2, 0x1ea, 0x1ec, 0x7, 0xc, 0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x62, 0x32, 0x2, 0x1f0, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0xc, 
    0x2, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x5, 0x54, 
    0x2b, 0x2, 0x1fb, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x5, 0x54, 
    0x2b, 0x2, 0x1fe, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fd, 0x3, 0x2, 
    0x2, 0x2, 0x1ff, 0x53, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x7, 0x10, 
    0x2, 0x2, 0x201, 0x202, 0x7, 0x68, 0x2, 0x2, 0x202, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x20c, 0x7, 0x9, 0x2, 0x2, 0x204, 0x209, 0x5, 0x58, 
    0x2d, 0x2, 0x205, 0x206, 0x7, 0xc, 0x2, 0x2, 0x206, 0x208, 0x5, 0x58, 
    0x2d, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x204, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20d, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x210, 0x7, 0xc, 
    0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x7, 0xa, 
    0x2, 0x2, 0x212, 0x57, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x5, 0x5a, 
    0x2e, 0x2, 0x214, 0x215, 0x9, 0x3, 0x2, 0x2, 0x215, 0x216, 0x5, 0x62, 
    0x32, 0x2, 0x216, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x7, 0x5, 
    0x2, 0x2, 0x218, 0x219, 0x5, 0x62, 0x32, 0x2, 0x219, 0x21a, 0x7, 0x6, 
    0x2, 0x2, 0x21a, 0x21b, 0x7, 0xf, 0x2, 0x2, 0x21b, 0x21c, 0x5, 0x62, 
    0x32, 0x2, 0x21c, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x74, 
    0x3b, 0x2, 0x21e, 0x21f, 0x7, 0x7, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x8, 
    0x2, 0x2, 0x220, 0x221, 0x7, 0x9, 0x2, 0x2, 0x221, 0x222, 0x5, 0x4c, 
    0x27, 0x2, 0x222, 0x223, 0x7, 0xa, 0x2, 0x2, 0x223, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x224, 0x225, 0x5, 0x76, 0x3c, 0x2, 0x225, 0x226, 0x7, 0x7, 
    0x2, 0x2, 0x226, 0x227, 0x7, 0x68, 0x2, 0x2, 0x227, 0x228, 0x7, 0x8, 
    0x2, 0x2, 0x228, 0x229, 0x7, 0x9, 0x2, 0x2, 0x229, 0x22a, 0x5, 0x4c, 
    0x27, 0x2, 0x22a, 0x22b, 0x7, 0xa, 0x2, 0x2, 0x22b, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x22c, 0x22f, 0x5, 0x44, 0x23, 0x2, 0x22d, 0x22f, 0x7, 0x68, 
    0x2, 0x2, 0x22e, 0x213, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x224, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x230, 0x234, 0x5, 0x6e, 
    0x38, 0x2, 0x231, 0x234, 0x7, 0x69, 0x2, 0x2, 0x232, 0x234, 0x5, 0x6c, 
    0x37, 0x2, 0x233, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x235, 0x243, 0x7, 0x7, 0x2, 0x2, 0x236, 0x23b, 0x5, 0x62, 0x32, 
    0x2, 0x237, 0x238, 0x7, 0xc, 0x2, 0x2, 0x238, 0x23a, 0x5, 0x62, 0x32, 
    0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 0x3, 0x2, 0x2, 
    0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 
    0x2, 0x23c, 0x240, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x23e, 0x23f, 0x7, 0xc, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x5e, 0x30, 
    0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x244, 0x3, 0x2, 0x2, 0x2, 0x242, 0x244, 0x5, 0x5e, 0x30, 
    0x2, 0x243, 0x236, 0x3, 0x2, 0x2, 0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 
    0x2, 0x243, 0x244, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 
    0x2, 0x245, 0x246, 0x7, 0x8, 0x2, 0x2, 0x246, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x247, 0x248, 0x7, 0x10, 0x2, 0x2, 0x248, 0x249, 0x7, 0x68, 0x2, 0x2, 
    0x249, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24f, 0x5, 0x62, 0x32, 0x2, 
    0x24b, 0x24c, 0x7, 0xc, 0x2, 0x2, 0x24c, 0x24e, 0x5, 0x62, 0x32, 0x2, 
    0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 0x3, 0x2, 0x2, 0x2, 
    0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x61, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x252, 
    0x253, 0x8, 0x32, 0x1, 0x2, 0x253, 0x255, 0x7, 0x4f, 0x2, 0x2, 0x254, 
    0x256, 0x7, 0x68, 0x2, 0x2, 0x255, 0x254, 0x3, 0x2, 0x2, 0x2, 0x255, 
    0x256, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 
    0x259, 0x7, 0x7, 0x2, 0x2, 0x258, 0x25a, 0x5, 0x46, 0x24, 0x2, 0x259, 
    0x258, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x8, 0x2, 0x2, 0x25c, 
    0x25d, 0x7, 0x9, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x4c, 0x27, 0x2, 0x25e, 
    0x25f, 0x7, 0xa, 0x2, 0x2, 0x25f, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x260, 
    0x262, 0x7, 0x58, 0x2, 0x2, 0x261, 0x263, 0x7, 0x68, 0x2, 0x2, 0x262, 
    0x261, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x28b, 0x5, 0x3e, 0x20, 0x2, 0x265, 
    0x266, 0x7, 0x44, 0x2, 0x2, 0x266, 0x268, 0x5, 0x62, 0x32, 0x2, 0x267, 
    0x269, 0x5, 0x5c, 0x2f, 0x2, 0x268, 0x267, 0x3, 0x2, 0x2, 0x2, 0x268, 
    0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x26b, 0x7, 0x55, 0x2, 0x2, 0x26b, 0x28b, 0x5, 0x62, 0x32, 0x23, 0x26c, 
    0x26d, 0x7, 0x49, 0x2, 0x2, 0x26d, 0x28b, 0x5, 0x62, 0x32, 0x22, 0x26e, 
    0x26f, 0x7, 0x41, 0x2, 0x2, 0x26f, 0x28b, 0x5, 0x62, 0x32, 0x21, 0x270, 
    0x271, 0x7, 0x12, 0x2, 0x2, 0x271, 0x28b, 0x5, 0x62, 0x32, 0x20, 0x272, 
    0x273, 0x7, 0x13, 0x2, 0x2, 0x273, 0x28b, 0x5, 0x62, 0x32, 0x1f, 0x274, 
    0x275, 0x7, 0x14, 0x2, 0x2, 0x275, 0x28b, 0x5, 0x62, 0x32, 0x1e, 0x276, 
    0x277, 0x7, 0x15, 0x2, 0x2, 0x277, 0x28b, 0x5, 0x62, 0x32, 0x1d, 0x278, 
    0x279, 0x7, 0x16, 0x2, 0x2, 0x279, 0x28b, 0x5, 0x62, 0x32, 0x1c, 0x27a, 
    0x27b, 0x7, 0x17, 0x2, 0x2, 0x27b, 0x28b, 0x5, 0x62, 0x32, 0x1b, 0x27c, 
    0x28b, 0x7, 0x50, 0x2, 0x2, 0x27d, 0x28b, 0x7, 0x68, 0x2, 0x2, 0x27e, 
    0x28b, 0x7, 0x5b, 0x2, 0x2, 0x27f, 0x28b, 0x5, 0x6a, 0x36, 0x2, 0x280, 
    0x28b, 0x5, 0x50, 0x29, 0x2, 0x281, 0x28b, 0x5, 0x56, 0x2c, 0x2, 0x282, 
    0x283, 0x7, 0x7, 0x2, 0x2, 0x283, 0x284, 0x5, 0x60, 0x31, 0x2, 0x284, 
    0x285, 0x7, 0x8, 0x2, 0x2, 0x285, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x286, 
    0x287, 0x5, 0x64, 0x33, 0x2, 0x287, 0x288, 0x7, 0x36, 0x2, 0x2, 0x288, 
    0x289, 0x5, 0x66, 0x34, 0x2, 0x289, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x252, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x260, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x26c, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x270, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x272, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x274, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x276, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x278, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x27c, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x27e, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x280, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x281, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x282, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x286, 0x3, 0x2, 0x2, 0x2, 0x28b, 
    0x2d1, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0xc, 0x1a, 0x2, 0x2, 0x28d, 
    0x28e, 0x9, 0x4, 0x2, 0x2, 0x28e, 0x2d0, 0x5, 0x62, 0x32, 0x1b, 0x28f, 
    0x290, 0xc, 0x19, 0x2, 0x2, 0x290, 0x291, 0x9, 0x5, 0x2, 0x2, 0x291, 
    0x2d0, 0x5, 0x62, 0x32, 0x1a, 0x292, 0x293, 0xc, 0x18, 0x2, 0x2, 0x293, 
    0x294, 0x9, 0x6, 0x2, 0x2, 0x294, 0x2d0, 0x5, 0x62, 0x32, 0x19, 0x295, 
    0x296, 0xc, 0x17, 0x2, 0x2, 0x296, 0x297, 0x9, 0x7, 0x2, 0x2, 0x297, 
    0x2d0, 0x5, 0x62, 0x32, 0x18, 0x298, 0x299, 0xc, 0x16, 0x2, 0x2, 0x299, 
    0x29a, 0x7, 0x40, 0x2, 0x2, 0x29a, 0x2d0, 0x5, 0x62, 0x32, 0x17, 0x29b, 
    0x29c, 0xc, 0x15, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x56, 0x2, 0x2, 0x29d, 
    0x2d0, 0x5, 0x62, 0x32, 0x16, 0x29e, 0x29f, 0xc, 0x14, 0x2, 0x2, 0x29f, 
    0x2a0, 0x9, 0x8, 0x2, 0x2, 0x2a0, 0x2d0, 0x5, 0x62, 0x32, 0x15, 0x2a1, 
    0x2a2, 0xc, 0x13, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x26, 0x2, 0x2, 0x2a3, 
    0x2d0, 0x5, 0x62, 0x32, 0x14, 0x2a4, 0x2a5, 0xc, 0x12, 0x2, 0x2, 0x2a5, 
    0x2a6, 0x7, 0x27, 0x2, 0x2, 0x2a6, 0x2d0, 0x5, 0x62, 0x32, 0x13, 0x2a7, 
    0x2a8, 0xc, 0x11, 0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x28, 0x2, 0x2, 0x2a9, 
    0x2d0, 0x5, 0x62, 0x32, 0x12, 0x2aa, 0x2ab, 0xc, 0x10, 0x2, 0x2, 0x2ab, 
    0x2ac, 0x7, 0x29, 0x2, 0x2, 0x2ac, 0x2d0, 0x5, 0x62, 0x32, 0x11, 0x2ad, 
    0x2ae, 0xc, 0xf, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x2a, 0x2, 0x2, 0x2af, 
    0x2d0, 0x5, 0x62, 0x32, 0x10, 0x2b0, 0x2b1, 0xc, 0xe, 0x2, 0x2, 0x2b1, 
    0x2b2, 0x7, 0xe, 0x2, 0x2, 0x2b2, 0x2b3, 0x5, 0x62, 0x32, 0x2, 0x2b3, 
    0x2b4, 0x7, 0xf, 0x2, 0x2, 0x2b4, 0x2b5, 0x5, 0x62, 0x32, 0xf, 0x2b5, 
    0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b7, 0xc, 0xd, 0x2, 0x2, 0x2b7, 
    0x2b8, 0x7, 0xd, 0x2, 0x2, 0x2b8, 0x2d0, 0x5, 0x62, 0x32, 0xe, 0x2b9, 
    0x2ba, 0xc, 0xc, 0x2, 0x2, 0x2ba, 0x2bb, 0x5, 0x68, 0x35, 0x2, 0x2bb, 
    0x2bc, 0x5, 0x62, 0x32, 0xd, 0x2bc, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2bd, 
    0x2be, 0xc, 0x29, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x5, 0x2, 0x2, 0x2bf, 
    0x2c0, 0x5, 0x60, 0x31, 0x2, 0x2c0, 0x2c1, 0x7, 0x6, 0x2, 0x2, 0x2c1, 
    0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0xc, 0x28, 0x2, 0x2, 0x2c3, 
    0x2c4, 0x7, 0x11, 0x2, 0x2, 0x2c4, 0x2d0, 0x5, 0x6e, 0x38, 0x2, 0x2c5, 
    0x2c6, 0xc, 0x27, 0x2, 0x2, 0x2c6, 0x2d0, 0x5, 0x5c, 0x2f, 0x2, 0x2c7, 
    0x2c8, 0xc, 0x25, 0x2, 0x2, 0x2c8, 0x2c9, 0x6, 0x32, 0x1c, 0x2, 0x2c9, 
    0x2d0, 0x7, 0x12, 0x2, 0x2, 0x2ca, 0x2cb, 0xc, 0x24, 0x2, 0x2, 0x2cb, 
    0x2cc, 0x6, 0x32, 0x1e, 0x2, 0x2cc, 0x2d0, 0x7, 0x13, 0x2, 0x2, 0x2cd, 
    0x2ce, 0xc, 0xb, 0x2, 0x2, 0x2ce, 0x2d0, 0x7, 0x6a, 0x2, 0x2, 0x2cf, 
    0x28c, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x292, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x295, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x298, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x29e, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d1, 
    0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2db, 
    0x7, 0x68, 0x2, 0x2, 0x2d5, 0x2d7, 0x7, 0x7, 0x2, 0x2, 0x2d6, 0x2d8, 
    0x5, 0x46, 0x24, 0x2, 0x2d7, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
    0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2db, 
    0x7, 0x8, 0x2, 0x2, 0x2da, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2d5, 
    0x3, 0x2, 0x2, 0x2, 0x2db, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2e2, 0x5, 
    0x62, 0x32, 0x2, 0x2dd, 0x2de, 0x7, 0x9, 0x2, 0x2, 0x2de, 0x2df, 0x5, 
    0x4c, 0x27, 0x2, 0x2df, 0x2e0, 0x7, 0xa, 0x2, 0x2, 0x2e0, 0x2e2, 0x3, 
    0x2, 0x2, 0x2, 0x2e1, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2dd, 0x3, 
    0x2, 0x2, 0x2, 0x2e2, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x9, 0x9, 
    0x2, 0x2, 0x2e4, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2ec, 0x7, 0x37, 
    0x2, 0x2, 0x2e6, 0x2ec, 0x7, 0x38, 0x2, 0x2, 0x2e7, 0x2ec, 0x7, 0x69, 
    0x2, 0x2, 0x2e8, 0x2ec, 0x7, 0x6a, 0x2, 0x2, 0x2e9, 0x2ec, 0x7, 0x3, 
    0x2, 0x2, 0x2ea, 0x2ec, 0x5, 0x6c, 0x37, 0x2, 0x2eb, 0x2e5, 0x3, 0x2, 
    0x2, 0x2, 0x2eb, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2eb, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2e9, 0x3, 0x2, 
    0x2, 0x2, 0x2eb, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x2ed, 0x2ee, 0x9, 0xa, 0x2, 0x2, 0x2ee, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x2ef, 0x2f2, 0x7, 0x68, 0x2, 0x2, 0x2f0, 0x2f2, 0x5, 0x70, 0x39, 0x2, 
    0x2f1, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f0, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f7, 0x5, 0x72, 0x3a, 0x2, 
    0x2f4, 0x2f7, 0x7, 0x37, 0x2, 0x2, 0x2f5, 0x2f7, 0x7, 0x38, 0x2, 0x2, 
    0x2f6, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2f6, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2f8, 
    0x2f9, 0x9, 0xb, 0x2, 0x2, 0x2f9, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 
    0x7, 0x68, 0x2, 0x2, 0x2fb, 0x2fc, 0x6, 0x3b, 0x20, 0x2, 0x2fc, 0x2fd, 
    0x5, 0x5a, 0x2e, 0x2, 0x2fd, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
    0x7, 0x68, 0x2, 0x2, 0x2ff, 0x300, 0x6, 0x3c, 0x21, 0x2, 0x300, 0x301, 
    0x5, 0x5a, 0x2e, 0x2, 0x301, 0x77, 0x3, 0x2, 0x2, 0x2, 0x302, 0x307, 
    0x7, 0xb, 0x2, 0x2, 0x303, 0x307, 0x7, 0x2, 0x2, 0x3, 0x304, 0x307, 
    0x6, 0x3d, 0x22, 0x2, 0x305, 0x307, 0x6, 0x3d, 0x23, 0x2, 0x306, 0x302, 
    0x3, 0x2, 0x2, 0x2, 0x306, 0x303, 0x3, 0x2, 0x2, 0x2, 0x306, 0x304, 
    0x3, 0x2, 0x2, 0x2, 0x306, 0x305, 0x3, 0x2, 0x2, 0x2, 0x307, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x7b, 0x80, 0x95, 0x99, 0xa0, 0xab, 0xb1, 0xb5, 
    0xc4, 0xd7, 0xdb, 0xdf, 0xe9, 0xed, 0xf8, 0x105, 0x10b, 0x112, 0x119, 
    0x120, 0x132, 0x136, 0x138, 0x13f, 0x145, 0x14a, 0x159, 0x15c, 0x16e, 
    0x17b, 0x181, 0x187, 0x18e, 0x19f, 0x1a7, 0x1aa, 0x1af, 0x1bb, 0x1c0, 
    0x1c5, 0x1ca, 0x1d0, 0x1d5, 0x1db, 0x1df, 0x1e4, 0x1ed, 0x1f2, 0x1f8, 
    0x1fb, 0x1fe, 0x209, 0x20c, 0x20f, 0x22e, 0x233, 0x23b, 0x240, 0x243, 
    0x24f, 0x255, 0x259, 0x262, 0x268, 0x28a, 0x2cf, 0x2d1, 0x2d7, 0x2da, 
    0x2e1, 0x2eb, 0x2f1, 0x2f6, 0x306, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JavaScriptParser::Initializer JavaScriptParser::_init;
