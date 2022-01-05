/* 
    CH-230-A
    a10_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;
//setters are usually void functions, they assign values given in 
//parameter to the data types in the class
void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

void Critter::setFeeling(string& newfeeling) {
    feeling = newfeeling;
}

void Critter::setPercentage(int newpercentage) {
    percentage = newpercentage;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger;
    cout << " and I am " << percentage << " percent " << feeling << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

int Critter::getPercentage() {
    return percentage;
}