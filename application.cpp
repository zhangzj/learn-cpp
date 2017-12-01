#include <iostream>
#include "application.h"

Application::Application()
{
    m_string = " from zhangzj Application ";
}

void Application::run()
{
	print("App Start");
	print(m_string);

	int a = 0;
	std::cin >> a;
}

void Application::print(std::string str)
{
	std::cout << str << std::endl;

}
