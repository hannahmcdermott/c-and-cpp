/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

//empty destructor 
Area::~Area() {
}

//parametric constructor 
Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...";
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}
