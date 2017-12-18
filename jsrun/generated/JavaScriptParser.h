
// Generated from JavaScriptParser.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


#include "../base/JavaScriptBaseParser.h"


class  JavaScriptParser : public JavaScriptBaseParser {
public:
  enum {
    RegularExpressionLiteral = 1, LineTerminator = 2, OpenBracket = 3, CloseBracket = 4, 
    OpenParen = 5, CloseParen = 6, OpenBrace = 7, CloseBrace = 8, SemiColon = 9, 
    Comma = 10, Assign = 11, QuestionMark = 12, Colon = 13, Ellipsis = 14, 
    Dot = 15, PlusPlus = 16, MinusMinus = 17, Plus = 18, Minus = 19, BitNot = 20, 
    Not = 21, Multiply = 22, Divide = 23, Modulus = 24, RightShiftArithmetic = 25, 
    LeftShiftArithmetic = 26, RightShiftLogical = 27, LessThan = 28, MoreThan = 29, 
    LessThanEquals = 30, GreaterThanEquals = 31, Equals_ = 32, NotEquals = 33, 
    IdentityEquals = 34, IdentityNotEquals = 35, BitAnd = 36, BitXOr = 37, 
    BitOr = 38, And = 39, Or = 40, MultiplyAssign = 41, DivideAssign = 42, 
    ModulusAssign = 43, PlusAssign = 44, MinusAssign = 45, LeftShiftArithmeticAssign = 46, 
    RightShiftArithmeticAssign = 47, RightShiftLogicalAssign = 48, BitAndAssign = 49, 
    BitXorAssign = 50, BitOrAssign = 51, ARROW = 52, NullLiteral = 53, BooleanLiteral = 54, 
    DecimalLiteral = 55, HexIntegerLiteral = 56, OctalIntegerLiteral = 57, 
    OctalIntegerLiteral2 = 58, BinaryIntegerLiteral = 59, Break = 60, Do = 61, 
    Instanceof = 62, Typeof = 63, Case = 64, Else = 65, New = 66, Var = 67, 
    Catch = 68, Finally = 69, Return = 70, Void = 71, Continue = 72, For = 73, 
    Switch = 74, While = 75, Debugger = 76, Function = 77, This = 78, With = 79, 
    Default = 80, If = 81, Throw = 82, Delete = 83, In = 84, Try = 85, Class = 86, 
    Enum = 87, Extends = 88, Super = 89, Const = 90, Export = 91, Import = 92, 
    Implements = 93, Let = 94, Private = 95, Public = 96, Interface = 97, 
    Package = 98, Protected = 99, Static = 100, Yield = 101, Identifier = 102, 
    StringLiteral = 103, TemplateStringLiteral = 104, WhiteSpaces = 105, 
    MultiLineComment = 106, SingleLineComment = 107, HtmlComment = 108, 
    CDataComment = 109, UnexpectedCharacter = 110
  };

  enum {
    RuleProgram = 0, RuleSourceElement = 1, RuleStatement = 2, RuleBlock = 3, 
    RuleStatementList = 4, RuleVariableStatement = 5, RuleVariableDeclarationList = 6, 
    RuleVariableDeclaration = 7, RuleEmptyStatement = 8, RuleExpressionStatement = 9, 
    RuleIfStatement = 10, RuleIterationStatement = 11, RuleVarModifier = 12, 
    RuleContinueStatement = 13, RuleBreakStatement = 14, RuleReturnStatement = 15, 
    RuleWithStatement = 16, RuleSwitchStatement = 17, RuleCaseBlock = 18, 
    RuleCaseClauses = 19, RuleCaseClause = 20, RuleDefaultClause = 21, RuleLabelledStatement = 22, 
    RuleThrowStatement = 23, RuleTryStatement = 24, RuleCatchProduction = 25, 
    RuleFinallyProduction = 26, RuleDebuggerStatement = 27, RuleFunctionDeclaration = 28, 
    RuleClassDeclaration = 29, RuleClassTail = 30, RuleClassElement = 31, 
    RuleMethodDefinition = 32, RuleGeneratorMethod = 33, RuleFormalParameterList = 34, 
    RuleFormalParameterArg = 35, RuleLastFormalParameterArg = 36, RuleFunctionBody = 37, 
    RuleSourceElements = 38, RuleArrayLiteral = 39, RuleElementList = 40, 
    RuleLastElement = 41, RuleObjectLiteral = 42, RulePropertyAssignment = 43, 
    RulePropertyName = 44, RuleArguments = 45, RuleLastArgument = 46, RuleExpressionSequence = 47, 
    RuleSingleExpression = 48, RuleArrowFunctionParameters = 49, RuleArrowFunctionBody = 50, 
    RuleAssignmentOperator = 51, RuleLiteral = 52, RuleNumericLiteral = 53, 
    RuleIdentifierName = 54, RuleReservedWord = 55, RuleKeyword = 56, RuleGetter = 57, 
    RuleSetter = 58, RuleEos = 59
  };

  JavaScriptParser(antlr4::TokenStream *input);
  ~JavaScriptParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class SourceElementContext;
  class StatementContext;
  class BlockContext;
  class StatementListContext;
  class VariableStatementContext;
  class VariableDeclarationListContext;
  class VariableDeclarationContext;
  class EmptyStatementContext;
  class ExpressionStatementContext;
  class IfStatementContext;
  class IterationStatementContext;
  class VarModifierContext;
  class ContinueStatementContext;
  class BreakStatementContext;
  class ReturnStatementContext;
  class WithStatementContext;
  class SwitchStatementContext;
  class CaseBlockContext;
  class CaseClausesContext;
  class CaseClauseContext;
  class DefaultClauseContext;
  class LabelledStatementContext;
  class ThrowStatementContext;
  class TryStatementContext;
  class CatchProductionContext;
  class FinallyProductionContext;
  class DebuggerStatementContext;
  class FunctionDeclarationContext;
  class ClassDeclarationContext;
  class ClassTailContext;
  class ClassElementContext;
  class MethodDefinitionContext;
  class GeneratorMethodContext;
  class FormalParameterListContext;
  class FormalParameterArgContext;
  class LastFormalParameterArgContext;
  class FunctionBodyContext;
  class SourceElementsContext;
  class ArrayLiteralContext;
  class ElementListContext;
  class LastElementContext;
  class ObjectLiteralContext;
  class PropertyAssignmentContext;
  class PropertyNameContext;
  class ArgumentsContext;
  class LastArgumentContext;
  class ExpressionSequenceContext;
  class SingleExpressionContext;
  class ArrowFunctionParametersContext;
  class ArrowFunctionBodyContext;
  class AssignmentOperatorContext;
  class LiteralContext;
  class NumericLiteralContext;
  class IdentifierNameContext;
  class ReservedWordContext;
  class KeywordContext;
  class GetterContext;
  class SetterContext;
  class EosContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  SourceElementContext : public antlr4::ParserRuleContext {
  public:
    SourceElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *Export();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceElementContext* sourceElement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    VariableStatementContext *variableStatement();
    EmptyStatementContext *emptyStatement();
    ExpressionStatementContext *expressionStatement();
    IfStatementContext *ifStatement();
    IterationStatementContext *iterationStatement();
    ContinueStatementContext *continueStatement();
    BreakStatementContext *breakStatement();
    ReturnStatementContext *returnStatement();
    WithStatementContext *withStatement();
    LabelledStatementContext *labelledStatement();
    SwitchStatementContext *switchStatement();
    ThrowStatementContext *throwStatement();
    TryStatementContext *tryStatement();
    DebuggerStatementContext *debuggerStatement();
    FunctionDeclarationContext *functionDeclaration();
    ClassDeclarationContext *classDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementListContext* statementList();

  class  VariableStatementContext : public antlr4::ParserRuleContext {
  public:
    VariableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarModifierContext *varModifier();
    VariableDeclarationListContext *variableDeclarationList();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableStatementContext* variableStatement();

  class  VariableDeclarationListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclarationContext *> variableDeclaration();
    VariableDeclarationContext* variableDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationListContext* variableDeclarationList();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionSequenceContext *expressionSequence();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ExpressionSequenceContext *expressionSequence();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Else();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfStatementContext* ifStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IterationStatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(IterationStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoStatementContext : public IterationStatementContext {
  public:
    DoStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *Do();
    StatementContext *statement();
    antlr4::tree::TerminalNode *While();
    ExpressionSequenceContext *expressionSequence();
    EosContext *eos();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForVarStatementContext : public IterationStatementContext {
  public:
    ForVarStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    VarModifierContext *varModifier();
    VariableDeclarationListContext *variableDeclarationList();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForVarInStatementContext : public IterationStatementContext {
  public:
    ForVarInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    VarModifierContext *varModifier();
    VariableDeclarationContext *variableDeclaration();
    ExpressionSequenceContext *expressionSequence();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  WhileStatementContext : public IterationStatementContext {
  public:
    WhileStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *While();
    ExpressionSequenceContext *expressionSequence();
    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForStatementContext : public IterationStatementContext {
  public:
    ForStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    StatementContext *statement();
    std::vector<ExpressionSequenceContext *> expressionSequence();
    ExpressionSequenceContext* expressionSequence(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ForInStatementContext : public IterationStatementContext {
  public:
    ForInStatementContext(IterationStatementContext *ctx);

    antlr4::tree::TerminalNode *For();
    SingleExpressionContext *singleExpression();
    ExpressionSequenceContext *expressionSequence();
    StatementContext *statement();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  IterationStatementContext* iterationStatement();

  class  VarModifierContext : public antlr4::ParserRuleContext {
  public:
    VarModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarModifierContext* varModifier();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Continue();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    EosContext *eos();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    EosContext *eos();
    ExpressionSequenceContext *expressionSequence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  WithStatementContext : public antlr4::ParserRuleContext {
  public:
    WithStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    ExpressionSequenceContext *expressionSequence();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WithStatementContext* withStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Switch();
    ExpressionSequenceContext *expressionSequence();
    CaseBlockContext *caseBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  CaseBlockContext : public antlr4::ParserRuleContext {
  public:
    CaseBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseClausesContext *> caseClauses();
    CaseClausesContext* caseClauses(size_t i);
    DefaultClauseContext *defaultClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseBlockContext* caseBlock();

  class  CaseClausesContext : public antlr4::ParserRuleContext {
  public:
    CaseClausesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseClauseContext *> caseClause();
    CaseClauseContext* caseClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClausesContext* caseClauses();

  class  CaseClauseContext : public antlr4::ParserRuleContext {
  public:
    CaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Case();
    ExpressionSequenceContext *expressionSequence();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseClauseContext* caseClause();

  class  DefaultClauseContext : public antlr4::ParserRuleContext {
  public:
    DefaultClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Default();
    StatementListContext *statementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefaultClauseContext* defaultClause();

  class  LabelledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelledStatementContext* labelledStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    ExpressionSequenceContext *expressionSequence();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    BlockContext *block();
    CatchProductionContext *catchProduction();
    FinallyProductionContext *finallyProduction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchProductionContext : public antlr4::ParserRuleContext {
  public:
    CatchProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *Identifier();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CatchProductionContext* catchProduction();

  class  FinallyProductionContext : public antlr4::ParserRuleContext {
  public:
    FinallyProductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Finally();
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FinallyProductionContext* finallyProduction();

  class  DebuggerStatementContext : public antlr4::ParserRuleContext {
  public:
    DebuggerStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Debugger();
    EosContext *eos();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DebuggerStatementContext* debuggerStatement();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *Identifier();
    FunctionBodyContext *functionBody();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    ClassTailContext *classTail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  ClassTailContext : public antlr4::ParserRuleContext {
  public:
    ClassTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extends();
    SingleExpressionContext *singleExpression();
    std::vector<ClassElementContext *> classElement();
    ClassElementContext* classElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassTailContext* classTail();

  class  ClassElementContext : public antlr4::ParserRuleContext {
  public:
    ClassElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodDefinitionContext *methodDefinition();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassElementContext* classElement();

  class  MethodDefinitionContext : public antlr4::ParserRuleContext {
  public:
    MethodDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyNameContext *propertyName();
    FunctionBodyContext *functionBody();
    FormalParameterListContext *formalParameterList();
    GetterContext *getter();
    SetterContext *setter();
    GeneratorMethodContext *generatorMethod();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodDefinitionContext* methodDefinition();

  class  GeneratorMethodContext : public antlr4::ParserRuleContext {
  public:
    GeneratorMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    FunctionBodyContext *functionBody();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneratorMethodContext* generatorMethod();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterArgContext *> formalParameterArg();
    FormalParameterArgContext* formalParameterArg(size_t i);
    LastFormalParameterArgContext *lastFormalParameterArg();
    ArrayLiteralContext *arrayLiteral();
    ObjectLiteralContext *objectLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SingleExpressionContext *singleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormalParameterArgContext* formalParameterArg();

  class  LastFormalParameterArgContext : public antlr4::ParserRuleContext {
  public:
    LastFormalParameterArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LastFormalParameterArgContext* lastFormalParameterArg();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceElementsContext *sourceElements();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  SourceElementsContext : public antlr4::ParserRuleContext {
  public:
    SourceElementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SourceElementContext *> sourceElement();
    SourceElementContext* sourceElement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SourceElementsContext* sourceElements();

  class  ArrayLiteralContext : public antlr4::ParserRuleContext {
  public:
    ArrayLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementListContext *elementList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayLiteralContext* arrayLiteral();

  class  ElementListContext : public antlr4::ParserRuleContext {
  public:
    ElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    LastElementContext *lastElement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementListContext* elementList();

  class  LastElementContext : public antlr4::ParserRuleContext {
  public:
    LastElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LastElementContext* lastElement();

  class  ObjectLiteralContext : public antlr4::ParserRuleContext {
  public:
    ObjectLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropertyAssignmentContext *> propertyAssignment();
    PropertyAssignmentContext* propertyAssignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ObjectLiteralContext* objectLiteral();

  class  PropertyAssignmentContext : public antlr4::ParserRuleContext {
  public:
    PropertyAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PropertyAssignmentContext() : antlr4::ParserRuleContext() { }
    void copyFrom(PropertyAssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    PropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    PropertyNameContext *propertyName();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ComputedPropertyExpressionAssignmentContext : public PropertyAssignmentContext {
  public:
    ComputedPropertyExpressionAssignmentContext(PropertyAssignmentContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertyShorthandContext : public PropertyAssignmentContext {
  public:
    PropertyShorthandContext(PropertyAssignmentContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertySetterContext : public PropertyAssignmentContext {
  public:
    PropertySetterContext(PropertyAssignmentContext *ctx);

    SetterContext *setter();
    antlr4::tree::TerminalNode *Identifier();
    FunctionBodyContext *functionBody();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PropertyGetterContext : public PropertyAssignmentContext {
  public:
    PropertyGetterContext(PropertyAssignmentContext *ctx);

    GetterContext *getter();
    FunctionBodyContext *functionBody();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MethodPropertyContext : public PropertyAssignmentContext {
  public:
    MethodPropertyContext(PropertyAssignmentContext *ctx);

    GeneratorMethodContext *generatorMethod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  PropertyAssignmentContext* propertyAssignment();

  class  PropertyNameContext : public antlr4::ParserRuleContext {
  public:
    PropertyNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierNameContext *identifierName();
    antlr4::tree::TerminalNode *StringLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyNameContext* propertyName();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    LastArgumentContext *lastArgument();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  LastArgumentContext : public antlr4::ParserRuleContext {
  public:
    LastArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LastArgumentContext* lastArgument();

  class  ExpressionSequenceContext : public antlr4::ParserRuleContext {
  public:
    ExpressionSequenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionSequenceContext* expressionSequence();

  class  SingleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SingleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SingleExpressionContext() : antlr4::ParserRuleContext() { }
    void copyFrom(SingleExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TemplateStringExpressionContext : public SingleExpressionContext {
  public:
    TemplateStringExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    antlr4::tree::TerminalNode *TemplateStringLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TernaryExpressionContext : public SingleExpressionContext {
  public:
    TernaryExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalAndExpressionContext : public SingleExpressionContext {
  public:
    LogicalAndExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreIncrementExpressionContext : public SingleExpressionContext {
  public:
    PreIncrementExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ObjectLiteralExpressionContext : public SingleExpressionContext {
  public:
    ObjectLiteralExpressionContext(SingleExpressionContext *ctx);

    ObjectLiteralContext *objectLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InExpressionContext : public SingleExpressionContext {
  public:
    InExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *In();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LogicalOrExpressionContext : public SingleExpressionContext {
  public:
    LogicalOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NotExpressionContext : public SingleExpressionContext {
  public:
    NotExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PreDecreaseExpressionContext : public SingleExpressionContext {
  public:
    PreDecreaseExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArgumentsExpressionContext : public SingleExpressionContext {
  public:
    ArgumentsExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    ArgumentsContext *arguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ThisExpressionContext : public SingleExpressionContext {
  public:
    ThisExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *This();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  FunctionExpressionContext : public SingleExpressionContext {
  public:
    FunctionExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Function();
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *Identifier();
    FormalParameterListContext *formalParameterList();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryMinusExpressionContext : public SingleExpressionContext {
  public:
    UnaryMinusExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentExpressionContext : public SingleExpressionContext {
  public:
    AssignmentExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostDecreaseExpressionContext : public SingleExpressionContext {
  public:
    PostDecreaseExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  TypeofExpressionContext : public SingleExpressionContext {
  public:
    TypeofExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Typeof();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  InstanceofExpressionContext : public SingleExpressionContext {
  public:
    InstanceofExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    antlr4::tree::TerminalNode *Instanceof();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  UnaryPlusExpressionContext : public SingleExpressionContext {
  public:
    UnaryPlusExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  DeleteExpressionContext : public SingleExpressionContext {
  public:
    DeleteExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Delete();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrowFunctionExpressionContext : public SingleExpressionContext {
  public:
    ArrowFunctionExpressionContext(SingleExpressionContext *ctx);

    ArrowFunctionParametersContext *arrowFunctionParameters();
    ArrowFunctionBodyContext *arrowFunctionBody();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  EqualityExpressionContext : public SingleExpressionContext {
  public:
    EqualityExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitXOrExpressionContext : public SingleExpressionContext {
  public:
    BitXOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  SuperExpressionContext : public SingleExpressionContext {
  public:
    SuperExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Super();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MultiplicativeExpressionContext : public SingleExpressionContext {
  public:
    MultiplicativeExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitShiftExpressionContext : public SingleExpressionContext {
  public:
    BitShiftExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ParenthesizedExpressionContext : public SingleExpressionContext {
  public:
    ParenthesizedExpressionContext(SingleExpressionContext *ctx);

    ExpressionSequenceContext *expressionSequence();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AdditiveExpressionContext : public SingleExpressionContext {
  public:
    AdditiveExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  RelationalExpressionContext : public SingleExpressionContext {
  public:
    RelationalExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  PostIncrementExpressionContext : public SingleExpressionContext {
  public:
    PostIncrementExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitNotExpressionContext : public SingleExpressionContext {
  public:
    BitNotExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  NewExpressionContext : public SingleExpressionContext {
  public:
    NewExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *New();
    SingleExpressionContext *singleExpression();
    ArgumentsContext *arguments();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  LiteralExpressionContext : public SingleExpressionContext {
  public:
    LiteralExpressionContext(SingleExpressionContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ArrayLiteralExpressionContext : public SingleExpressionContext {
  public:
    ArrayLiteralExpressionContext(SingleExpressionContext *ctx);

    ArrayLiteralContext *arrayLiteral();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberDotExpressionContext : public SingleExpressionContext {
  public:
    MemberDotExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    IdentifierNameContext *identifierName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  ClassExpressionContext : public SingleExpressionContext {
  public:
    ClassExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Class();
    ClassTailContext *classTail();
    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  MemberIndexExpressionContext : public SingleExpressionContext {
  public:
    MemberIndexExpressionContext(SingleExpressionContext *ctx);

    SingleExpressionContext *singleExpression();
    ExpressionSequenceContext *expressionSequence();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  IdentifierExpressionContext : public SingleExpressionContext {
  public:
    IdentifierExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitAndExpressionContext : public SingleExpressionContext {
  public:
    BitAndExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  BitOrExpressionContext : public SingleExpressionContext {
  public:
    BitOrExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  AssignmentOperatorExpressionContext : public SingleExpressionContext {
  public:
    AssignmentOperatorExpressionContext(SingleExpressionContext *ctx);

    std::vector<SingleExpressionContext *> singleExpression();
    SingleExpressionContext* singleExpression(size_t i);
    AssignmentOperatorContext *assignmentOperator();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  class  VoidExpressionContext : public SingleExpressionContext {
  public:
    VoidExpressionContext(SingleExpressionContext *ctx);

    antlr4::tree::TerminalNode *Void();
    SingleExpressionContext *singleExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
  };

  SingleExpressionContext* singleExpression();
  SingleExpressionContext* singleExpression(int precedence);
  class  ArrowFunctionParametersContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    FormalParameterListContext *formalParameterList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrowFunctionParametersContext* arrowFunctionParameters();

  class  ArrowFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    ArrowFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleExpressionContext *singleExpression();
    FunctionBodyContext *functionBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrowFunctionBodyContext* arrowFunctionBody();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *TemplateStringLiteral();
    antlr4::tree::TerminalNode *RegularExpressionLiteral();
    NumericLiteralContext *numericLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *HexIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral();
    antlr4::tree::TerminalNode *OctalIntegerLiteral2();
    antlr4::tree::TerminalNode *BinaryIntegerLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  IdentifierNameContext : public antlr4::ParserRuleContext {
  public:
    IdentifierNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    ReservedWordContext *reservedWord();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierNameContext* identifierName();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordContext *keyword();
    antlr4::tree::TerminalNode *NullLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedWordContext* reservedWord();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *Instanceof();
    antlr4::tree::TerminalNode *Typeof();
    antlr4::tree::TerminalNode *Case();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Var();
    antlr4::tree::TerminalNode *Catch();
    antlr4::tree::TerminalNode *Finally();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Switch();
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *Debugger();
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Throw();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Try();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Extends();
    antlr4::tree::TerminalNode *Super();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Export();
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *Implements();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Package();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Yield();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  GetterContext : public antlr4::ParserRuleContext {
  public:
    GetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GetterContext* getter();

  class  SetterContext : public antlr4::ParserRuleContext {
  public:
    SetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    PropertyNameContext *propertyName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SetterContext* setter();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SemiColon();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EosContext* eos();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionStatementSempred(ExpressionStatementContext *_localctx, size_t predicateIndex);
  bool iterationStatementSempred(IterationStatementContext *_localctx, size_t predicateIndex);
  bool continueStatementSempred(ContinueStatementContext *_localctx, size_t predicateIndex);
  bool breakStatementSempred(BreakStatementContext *_localctx, size_t predicateIndex);
  bool returnStatementSempred(ReturnStatementContext *_localctx, size_t predicateIndex);
  bool throwStatementSempred(ThrowStatementContext *_localctx, size_t predicateIndex);
  bool singleExpressionSempred(SingleExpressionContext *_localctx, size_t predicateIndex);
  bool getterSempred(GetterContext *_localctx, size_t predicateIndex);
  bool setterSempred(SetterContext *_localctx, size_t predicateIndex);
  bool eosSempred(EosContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

