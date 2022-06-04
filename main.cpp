#include <iostream>
#include <concepts>
#include "dog.h"
#include "operations.h"

template <typename T>
requires std::integral<T>

    T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "Hello from C++ 2ß with CMake on Linux/window" << std::endl;
    std::cout << "The sum is : " << add(4, 4) << std::endl;
    std::cout << "The sum is : " << add(14, 14) << std::endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    return EXIT_SUCCESS;
}


    
