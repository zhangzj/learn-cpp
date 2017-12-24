// IOStreamDemo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	/*
	cout 对应char型字符串， wcout对应 wchar_t型字符串， 用哪个取决于你要输出的字符串是什么类型
	Q-	既然中文是属于宽字符也就是wchar_t型，为什么又能以char类型直接输出？
		C++不是很严格控制数据类型的么？
		那么中文到底属于char类型还是wchar_t类型？
		追答
	A-	中文字符串可以是wchar_t类型，也可以是char类型， 没人说中文就一定是宽字符， 这个跟编码方式有关系
	*/
	std::cerr << "this is cerr 我爱你中国 ; " << std::endl;
	std::cout << "this is cout 我爱你中国 : " << std::endl;
	std::clog << "this is clog 我爱你中国 : " << std::endl;

	std::wcout << "this si wide cout 我爱你中国 : " << std::endl;
	std::wcerr << "this si wide cerr 我爱你中国 : " << std::endl;
	std::wclog << "this si wide clog 我爱你中国 : " << std::endl;


	// added for stop in before return
	int a = 0;
	std::cin >> a;
	return 0;
}

