/* 
    CH-230-A
    a10_p1.cpp 
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

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}