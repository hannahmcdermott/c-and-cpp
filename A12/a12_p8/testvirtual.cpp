/* 
    CH-230-A
    a12_p8.cpp 
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


const int num_obj = 7;
int main() {
	/*
		(1) Creates an array of 7 pointers of type area (initially 6 but added Square)
	*/
	Area *list[num_obj];
	/*
		(2) Declares and initializes an index variable; set to 0. 
	*/						
	int index = 0;		
	/*
		(3) Declares and initializes a variable for the sum of the 
		areas; set to 0.
	*/						
	double sum_area = 0.0;	
	
	/*
		(4) Creates 2 instances of Ring, 2 instances of Circle, 
		2 instances of Rectangle, and 1 instance of Square
	*/				
	cout << "\nCreating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				
	cout << "\nCreating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "\nCreating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "\nCreating Circle: ";
	Circle red_circle("RED", 8);
	cout << "\nCreating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "\nCreating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "\nCreating Square: ";
	// creates square instance
	Square white_square("WHITE", 15);

	/* 
		(5) Makes each pointer of the array of pointers declared at
		the beginning point to each of the seven instances created   
	*/	
	list[0] = &blue_ring;						
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	// makes pointer list[6] point to white_square;
	list[6] = &white_square;

	/*
		(6) Index is set to zero therefore while loop reads 
		'while (0 < 7)'. The body of the loop calls the 
		method getColor() which prints the instance's color and :
	*/
	cout << endl;
	while (index < num_obj) {					
		(list[index])->getColor();	
		/*
			(7) Declares a new variable, double area, to store 
			the value of the area of list[0], then list[1], then 
			list[2]... until list[6]. The areas are then added to
			the sum_area variable in each loop. 
		*/			
		double area = list[index++]->calcArea();
		sum_area += area;
	}

	/*
		(8) Prints out the total area of all the instances created:
		the 2 cirlces, 2 rectangles, 2 rings, and 1 square
	*/
	cout << "\nThe total area is " << sum_area << " units " << endl;	
	
	// sets index to zero once again 
	index = 0;

	// declares and initializes sum_perimeter to store sum of perimeters
	double sum_perimeter = 0;

	// while loop read 'while (0 < 7)' 
	while (index < num_obj) {
		(list[index]->getColor());
		// has to be list[index++] so while loop terminates
		double perimeter = list[index++]->calcPerimeter();
		sum_perimeter += perimeter;
	}
	cout << "\nThe total perimeter is " << sum_perimeter << "\n" << endl;
	return 0;
}


/*			 DIAGRAM OF CLASSES 

				    Area
					/ \
				   /   \
				  /     \
			Circle     Rectangle 
				/         \
			   /           \
			  /             \
			Ring           Square 
*/
