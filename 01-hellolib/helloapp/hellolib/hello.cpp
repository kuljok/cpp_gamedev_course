#include "hello.h"

#include <iostream>

bool hello(const std::string& name)
{
    std::cout << "Hello, " << name << "!";
        return std::cout.good();
}
