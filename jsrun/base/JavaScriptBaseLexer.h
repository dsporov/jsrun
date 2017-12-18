#pragma once

#include "antlr4-runtime.h"
#include <stack>
#include <vector>

/// <summary>
class JavaScriptBaseLexer : public antlr4::Lexer {
private:
    std::stack<bool> _scopeStrictModes;

	size_t _lastTokenType;

    bool _useStrictDefault;
    bool _useStrictCurrent;

public:
    JavaScriptBaseLexer(antlr4::CharStream *input)
        : antlr4::Lexer(input)
		, _useStrictDefault(false)
		, _useStrictCurrent(false)
		, _lastTokenType(size_t(-1))
	{
    }

    bool getUseStrictDefault() const { return _useStrictDefault; }
	bool setUseStrictDefault(bool value) {
		_useStrictDefault = value;
		_useStrictCurrent = value;
	}

    bool IsSrictMode() const {
        return _useStrictCurrent;
    }

	virtual std::unique_ptr<antlr4::Token> nextToken();

protected:
    /// <summary>
    /// Returns true if the lexer can match a regex literal.
    /// </summary>
	bool RegexPossible();
};
