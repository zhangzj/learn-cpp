#pragma once
class Matrix3x3
{
public:
	Matrix3x3();
	Matrix3x3(int e11, int e12, int e13, int e21, int e22, int e23, int e31, int e32, int e33);
	virtual ~Matrix3x3();

	void print();

private:
	int m11;
	int m12;
	int m13;
	int m21;
	int m22;
	int m23;
	int m31;
	int m32; 
	int m33;
};

