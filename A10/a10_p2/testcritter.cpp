/* 
    CH-230-A
    a10_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;
	string feeling;
	int percentage;
 
	cout << endl << "Please enter data: " << endl;
	
	cout << "Name: ";
	//uses getline in case name contains spaces 
	getline(cin, name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "How you feeling? ";
	//just in case user's input contains spaces 
	getchar();
	getline(cin, feeling);
	c.setFeeling(feeling);

	cout << "How much percentage-wise?"; 
	cin >> percentage;
	c.setPercentage(percentage);


	cout << "You have created:" << endl;
	c.print(); 

    return 0;
}