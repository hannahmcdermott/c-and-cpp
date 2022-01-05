/* 
    CH-230-A
    a10_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	cout << endl;
	//creates first instance of Critter using default constructor 
	Critter one = Critter();
	//sets instance one's hunger to 2 
	one.setHunger(2);

	/*creates second instance of Critter using constructor 
	with name parameter*/
	Critter two = Critter("Bandit");
	//sets instance two's hunger to 2
	two.setHunger(2);
	
	/*creates third instance of Critter using constructor 
	with name, hunger, boredom, and height parameters*/
	Critter three = Critter("Gizmo", 2, 20, 3);

	/*creates fourth instance of Critter using name, hunger, and boredom as 
	parameters; height defaults to ten*/
	Critter four = Critter("Daisy", 2, 1);

	//prints data to standard output
	cout << "\nThe following were created:\n" << endl;
	one.print(); 
	two.print();
	three.print();
	four.print();
	cout << endl;

    return 0;
}