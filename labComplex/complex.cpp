#include "complex.h"

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double a, double b)
{
    real = a;
    imaginary = b;
}

Complex::Complex(const Complex& other)
{
    real = other.real;
    imaginary = other.imaginary;
}

Complex Complex::operator + (const Complex& other)
{
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator *(const Complex& other)
{
    return Complex(real * other.real, imaginary * other.imaginary);
}

bool Complex::operator ==(const Complex& other)
{
    if(real == other.real && imaginary == other.imaginary)
    {
        return true;
    }

    return false;
}

bool Complex::operator !=(const Complex& other)
{
    if(real != other.real && imaginary != other.imaginary)
    {
        return true;
    }

    return false;
}

bool Complex::operator > (const Complex& other)
{
    if(real > other.real && imaginary > other.imaginary)
    {
        return true;
    }

    return false;
}

bool Complex::operator < (const Complex& other)
{
    if(real < other.real && imaginary < other.imaginary)
    {
        return true;
    }

    return false;
}

bool Complex::operator >= (const Complex& other)
{
    if(real >= other.real && imaginary >= other.imaginary)
    {
        return true;
    }

    return false;
}

bool Complex::operator <=(const Complex& other)
{
    if(real <= other.real && imaginary <= other.imaginary)
    {
        return true;
    }

    return false;
}

const Complex& Complex::operator = (const Complex& other)
{
    real = other.real;
    imaginary = other.imaginary;

    return *this;
}

std::istream& operator >> (std::istream& is, Complex& number)
{
    std::cout << "Введите действительную часть: ";
    is >> number.real;

    std::cout << "Введите мнимую часть: ";
    is >> number.imaginary;

    return is;
}

std::ostream& operator << (std::ostream& os, const Complex& number)
{
    if(number.imaginary > 0)
    {
        os << number.real << " + " << number.imaginary << "i" << std::endl;
    }
    else if(number.imaginary < 0)
    {
        os << number.real << " " << number.imaginary << "i" << std::endl;
    }
    else
    {
        os << number.real << std::endl;
    }

    return os;
}
