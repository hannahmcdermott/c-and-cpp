/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>

using namespace std;

#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
	
	// Creates an array of 25 pointers of type area 
	Area *list[25];				
	
	//initializes random number generator
	srand(static_cast <unsigned int> (time(0)));
	for (int i = 0; i < 25; i++) {
		// option will be a number between 1 and 4 
		int option = rand() % 4 + 1; 

		string colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
		// acolor will be a string from from the string array[0-3]
		string acolor = colors[rand() % 4];
		
		// initializes two sizes for setting properties of different shapes
		// these will be in between 5-100
		double size = rand() % 100 + 5;
		double size2 = rand() % 100 + 5;

		// initializes double values to store areas and perimeters of each instance
		double area;
		double perimeter;

		// uses switch to identify whether random number generated was 
		// 1, 2, 3, or 4
		// in each case the data of the instance created is printed  
		switch (option) {
			case 1: {
				cout << "\nCIRCLE\n" << endl;
				Circle c(acolor, size);
				c.getColor();
				cout << "Radius: " << size << endl;
				area = c.calcArea();
				cout << "Area: " << area << endl;
				perimeter = c.calcPerimeter();
				cout << "Perimeter: " << perimeter << "\n" << endl;
				list[i] = &c;
				cout << "--------------------------------" << endl;
				break;
			}
			case 2: {
				cout << "\nRING\n" << endl;
				//switches size and size2 to have size always greater
				if (size < size2) {
					double tempsize = size;
					size = size2;
					size2 = tempsize;
				}
				Ring r(acolor, size, size2);
				r.getColor();
				cout << "Outer radius: " << size << endl;
				cout << "Inner radius: " << size2 << endl;

				area = r.calcArea();
				cout << "Area: " << area << endl;
				perimeter = r.calcPerimeter();
				cout << "Perimeter: " << perimeter << "\n" << endl;
				list[i] = &r;
				cout << "--------------------------------" << endl;
				break;
			}
			case 3: {
				cout << "\nRECTANGLE\n" << endl;
				Rectangle re(acolor, size, size2);
				re.getColor();
				cout << "Dimensions: " << size << " x " << size2 << endl;
				area = re.calcArea();
				cout << "Area: " << area << endl;
				perimeter = re.calcPerimeter();
				cout << "Perimeter: " << perimeter << "\n" << endl;
				list[i] = &re;
				cout << "--------------------------------" << endl;
				break;
			}
			case 4: {
				cout << "\nSQUARE\n" << endl;
				Square s(acolor, size);
				s.getColor();
				cout << "Dimensions: " << size << " x " << size << endl;
				area = s.calcArea();
				cout << "Area: " << area << endl;
				perimeter = s.calcPerimeter();
				cout << "Perimeter: " << perimeter << "\n" << endl;
				list[i] = &s;
				cout << "--------------------------------" << endl;
				break;
			}	
		}
	}
	return 0;
}