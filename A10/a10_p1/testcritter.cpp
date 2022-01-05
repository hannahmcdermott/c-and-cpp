/* 
    CH-230-A
    a10_p1.cpp 
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
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);

    //a method is used with the instance of the class '.' and the method
    //c.setName(name)
	c.setName(name);
    //Wrond = Critter.setName(name)

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print(); 
    cout << c.getHunger() << endl;
        return 0;
}