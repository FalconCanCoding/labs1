#include "complex.h"

#include <iostream>

int main()
{
    Complex c(5,3);
    Complex x(c);

    std::cout << x << std::endl;

    std::cin >> c;
    std::cout << c;

    Complex z = x;
    std::cout << z << std::endl;

    if(c == z)
    {
        std::cout << "DA" << std::endl;
    }

    return 0;
}
