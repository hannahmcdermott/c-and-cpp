/* 
    CH-230-A
    a10_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//converts hunger level from int to double 
//returns double value 
double Critter::hungerpercentage(int h) {
    return (double) h / 10; 
}

//converts hunger level from double to int
//return int value 
int Critter::hungerint(double h) {
    return (int) h * 10;
}


Critter::Critter() {
    name = "default_critter";
    hunger = boredom = 0; 
    height = 5; 
    //prints message such that one can see when this constructor is being called 
    cout << "Default constructor being called" << endl;
}

Critter::Critter(string n) { 
    name = n;
    hunger = boredom = 0;
    height = 5;
    //prints message such that one can see when this constructor is being called 
    cout << "Constructor with name as a parameter being called" << endl;
}

Critter::Critter(string n, int hu, int b, double h) {
    name = n;
    hunger = hungerpercentage(hu);
    boredom = b;
    height = h;
    //prints message such that one can see when this constructor is being called
    cout << "Constructor with name, hunger, boredom, and height (optional) as ";
    cout << "parameters being called" << endl;
}

//setter methods that assign values to each property of an instance 
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
    /*internally stores hunger as percentage 
    value that is input as int from user*/
	hunger = hungerpercentage(newhunger);
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight( double newheight) {
    height = newheight;
}

//getter methods that return the value of a property from an instance 
string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    /*returns int value of hunger that 
    is internallly stored as percentage*/
	return hungerint(hunger);
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

//service method, prints data of an instance 
void Critter::print() {
	cout << "\nCritter name: " << name << endl;
    cout << name << "'s hunger level: " << hunger << endl;
    cout << name << "'s boredom level: " << boredom << endl;
    cout << name << "'s height: " << height << endl;
    cout << "------------------------------------";
}