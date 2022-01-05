/* 
    CH-230-A
    a13_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

/* 
    conjugate, add, sub, and prod methods create temporary variables 
    tempreal and tempimag to not change original values 
*/
Complex Complex::conjugate(Complex &c) {
    float tempreal = c.real;
    float tempimag = -c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::add(Complex &c) {
    float tempreal = real + c.real;
    float tempimag = imag  + c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::sub(Complex &c) {
    float tempreal = real - c.real;
    float tempimag = imag - c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::prod(Complex &c) {
    float tempreal = (real * c.real) - (imag * c.imag);
    float tempimag =  (real * c.imag) + (imag * c.real);
    return Complex(tempreal, tempimag);
}

// overloading operators 
Complex Complex::operator+(const Complex& c) {
    Complex res(this->real + c.real, this->imag + c.imag);
    return res;
}

Complex Complex::operator-(const Complex& c) {
    Complex res(this->real - c.real, this->imag - c.imag);
    return res;
}

Complex Complex::operator*(const Complex& c) {
    float tempreal = (this->real * c.real) - (imag * c.imag);
    float tempimag = (this->real * c.imag) - (imag * c.real);
    Complex res(tempreal, tempimag);
    return res; 
}

Complex& Complex::operator=(Complex& c) {
    this->real = c.real;
    this->imag = c.imag;
    return *this;    
}

//service method
void Complex::print() {
    cout << *this;
}

// overloading operators << and >> 
ostream& operator<<(ostream& out, const Complex& c) {
    if (c.imag) {
        out << noshowpos << c.real << showpos << c.imag << "i";
    } else {
        out << noshowpos << c.real << showpos;
    }
    return out;
}

istream& operator>>(istream& in, Complex& c) {
    char sign;
    in >> c.real; 
    // skips whitespace
    in.ignore();
    // considers whether complex number is a - bi
    in >> sign;
    // skips next whitespace
    in.ignore();
    // read float 
    in >> c.imag;
    if (sign == '-') {
        c.imag = -c.imag;
    }
    return in;
}


