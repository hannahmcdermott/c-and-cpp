/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

//parametric constructor 
Circle::Circle(std::string& n, double a) : Area(n) {
	radius = a;
    std::cout << "calling circle constructor" << std::endl;
}

//empty destructor
Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calculating area of Circle...";
	return radius * radius * M_PI;
}

double Circle::calcPerimeter() const {
    std::cout << "calculating perimeter of Circle...";
    return 2 * radius * M_PI;
}
