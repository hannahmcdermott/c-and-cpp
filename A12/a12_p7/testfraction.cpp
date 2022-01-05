/* 
    CH-230-A
    a12_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    /*
        \e[1m -> escape code for turning bold effect on
        \e[0m -> escape code for turning bold effect off
    */
    cout << "\n\e[1mLets work with fractions!\e[0m" << endl;
    cout << "Input the numerator\e[0m and denominator\e[0m:" << endl;
    
    Fraction a;
    cin >> a; // uses overloaded >> operator
    
    cout << "\nInput the numerator and denominator:" << endl;
    Fraction b;
    cin >> b;

    // uses overloaded << operator
    cout << "\n---------------------" << endl;
    cout << "Your fractions are: " << endl;
    cout << a << b;
    cout << "---------------------\n" << endl;

    cout << "\nComputing..." << endl;
    cout << "......\n";
    cout << ".....\n";
    cout << "....\n";
    cout << "...\n";
    cout << "..\n\n";

    // uses overloaded =, *, /, +, - operators 
    // prints data 
    Fraction c = a * b;
    cout << "Product: " << c << endl; 
    Fraction d = a / b;
    cout << "Quotient (a/b): " << d << endl;
    Fraction e = b / a; 
    cout << "Quotient (b/a): " << e << endl;
    Fraction f = a + b;
    cout << "Sum: " << f << endl;
    Fraction g = a - b;
    cout << "Difference: " << g << endl;
    
    // uses overloaded <, > operators to compare fractions
    // prints message according to result 
    cout << "Which fraction was greater?" << endl;
    if (a<b) {
        cout << b << " is greater than\n" << a << endl;
    }

    else if (a>b) {
        cout << a << "is greater than\n" << b << endl;
    }

    return 0;
}