#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>

T add(T a, T b)
{
    return a + b;
}

T mul(T a, T b)
{
    return a*b;
}

int main()
{
    std::cout << "Hello from C++ 2ß with CMake on Linux/window" << std::endl;
    std::cout << "The sum is : " << add(4, 4) << std::endl;
    std::cout << "The multiplication is : " << mul(4, 4) << std::endl;
cd

    return EXIT_SUCCESS;
}
