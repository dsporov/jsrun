#include "JavaScriptBaseParser.h"
#include "../generated/JavaScriptParser.h"


bool JavaScriptBaseParser::notLineTerminator() {
    return !here(JavaScriptParser::LineTerminator);
}

bool JavaScriptBaseParser::notOpenBraceAndNotFunction() {
	size_t nextTokenType = _input->LT(1)->getType();
	return nextTokenType != JavaScriptParser::OpenBrace && nextTokenType != JavaScriptParser::Function;
}

bool JavaScriptBaseParser::closeBrace() {
	return _input->LT(1)->getType() == JavaScriptParser::CloseBrace;
}

bool JavaScriptBaseParser::lineTerminatorAhead() {
    // Get the token ahead of the current index.
    int possibleIndexEosToken = getCurrentToken()->getTokenIndex() - 1;
	antlr4::Token *ahead = _input->get(possibleIndexEosToken);

	if (ahead->getChannel() != antlr4::Lexer::HIDDEN) {
        // We're only interested in tokens on the Hidden channel.
        return false;
    }

    if (ahead->getType() == JavaScriptParser::LineTerminator)
    {
        // There is definitely a line terminator ahead.
        return true;
    }

    if (ahead->getType() == JavaScriptParser::WhiteSpaces)
    {
        // Get the token ahead of the current whitespaces.
        possibleIndexEosToken = getCurrentToken()->getTokenIndex() - 2;
        ahead = _input->get(possibleIndexEosToken);
    }

    // Get the token's text and type.
	std::string text = ahead->getText();
    int type = ahead->getType();

    // Check if the token is, or contains a line terminator.
    return (type == JavaScriptParser::MultiLineComment 
		&& ((text.find("\r") != std::string::npos) || (text.find("\n") != std::string::npos)))
		|| (type == JavaScriptParser::LineTerminator);
}
