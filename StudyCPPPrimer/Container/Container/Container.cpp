/* 
 * Container.cpp : Defines the entry point for the console application.
 *
 */

#include "stdafx.h"
#include "exit_handler.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

	cout << "... cout main func " << endl;

	ExitHandler* exit = new ExitHandler();
	exit->handle();
	return 0;
}

