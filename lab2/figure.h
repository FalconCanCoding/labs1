#ifndef FIGURE_H
#define FIGURE_H

class Figure
{
public:
    Figure();
    virtual ~Figure();

    virtual double          GetSquare();
    virtual void            PrintName();
};

#endif // FIGURE_H
