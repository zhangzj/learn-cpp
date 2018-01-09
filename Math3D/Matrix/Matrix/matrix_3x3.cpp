#include "stdafx.h"
#include "matrix_3x3.h"
#include <iostream>
using namespace std;

Matrix3x3::Matrix3x3()
{
	m11 = 0; m12 = 0; m13 = 0;
	m21 = 0; m22 = 0; m23 = 0;
	m31 = 0; m32 = 0; m33 = 0;
}

Matrix3x3::Matrix3x3(int e11, int e12, int e13, int e21, int e22, int e23, int e31, int e32, int e33)
{
	m11 = e11; m12 = e12; m13 = e13;
	m21 = e21; m22 = e32; m23 = e23;
	m31 = e31; m32 = e32; m33 = e33;
}


Matrix3x3::~Matrix3x3()
{
}

void Matrix3x3::print()
{
	cout << "... print matrix start..." << endl;
	cout << "( " << m11 << " " << m12 << " " << m13 << " )" << endl;
	cout << "( " << m21 << " " << m22 << " " << m23 << " )" << endl;
	cout << "( " << m31 << " " << m32 << " " << m33 << " )" << endl;
	cout << "... print matrix ended..." << endl;
}
