#pragma once

#include "antlr4-runtime.h"
#include <string>

class JavaScriptBaseParser : public antlr4::Parser
{
public:
	JavaScriptBaseParser(antlr4::TokenStream *input)
		: antlr4::Parser(input)
	{
	}

protected:
	/// <summary>
	/// hort form for prev(String str)
	/// </summary>
	bool p(std::string const& str) {
		return prev(str);
	}

	/// <summary>
	/// Whether the previous token value equals to str
	/// </summary>
	bool prev(std::string const& str) {
		return _input->LT(-1)->getText() == str;
	}

	bool notLineTerminator();
	bool notOpenBraceAndNotFunction();
	bool closeBrace();

	bool here(size_t type) {
		// Get the token ahead of the current index.
		int possibleIndexEosToken = getCurrentToken()->getTokenIndex() - 1;
		antlr4::Token *ahead = _input->get(possibleIndexEosToken);

		// Check if the token resides on the Hidden channel and if it's of the
		// provided type.
		return ahead->getChannel() == antlr4::Lexer::HIDDEN && ahead->getType() == type;
	}

	bool lineTerminatorAhead();
};
