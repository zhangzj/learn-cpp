#include "stdafx.h"
#include "exit_handler.h"
#include <Windows.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void ExitHandler::handle()
{
	std::cout << "DUDE! Press the escape key to exit" << endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			break;
			std::cin.ignore();
		}
	}
	
}