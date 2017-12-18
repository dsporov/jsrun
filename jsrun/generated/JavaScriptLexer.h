
// Generated from JavaScriptLexer.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"


#include "../base/JavaScriptBaseLexer.h"


class  JavaScriptLexer : public JavaScriptBaseLexer {
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

  JavaScriptLexer(antlr4::CharStream *input);
  ~JavaScriptLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
  bool RegularExpressionLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OctalIntegerLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ImplementsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LetSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PrivateSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PublicSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InterfaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PackageSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ProtectedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StaticSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool YieldSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

