/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

//parametric constructor 
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
    std::cout << "Rectangle constructor being called...";
}

//empty destructor
Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const {
    std::cout << "calcPerimeter of Rectangle...";
    return (2 * length) + (2 * width); 
}
