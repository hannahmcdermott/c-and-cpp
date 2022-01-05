/* 
    CH-230-A
    a10_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main() {
   
    cout << endl;
    //declares variables for user input for properties
    int r1, i1, r2, i2;
    cout << "create a complex number!" << endl;
    cout << "enter the 'real' part: ";
    cin >> r1;
    cout << "enter the 'imaginary' part: ";
    cin >> i1; 

    //uses default constructor 
    Complex c1 = Complex();
    c1.setReal(r1);
    c1.setImag(i1);
    cout << "------------------------------------------------------------------------" << endl;
    cout << "             c r e a t i n g   c o m p l e x   n u m b e r             " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "complex #: ";
    c1.print();

    cout << endl;
    cout << "create another one!" << endl;
    cout << "enter the 'real' part: ";
    cin >> r2;
    cout << "enter the 'imaginary' part: ";
    cin >> i2;

    //uses parametric constructor 
    Complex c2(r2, i2);
    cout << "------------------------------------------------------------------------" << endl;
    cout << "             c r e a t i n g   c o m p l e x   n u m b e r             " << endl;
    cout << "------------------------------------------------------------------------" << endl;
    
    cout << "complex #: ";
    c2.print();

    cout << "------------------------------------------------------------------------" << endl;
    cout << "                         c a l c u l a t i o n s                        " << endl;
    cout << "------------------------------------------------------------------------" << endl;

    //creates 'conj' instance of complex 
    Complex conj = c1.conjugate(c1);
    cout << "conjugate: ";
    conj.print();

    //creates 'sum' instance of complex
    Complex sum = c1.add(c2);
    cout << "sum = ";
    sum.print();

    //creates 'diff' instance of complex
    Complex diff = c2.sub(c1);
    cout << "difference = ";
    diff.print();

    //creates 'mult' instance of complex
    Complex mult = c1.prod(c2);
    cout << "product = "; 
    mult.print();

    //will call destructor six times

    return 0; 
}



