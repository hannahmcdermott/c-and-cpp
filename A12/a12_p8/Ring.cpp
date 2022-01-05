/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"

//parametric constructor 
Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
	std::cout << "Ring constructor being called...";
}

//empty destructor
Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
	std::cout << "calcPerimeter of Ring...";
	return (Circle::calcPerimeter() + (2 * innerradius * M_PI)); 
}
