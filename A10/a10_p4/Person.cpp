/* 
    CH-230-A
    a10_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Person.h"

using namespace std;

//setter methods that assign a value to a property in an instance 
void Person::setName(string& newname){
    name = newname;
}

void Person::setAge(int newbirth){
    birth = newbirth;
}

void Person::setEyecolour(string& newcolour){
    eyecolour = newcolour;
}

void Person::setHeight(double newheight){
    height = newheight;
}

//setter methods that return the values of specific propety 
//of an instance 
string Person::getName(){
    return name;
}

int Person::getBirth(){
    return birth;
}

string Person::getColour(){
    return eyecolour;
}

double Person::getHeight(){
    return height;
}

//service method
void Person::print(){
    cout << name << " was born in " << birth << ", has ";
    cout << eyecolour << " eyes, and is " << height << " meters tall." << endl;
}





