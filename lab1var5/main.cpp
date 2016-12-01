#include "stack.h"

#include <iostream>

int main()
{
    Stack s;
    s.push(5);
    s.push(3);
    s.push(2);

    s.print_sum();

    s.pop();

    s.print_sum();

    std::cout << s.top() << std::endl;

    return 0;
}
