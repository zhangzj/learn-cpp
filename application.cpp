#include <iostream>
#include "application.h"

Application::Application()
{
    m_string = " from zhangzj Application ";
}

void Application::print()
{
    std::cout << "print mString " 
        << m_string << ";" 
        << std::endl;
}
