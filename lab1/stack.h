#ifndef STACK_H
#define STACK_H

#include <list>

class Stack
{
    std::list<int> elements;
public:
    Stack();
    Stack(int);

    void    push(int); // Добавить элемент с стек
    int&    top(); // Получить верхний элемент стека
    void    pop(); // Удалить верхний элемент стека

    void    print_sum(); // Сумма первых 3-х элементов
};

#endif // STACK_H
