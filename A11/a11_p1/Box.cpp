/* 
    CH-230-A
    a11_p1.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

//default constructor initializes properties to zero
Box::Box() {
    height = width = depth = 0;
}

/*parametric constructor initializes properties according 
to values in parameters*/
Box::Box(double h, double w, double d) {
    height = h;
    width = w;
    depth = d;
}

//copy constructor 
Box::Box(const Box& source) {
    height = source.height;
    width = source.width;
    depth = source.depth;
}

//destructor has no arguments
Box::~Box() {}

//setter methods to assign values to specific properties 
void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}
//getter methods to get individual values of properties
double Box::getHeight() const {
    return height;
}

double Box::getWidth() const {
    return width;
}

double Box::getDepth() const {
    return depth;
}

double Box::calcVolume() const {
    return height * width * depth; 
}

//prints data of a box 
void Box::print() {
    cout << "Height: " << height << endl;
    cout << "Width:  " << width << endl;
    cout << "Depth:  " << depth << endl;
}

