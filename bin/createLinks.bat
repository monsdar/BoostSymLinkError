
@echo off

mklink "%~dp0/../data/SoftLink.txt" "%~dp0/../data/test.txt"
mklink /H "%~dp0/../data/HardLink.txt" "%~dp0/../data/test.txt"
