#include <iostream>
#include <concepts>

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
    std::cout << "The multiplication is : " << add(4, 4) << std::endl;

    return EXIT_SUCCESS;
}
