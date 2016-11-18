#ifndef STACK_H
#define STACK_H

#include <list>

/*---------------------------------
 * Из неочевидного:
 * 1) Почитать про std::list
 * 2) Почитать про итераторы (не много, достаточно понять то, что это нечто типа указателя)
 *---------------------------------
 */

class Stack
{
    std::list<int> elements;
public:
    Stack(); // Конструктор по умолчанию
    Stack(int); // Конструктор с параметрами

    void    push(int); // Добавить элемент с стек
    int&    top(); // Получить верхний элемент стека
    void    pop(); // Удалить верхний элемент стека

    void    print_sum(); // Сумма первых 3-х элементов
};

#endif // STACK_H
