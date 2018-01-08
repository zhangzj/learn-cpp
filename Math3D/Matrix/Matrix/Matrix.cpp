// Matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "exit_handler.h"
#include "matrix_3x3.h"

int main()
{
	Matrix3x3* m = new Matrix3x3(1,1,1,1,1,9,1,1,1);
	m->print();

	ExitHandler* exit = new ExitHandler();
	exit->handle();
    return 0;
}

