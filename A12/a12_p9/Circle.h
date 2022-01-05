/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	private:
		double radius;
	public:
		Circle(std::string& n, double a);
		~Circle();
		double calcArea() const;
		double calcPerimeter() const;
};

#endif
