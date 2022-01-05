/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
    private:
        double side;

    public:
        Square();
        Square(const char*, double);
        ~Square();
        double calcArea() const;
        double calcPerimeter() const;
};

#endif