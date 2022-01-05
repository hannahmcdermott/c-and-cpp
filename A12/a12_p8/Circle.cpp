/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

//parametric constructor 
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
    std::cout << "Circle constructor being called...";
}

//empty destructor
Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
    std::cout << "calcPerimeter of Circle...";
    return 2 * radius * M_PI;
}
