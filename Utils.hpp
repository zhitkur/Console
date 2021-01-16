#pragma once

#include <Windows.h>
#include <iostream>

namespace Utils
{
	void AttachConsole();
	void DetachConsole();
	void InitConsole();
	bool ConsolePrint(const char* fmt, ...);
}