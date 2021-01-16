#include "Utils.hpp"

int main()
{
	Utils::AttachConsole();
	
	Utils::InitConsole();
	Utils::ConsolePrint("Hello, I'm zhitkur\n");

	system("pause");
	Utils::DetachConsole();
	/*
	OR you can Detach through conditional statement is also possible
	e.g. if(GetAsyncKeyState(VK_END) & 1) Utils::DetachConsole();
	*/
	return 0;
}