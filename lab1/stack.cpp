#include "stack.h"

#include <iostream>

Stack::Stack()
{}

Stack::Stack(int value)
{
    elements.push_back(value);
}

void Stack::push(int value)
{
    elements.push_back(value);
}

int& Stack::top()
{
    return elements.back();
}

void Stack::pop()
{
    elements.pop_back();
}

void Stack::print_sum()
{
    unsigned int i = 0;
    int sum = 0;
    auto it = elements.begin();

    while(i < 3 && i < elements.size())
    {
        sum += *it;
        ++it;
        ++i;
    }

    std::cout << "Сумма первых " << i << "-х элементов стека равна " << sum << std::endl;
}
