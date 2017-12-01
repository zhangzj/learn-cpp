// hello world for tutorial
#include <iostream>
#include "logger.h"
#include "application.h"

int main (int argc, char *argv[])
{
 
    std::cout << "Hello, World!" << std::endl;
    hello();

    Application app;
    app.print();
    
    int a = 0;
    std::cin >> a;
    return 0;
}
