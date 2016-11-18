#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

/* Клас "Круг" наследуется от класса "Фигура"
 *
 * P.S. Наследование означает то, что класс-потомок("Круг") берет в себя
 * все, что есть в класса-предке("Фигуре") и добавляет что-то ещё(то, что
 * есть внутри этого класса)
 */

class Circle : public Figure
{
    double r;
public:
    Circle();
    Circle(double); // Конструктор с параметрами

    ~Circle();

    double  GetSquare();
    void    PrintName();
};

#endif // CIRCLE_H
