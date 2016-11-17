#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure
{
    double r;
public:
    Circle();
    Circle(double);
    ~Circle();

    double  GetSquare();
    void    PrintName();
};

#endif // CIRCLE_H
