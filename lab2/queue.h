#ifndef QUEUE_H
#define QUEUE_H

#include "figure.h"

class Queue
{
    Figure**    f;
    int         size;
public:
    Queue();
    Queue(Figure*);
    ~Queue();

    void    put(Figure*);
    Figure* get();
    void    show_squares();
};

#endif // QUEUE_H
