/* 
    CH-230-A
    a13_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _VECTOR_H
#define _VECTOR_H

#include "Matrix.h"

class Matrix;

class Vector 
{
    friend class Matrix;
    private:
        // properties include the size of a vector, and pointer that holds data
        int size;
        double *locatorv;

    public:
        // constructors and destructor 
        Vector() : size(0) , locatorv(NULL) {};
        Vector(int, double*);
        Vector(const Vector&);
        ~Vector();
        // setters and getters for properties
        void setSize(int s) {size = s;}
        void setLocatorv(double*);
        int getSize() {return size;}
        double* getLocatorv() {return locatorv;} 
        // service methods for printing and calculating norm,
        // scalar product, addition, and subtraction of vectors 
        void print();
        double norm();
        double scalprod(Vector& v);
        Vector add(const Vector&) const;
        Vector subtract(const Vector&) const;
       
        // overloading * method
        Vector operator*(const Matrix&);
        friend std::ostream& operator<<(std::ostream&, const Vector&);
        friend std::istream& operator>>(std::istream&, Vector&);
};

#endif