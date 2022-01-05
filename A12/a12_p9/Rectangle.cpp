/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

//parametric constructor 
Rectangle::Rectangle(std::string& n, double a, double b) : Area(n) {
    length = a;
    width = b;
    std::cout << "calling rectangle constructor" << std::endl;
}

//empty destructor
Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calculating area of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const {
    std::cout << "calculating perimeter of Rectangle...";
    return (2 * length) + (2 * width); 
}
