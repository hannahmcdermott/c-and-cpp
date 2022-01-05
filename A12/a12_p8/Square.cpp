/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Square.h"

//parametric constructor 
Square::Square(const char *n, double nside) : Rectangle(n, nside, nside) {
    side = nside;
    std::cout << "Square constructor being called...";
}

//empty destructor
Square::~Square() {
}

double Square::calcArea() const {
    std::cout << "calcArea of Square...";
	return side * side;
}

double Square::calcPerimeter() const {
    std::cout << "calcPerimeter of Square...";
    return 4 * side;
}