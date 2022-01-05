/* 
    CH-230-A
    a13_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv) {
    Complex a, b;

    cout << "\nReading from files...\n" << endl;
    
    // opens first file 
    ifstream in1("in1.txt");
    if (!in1.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }
    
    cout << "These are the numbers we are working with: ";
    // uses overloaded operator >> to read comple number 
    in1 >> a;
    cout << a; 

    // opens second file 
    ifstream in2("in2.txt");
    if (!in2.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }

    // uses overloaded operator >> to read comple number
    in2 >> b;
    cout << " , " << b << "\n" << endl;

    // creates file output.txt 
    ofstream out("output.txt");
    if (!out.good()) {
        cerr << "Error creating output file" << endl;
        exit(3);
    }

    // calculate sum, diff, product of a b using overloaded operators 
    Complex c = a + b;
    Complex d = a - b;
    Complex e = a * b;

    // prints them to the standard output 
    cout << "Calculating sum... ";
    cout << a << " + " << b << " = " << c << endl;
    cout << "\nCalculating difference... ";
    cout << a << " - " << b << " = " << d << endl;
    cout << "\nCalculating product... ";
    cout << a << " * " << b << " = " << e << endl;

    // sends results to file output.txt
    cout << "\nThese calculations can be found in output.txt\n" << endl;
    out << a << " + " << b << " = " << c << endl;
    out << a << " - " << b << " = " << d << endl;
    out << a << " * " << b << " = " << e << endl;

    // closes files 
    in1.close();
    in2.close();
    out.close();

    return 0; 
}

/*
    in1.txt looks like this:        in1.txt looks like this:

    10.5 + 0.5 i                    6.04 - 0.9 i
    11.3 - 2.3 i                    0.99 + 0.9 i 
    1.3 + 0.4 i                     23.4 - 13 i
    22.3 + 0.1 i                    5.06 - 0.2 i
*/