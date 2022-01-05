/* 
    CH-230-A
    a10_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

//converts hunger level from int to double
//returns double value 
void hungerpercentage(int h) {
    h = (double) h / 10; 
}

//converts hunger level from double to int
//returns int value 
void hungerint(double h) {
    h = (int) h * 10;
}
 
Critter::Critter() { 
    name = "default_critter";
    //sets thirst to same level as hunger
    hunger = thirst = boredom = 0; 
    height = 5; 
    //prints message such that one can see when this constructor is being called
    cout << "Constructor with no parameters being called" << endl;
}

Critter::Critter(string n) { 
    name = n;
    //sets thirst to same level as hunger
    hunger = thirst = boredom = 0;
    height = 5;
    //prints message such that one can see when this constructor is being called
    cout << "Constructor with name as a parameter being called" << endl;
}

Critter::Critter(string n, int hu, int b, double h) {
    name = n;
    //sets thirst to same level as hunger
    hunger = thirst = hu;
    boredom = b;
    height = h;
    //prints message such that one can see when this constructor is being called
    cout << "Constructor with name, hunger, boredom, and height (optional) as ";
    cout << "parameters being called" << endl;
}

Critter::Critter(string n, int hu, double t, int b, double h) {
    name = n;
    hunger = hu;
    thirst = t;
    boredom = b;
    height = h;
    //prints message such that one can see when this constructor is being called
    cout << "Constructor with name, hunger, thirst, boredom, and height as ";
    cout << "parameters being called" << endl;
}

//setter methods that assign values to each property of an instance 
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

//getter methods that return the value of a property from an instance 
string Critter::getName() {
    return name;
}

int Critter::getHunger() {
	return hunger;
}

double Critter::getThirst() {
    return thirst;
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
    cout << name << "'s thirst level: " << thirst << endl;
    cout << name << "'s boredom level: " << boredom << endl;
    cout << name << "'s height: " << height << endl;
    cout << "------------------------------------";
}