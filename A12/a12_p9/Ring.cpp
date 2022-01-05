/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"

//parametric constructor 
Ring::Ring(std::string& n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
	std::cout << "calling ring constructor" << std::endl;
}

//empty destructor
Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calculating area of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
	std::cout << "calculating perimeter of Ring...";
	return (Circle::calcPerimeter() + (2 * innerradius * M_PI)); 
}
