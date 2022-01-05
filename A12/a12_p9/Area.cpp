/* 
    CH-230-A
    a12_p9.cpp 
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
Area::Area(string& n) {
    color = n;
    std::cout << "calling area constructor " << std::endl;
}

void Area::getColor() const {
	cout << "\nColor: " << color << endl;
}
