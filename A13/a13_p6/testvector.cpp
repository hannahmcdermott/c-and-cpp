/* 
    CH-230-A
    a13_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

int main() 
{
    /* 
        User inputs data for vector and matrix
    */

    cout << "Create a vector like this:\n";
    cout << "1. Input the size\n2. Input each component followed by enter\n";
    Vector v;
    cin >> v;
    
    cout << "Create a matrix like this:\n";
    cout << "1. Input the number of rows\n2. Input the number of columns\n";
    cout << "3. Input each component followed by a enter\n";
    
    Matrix m;
    cin >> m;

    cout << "\nThis is your vector:\n";
    cout << v;
    cout << "\n\nThis is your matrix:\n";
    cout << m;
   
    cout << "\nComputing v * m multiplication...\n";
    Vector res = v * m;

    cout << "\nResult is:\n";
    cout << res;
    
    Vector v2;
    Matrix m2;

    ifstream in1("in1.txt");
    if (!in1.good()) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }
    in1 >> v2; 

    ifstream in2("in2.txt");
    if (!in2.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }
    in2 >> m2;

    cout << "\n\nThis is the vector read from file in1.txt:\n";
    cout << v2;
    cout << "\n\nThis is the vector read from file in2.txt:\n";
    cout << m2;

    cout << "\nComputing v * m multiplication...\n";
    Vector res2 = v2 * m2;

    ofstream out1("out1.txt");
    if (!out1.good()) {
        cerr << "Error creating output file out1.txt\n" << endl;
        exit(3);
    }

    out1 << res2;
    cout << "\nComputing m * v multiplication...\n";
    Vector res3 = m2 * v2;

    ofstream out2("out2.txt");
    if (!out2.good()) {
        cerr << "Error creating ouput file out2.txt\n";
    }

    out2 << res3;

    cout << "\nYou can also find these results in files out1.txt and out2.txt!" << endl;

    in1.close();
    in2.close();
    out1.close();
    out2.close();

    return 0; 
}