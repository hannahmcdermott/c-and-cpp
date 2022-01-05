/* 
    CH-230-A
    a11_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main(int argc, char** argv) {
   
    /*
        Creates circle using default constructor 
        Prints name, radius, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Circle c;
    cout << endl;
    cout << c.getName() << endl;
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;
    cout << "Area: " << c.area() << endl;

    /*
        Creates circle using parametric constructor 
        Prints name, radius, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Circle c1("Circle", 1, 1, 3.33);
    cout << endl;
    cout << c1.getName() << endl;
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Perimeter: " << c1.perimeter() << endl;
    cout << "Area: " << c1.area() << endl;

    /*
        Creates circle using copy constructor 
        Prints name, radius, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Circle c2(c1);
    cout << endl;
    cout << c2.getName() << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Perimeter: " << c2.perimeter() << endl;
    cout << "Area: " << c2.area() << endl;

    /*
        Creates rectangle using default constructor 
        Prints name, width, height, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Rectangle r;
    cout << endl;
    cout << r.getName() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Height: " << r.getHeight() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Area: " << r.area() << endl;
  
    /*
        Creates rectangle using parametric constructor 
        Prints name, width, height, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Rectangle r1("Rectangle", 2, 4, 9.32, 4.71);
    cout << endl;
    cout << r1.getName() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Height: " << r1.getHeight() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;
    cout << "Area: " << r1.area() << endl;
  
    /*
        Creates rectangle using copy constructor 
        Prints name, width, height, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Rectangle r2(r1);
    cout << endl;
    cout << r2.getName() << endl;
    cout << "Width: " << r2.getWidth() << endl;
    cout << "Height: " << r2.getHeight() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl;
    cout << "Area: " << r2.area() << endl;

    /*
        Creates square using default constructor 
        Prints name, side length, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Square s;
    cout << endl;
    cout << s.getName() << endl;
    cout << "Side: " << s.getSide() << endl; 
    cout << "Perimeter: " << s.perimeter() << endl;
    cout << "Area: " << s.area() << endl;
  
    /*
        Creates square using parametric constructor 
        Prints name, side length, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Square s1("Square", 2, 2, 5.5);
    cout << endl;
    cout << s1.getName() << endl;
    cout << "Side: " << s1.getSide() << endl; 
    cout << "Perimeter: " << s1.perimeter() << endl;
    cout << "Area: " << s1.area() << endl;
    
    /*
        Creates square using copy constructor 
        Prints name, side length, area, perimeter to standard output
    */

    cout << "-----------------------------------------" << endl; 
    Square s2(s1);
    cout << endl;
    cout << s2.getName() << endl;
    cout << "Side: " << s2.getSide() << endl; 
    cout << "Perimeter: " << s2.perimeter() << endl;
    cout << "Area: " << s2.area() << endl;
    cout << endl;
    
    return 0;
}