/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Square.h"

//parametric constructor 
Square::Square(std::string& n, double nside) : Rectangle(n, nside, nside) {
    side = nside;
    std::cout << "calling square constructor" << std::endl;
}

//empty destructor
Square::~Square() {
}

double Square::calcArea() const {
    std::cout << "calculating area of Square...";
	return side * side;
}

double Square::calcPerimeter() const {
    std::cout << "calculating perimeter of Square...";
    return 4 * side;
}