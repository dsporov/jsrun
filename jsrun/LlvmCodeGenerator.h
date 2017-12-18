#pragma once

#include <string>

#include "CodeGenerator.h"

class LlvmCodeGenerator : public ICodeGenerator
{
public:
	LlvmCodeGenerator(std::string const& outFileName);
	virtual ~LlvmCodeGenerator();

	virtual void createProgram();
	virtual void generate();

private:
	std::string m_outFileName;
};
