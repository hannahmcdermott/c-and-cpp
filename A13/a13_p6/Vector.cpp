/* 
    CH-230-A
    a13_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

/*
    Implementation of default constructor, parametric constructor, 
    copy constructor, and destructor
*/

Vector::Vector(int s, double *l) {
    size = s;
    locatorv = new double[s];
    // copies every element of the double array into the vector property 
    for (int i = 0; i < s; i++) {
        locatorv[i] = l[i];
    }
}

Vector::Vector(const Vector& v) {
    size = v.size;
    locatorv = new double[size];
    for (int i = 0; i < size; i++) {
        locatorv[i] = v.locatorv[i];
    }
}

Vector::~Vector() {
    size = 0;
    delete []locatorv;
    locatorv = NULL; // to make sure code does not crash if delete were to be used twice 
}

/*
    Implementation of setter/getter methods for properties
*/

void Vector::setLocatorv(double* l) {
    if (locatorv ==  NULL) {
        locatorv = new double[size];
    }
    for (int i = 0; i < size; i++) {
        locatorv[i] = l[i];
    }    
}

/*
    Implementation of service methods including printing the vector, 
    and calculations for the norm, scalar product, addition, and subtraction
    of vectors
*/

void Vector::print() {
    for (int i = 0; i < size; i++) {
        cout << locatorv[i] << " ";
    }
}

double Vector::norm() {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += locatorv[i] * locatorv[i];

    }
    return sqrt(sum);
}

double Vector::scalprod(Vector& v) {
    double scalprod = 0;
    for (int i = 0; i < size; i++) {
        scalprod += locatorv[i] * v.locatorv[i];
    }
    return scalprod;
}

Vector Vector::add(const Vector& v) const {
    int tempsize = size;
    double *templocator;
    templocator = new double[size];
    for (int i = 0; i < tempsize; i++) {
        templocator[i] = locatorv[i] + v.locatorv[i]; 
    } 
    return Vector(tempsize, templocator);
}

Vector Vector::subtract(const Vector& v) const {
    int tempsize = size;
    double *templocator;
    templocator = new double[size];
    for (int i = 0; i < tempsize; i++) {
        templocator[i] = locatorv[i] - v.locatorv[i];
    }
    return Vector(tempsize,templocator);
}

Vector Vector::operator*(const Matrix& m) {
    int tempsize = m.col;
    double *templocator = new double[tempsize];
    
    if (this->size != m.row) {
        cout << "\nv * m not possible!\n";
    } else {
        for (int i = 0; i < m.row; i++) {
            for (int j = 0; j < m.col; j++) {
                templocator[i] += this->locatorv[j] * m.locatorm[j][i];
            }
        }
    }
    Vector res(tempsize, templocator);
    return res;
}

ostream& operator<<(ostream& out, const Vector& v) {
    for (int i = 0; i < v.size; i++) {
        out << v.locatorv[i] << " ";
    }
    return out;
}

istream& operator>>(istream& in, Vector& v) {
    in >> v.size;
    // memory allocation needed here too
    v.locatorv = new double[v.size];
    for (int i = 0; i < v.size; i++) {
        in >> v.locatorv[i];
       // in.ignore();
    }
    return in;
}