#include <iostream>

#include "queue.h"

Queue::Queue()
{
    f = nullptr;
    size = 0;
}

Queue::Queue(Figure* _f)
{
    f = new Figure*;
    f[0] = _f;
    size = 1;
}

Queue::~Queue()
{
    delete[] f;
}

void Queue::put(Figure* _f)
{
    Figure** temp = new Figure*[size+1];
    for(int i = 0; i < size; i++)
    {
        temp[i] = f[i];
    }
    temp[size] = _f;

    size++;

    delete[] f;
    f = temp;

    temp = nullptr;
}

Figure* Queue::get()
{
    return f[0];
}

void Queue::show_squares()
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += f[i]->GetSquare();
    }

    std::cout << "Sum figures squares = " << sum  << std::endl;
}


