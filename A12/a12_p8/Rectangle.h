/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	private:
		double length;
		double width;
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle();
		double calcArea() const;
		double calcPerimeter() const;
};

#endif
