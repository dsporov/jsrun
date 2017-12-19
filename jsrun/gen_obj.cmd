@echo off
if "%1"=="" goto :error

llvm\Release\bin\llc.exe -filetype=obj -relocation-model=pic -O0 %1 -o=%1.obj
exit /B 0

:error
echo Usage: gen_obj.cmd [bc file]
exit /B 0
