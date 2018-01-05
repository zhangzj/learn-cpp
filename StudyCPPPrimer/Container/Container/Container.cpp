// Container.cpp : Defines the entry point for the console application.
//
//#define ESCAPE 27
#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


#include <string>
using std::string;
#include <Windows.h>

void exitByEscape()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			break;
			std::cout << "DUDE! You've pressed the escape key";
			std::cin.ignore();
		}
	}
}
int main()
{




	exitByEscape();
	return 0;
}

