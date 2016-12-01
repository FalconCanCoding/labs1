#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>

class Complex
{
    double real; // Действительная часть
    double imaginary; // Мнимая часть
public:
    Complex();
    Complex(double, double);
    Complex(const Complex&);

    Complex                 operator + (const Complex&);
    Complex                 operator * (const Complex&);

    bool                    operator == (const Complex&);
    bool                    operator != (const Complex&);
    bool                    operator > (const Complex&);
    bool                    operator < (const Complex&);
    bool                    operator >= (const Complex&);
    bool                    operator <= (const Complex&);

    const Complex&          operator = (const Complex&);

    friend std::istream&    operator >> (std::istream&, Complex&);
    friend std::ostream&    operator << (std::ostream&, const Complex&);
};

#endif // COMPLEX_H
