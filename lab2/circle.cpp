#include "circle.h"

#include <iostream>
#include <math.h>

Circle::Circle()
{
    r = 0;
}

Circle::Circle(double _r)
{
    r = _r;
}

Circle::~Circle()
{}

double Circle::GetSquare()
{
    return 2*M_PI*r; // M_PI - число пи
}

void Circle::PrintName()
{
    std::cout << "Circle!" << std::endl;
}
