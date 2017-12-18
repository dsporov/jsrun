#pragma once

 struct ICodeGenerator {
	 virtual ~ICodeGenerator() = default;

	 virtual void createProgram() = 0;

	 virtual void generate() = 0;
};
