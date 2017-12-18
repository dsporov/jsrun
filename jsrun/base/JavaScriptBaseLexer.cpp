#include "JavaScriptBaseLexer.h"
#include "../generated/JavaScriptLexer.h"

/// <summary>
std::unique_ptr<antlr4::Token> JavaScriptBaseLexer::nextToken() {
	// Get the next token.
	std::unique_ptr<antlr4::Token> next = antlr4::Lexer::nextToken();

	if (next->getType() == JavaScriptLexer::OpenBrace) {
		_useStrictCurrent = !_scopeStrictModes.empty() && _scopeStrictModes.top() ? true : getUseStrictDefault();
		_scopeStrictModes.push(_useStrictCurrent);
	}
	else if (next->getType() == JavaScriptLexer::CloseBrace)
	{
		if (_scopeStrictModes.empty()) {
			_useStrictCurrent = getUseStrictDefault();
		}
		else {
			_useStrictCurrent = _scopeStrictModes.top();
			_scopeStrictModes.pop();
		}
	}
	else if (next->getType() == JavaScriptLexer::StringLiteral &&
		(_lastTokenType == JavaScriptLexer::OpenBrace) &&
		(next->getText().substr(1, next->getText().length() - 2)) == "use strict")
	{
		if (!_scopeStrictModes.empty())
			_scopeStrictModes.pop();
		_useStrictCurrent = true;
		_scopeStrictModes.push(_useStrictCurrent);
	}

	if (next->getChannel() == antlr4::Lexer::DEFAULT_TOKEN_CHANNEL)
	{
		// Keep track of the last token on the default channel.
		_lastTokenType = next->getType();
	}

	return next;
}

bool JavaScriptBaseLexer::RegexPossible() {
    switch (_lastTokenType) {
		case JavaScriptLexer::Identifier:
		case JavaScriptLexer::NullLiteral:
		case JavaScriptLexer::BooleanLiteral:
		case JavaScriptLexer::This:
		case JavaScriptLexer::CloseBracket:
		case JavaScriptLexer::CloseParen:
		case JavaScriptLexer::OctalIntegerLiteral:
		case JavaScriptLexer::DecimalLiteral:
		case JavaScriptLexer::HexIntegerLiteral:
		case JavaScriptLexer::StringLiteral:
		case JavaScriptLexer::PlusPlus:
		case JavaScriptLexer::MinusMinus:
			// After any of the tokens above, no regex literal can follow.
			return false;

		default:
			// In all other cases, a regex literal _is_ possible.
			return true;
    }
}
