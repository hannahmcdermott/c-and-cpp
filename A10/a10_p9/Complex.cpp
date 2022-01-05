/* 
    CH-230-A
    a10_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

/*
    Each constructor and the destructor prints a message to show 
    whenever it is called in the main function
*/

Complex::Complex() {
    real = imag = 0;
    cout << "---------------------------------------------------";
    cout << "--------------------->calling default constructor\n";
}

Complex::Complex(float r, float i) {
    real = r;
    imag = i;
    cout << "---------------------------------------------------";
    cout << "--------------------->calling parametric constructor\n";
}

Complex::Complex(const Complex& source) {
    real = source.real;
    imag = source.imag;
    cout << "---------------------------------------------------";
    cout << "--------------------->calling copy constructor\n";
}

Complex::~Complex() {
    cout << "---------------------------------------------------";
    cout << "--------------------->calling destructor\n";
}

//setter methods that assign values to either real or imag properties 
void Complex::setReal(float r) {
    real = r;
}

void Complex::setImag(float i) {
    imag = i;
}

//getter methods that return the value of either real or imag properties
float Complex::getReal(){
    return real;
}

float Complex::getImag(){
    return imag;
}

/* 
    conjugate, add, sub, and prod methods create temporary variables 
    tempreal and tempimag to not change original values 
*/

Complex Complex::conjugate(Complex &c) {
    float tempreal;
    float tempimag;
    tempreal = c.real;
    tempimag = -c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::add(Complex &c) {
    float tempreal;
    float tempimag;
    tempreal = real + c.real;
    tempimag = imag + c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::sub(Complex &c) {
    float tempreal;
    float tempimag;
    tempreal = real - c.real;
    tempimag = imag - c.imag;
    return Complex(tempreal, tempimag);
}

Complex Complex::prod(Complex &c) {
    float tempreal;
    float tempimag;
    tempreal = (real * c.real) - (imag * c.imag);
    tempimag =  (real * c.imag) + (imag * c.real);
    return Complex(tempreal, tempimag);
}

//service method
void Complex::print() {
	//if imag not 0 evaluates true
    if (imag) { 
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl; 
        //showpos at end to 'switch of' noshowpos
	}
}

