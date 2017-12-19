@echo off
if "%1"=="" goto :error

"C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\bin\amd64\link.exe" @js.rsp
exit /B 0

:error
echo Usage: link_dll.cmd [obj file]
exit /B 0
