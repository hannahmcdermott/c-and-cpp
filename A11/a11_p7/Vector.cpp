/* 
    CH-230-A
    a11_p7.cpp 
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

Vector::Vector() {
    size = 0;
    locator = NULL;
}

Vector::Vector(int s, double *l) {
    size = s;
    locator = new double[s];
    // copies every element of the double array into the vector property 
    for (int i = 0; i < s; i++) {
        locator[i] = l[i];
    }
}

Vector::Vector(const Vector& source) {
    size = source.size;
    locator = new double[source.size];
    for (int i = 0; i < source.size; i++) {
        locator[i] = source.locator[i];
    }
}

Vector::~Vector() {
    size = 0;
    delete []locator;
    locator = NULL; // to make sure code does not crash if delete were to be used twice 
}

/*
    Implementation of setter/getter methods for properties
*/

void Vector::setSize(int s) {
    size = s;
}

void Vector::setLocator(double* l) {
    if (locator ==  NULL) {
        locator = new double[size];
    }
    for (int i = 0; i < size; i++) {
        locator[i] = l[i];
    }    
}

int Vector::getSize() {
    return size;
}

double* Vector::getLocator() {
    return locator;
}

/*
    Implementation of service methods including printing the vector, 
    and calculations for the norm, scalar product, addition, and subtraction
    of vectors
*/

void Vector::print() {
    for (int i = 0; i < size; i++) {
        cout << locator[i] << " ";
    }
}

double Vector::norm() {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += locator[i] * locator [i];

    }
    return sqrt(sum);
}

double Vector::scalprod(Vector& v) {
    double scalprod = 0;
    for (int i = 0; i < size; i++) {
        scalprod += locator[i] * v.locator[i];
    }
    return scalprod;
}

Vector Vector::add(const Vector& v) const {
    int tempsize = size;
    double *templocator;
    templocator = new double[size];
    for (int i = 0; i < tempsize; i++) {
        templocator[i] = locator[i] + v.locator[i]; 
    } 
    return Vector(tempsize, templocator);
}

Vector Vector::subtract(const Vector& v) const {
    int tempsize = size;
    double *templocator;
    templocator = new double[size];
    for (int i = 0; i < tempsize; i++) {
        templocator[i] = locator[i] - v.locator[i];
    }
    return Vector(tempsize,templocator);
}
