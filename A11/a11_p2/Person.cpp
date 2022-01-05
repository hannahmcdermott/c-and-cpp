/* 
    CH-230-A
    a11_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Person.h"

using namespace std;

/*
    Empty constructor, initializes properties to 'default' and 0 
*/

Person::Person() {
    name = eyecolour = "blank";
    birth = 0000;
    height = 0;
    cout << "calling default constructor" << endl;
}

/*
    Parametric constructor, initializes properties according to parameters
*/

Person::Person(const string n, int b, const string e, double h) {
    name = n; 
    birth = b;
    eyecolour = e;
    height = h;
    cout << "calling parametric constructor" << endl;
}

/*
    Copy constructor 
*/

Person::Person(const Person &source) {
    name = source.name;
    birth = source.birth;
    eyecolour = source.eyecolour;
    height = source.height;
    cout << "calling copy constructor" << endl;
}

/*
    Setter methods that assign a value to a property in an instance 
*/

void Person::setName(const string& newname){
    name = newname;
}

void Person::setBirth(int newbirth){
    birth = newbirth;
}

void Person::setEyecolour(string& newcolour){
    eyecolour = newcolour;
}

void Person::setHeight(double newheight){
    height = newheight;
}

/*
    Getter methods that return the values of specific propety of an instance 
*/

string Person::getName() const {
    return name;
}

int Person::getBirth() const {
    return birth;
}

string Person::getColour() const {
    return eyecolour;
}

double Person::getHeight() const {
    return height;
}

/*
    Service methods 
*/

void Person::print(){
    cout << name << " was born in " << birth << ", has ";
    cout << eyecolour << " eyes, and is " << height << " meters tall." << endl;
    cout << "--------------------------------------------";
    cout << "-------------------------------" << endl;
}

void Person::print2() {
    cout << "-------------------------------------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Birth year: " << birth << endl;
    cout << "Eyecolour: " << eyecolour << endl;
    cout << "Height: " << height << endl;
    cout << "-------------------------------------------------------------" << endl;
}