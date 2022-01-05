/* 
    CH-230-A
    a11_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main() 
{
    /* 
        User inputs data for first vector 
    */

    int s;
    cout << "Enter the size of your vector!" << endl;
    cin >> s;
    double *l;
    l = new double[s]; 
    cout << "Enter the vector components:" << endl;
    for (int i = 0; i < s; i++) {
        cin >> l[i];
    }

    /*
        creates first instance of Vector using parametric constructor
    */  

    Vector v1(s, l); 
    
    /*
        Creates second instance of Vector by using copy constructor;
        v2 is a copy of v1 
    */ 

    Vector v2(v1);
    
    /*
        Creates third instance of vector using default constructor, 
        then asks user to input data for vector, and sets values of v3 by
        using setter methods 
    */ 

    Vector v3;
    int s2; 
    cout << "Enter the size of your vector!" << endl;
    cin >> s2;
    v3.setSize(s2);
    
    double *l2;
    l2 = new double[s2];
    cout << "Enter the vector components:" << endl;
    for (int i = 0; i < s2; i++) {
        cin >> l2[i];
    }
    v3.setLocator(l2);

    /*
        Prints each vector to standard output 
    */
   
    cout << endl;
    cout << "VECTOR ONE:   ";
    v1.print();
    cout << endl;
    cout << "VECTOR TWO:   ";
    v2.print();
    cout << endl;
    cout << "VECTOR THREE: "; 
    v3.print();
    cout << endl;

    /*
        Declares and initilizes variables for the norm, scalar product,
        addition of vectors, and subtraction of vectors  
    */

    double norm = v1.norm();
    double sp = v1.scalprod(v3);
    Vector vsum = v1.add(v3);
    Vector vdiff = v1.subtract(v3);
    
    /*
        Prints results to standard output 
    */

    cout << endl;
    cout << "The norm of your first vector is: " << norm << endl;
    cout << "Summing your vectors gives this vector: "; 
    vsum.print();
    cout << endl;
    cout << "Subtracting your second vector from your first gives this vector: ";
    vdiff.print();
    cout << endl;
    cout << "The scalar product of your vectors is: " << sp << endl;

    return 0; 
}