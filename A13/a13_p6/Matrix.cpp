/* 
    CH-230-A
    a13_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Matrix.h"

using namespace std;

Matrix::Matrix() {
    row = 0;
    col = 0;
    locatorm = nullptr;
}

Matrix::Matrix(int r, int c, double **l) {
    row = r;
    col = c;
    // dynamic allocation for matrix 
    locatorm = new double*[row];
    for (int i = 0; i < row; i++) {
        locatorm[i] = new double[col];
    }
    // copies every element of l into matrix property 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            locatorm[i][j] = l[i][j];
        }
    }
}

Matrix::Matrix(const Matrix &m) {
    row = m.row;
    col = m.col;
    // dynamic allocation for matrix copy
    locatorm = new double*[row];
    for (int i = 0; i < row; i++) {
        locatorm[i] = new double[col];
    }
    // copies every element of m into matrix copy 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            locatorm[i][j] = m.locatorm[i][j];
        }
    }
}

Matrix::~Matrix() {
    // deletes each pointer element
    for (int i = 0; i < row; i++) {
        delete[] locatorm[i];
    }
    // deletes array of pointers 
    delete[] locatorm;
}

void Matrix::setLocatorm(double **l){
    // checks if memory has already been allocated
    if (locatorm == nullptr) {
        locatorm = new double*[row];
        for (int i = 0; i < row; i++){
            locatorm[i] = new double[col];
        } 
    }
    // sets all values of matrix l to matrix property locatorm
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            locatorm[i][j] = l[i][j];
        }
    }
}

Vector Matrix::operator*(const Vector& v) {
    int tempsize = v.size;
    double *templocator = new double[tempsize];
    if (this->col != 1) {
        cout << "\nm * v not possible!\n";
    } else {
        for (int i = 0; i < this->row; i++) {
            for (int j = 0; j < this->col; j++) {
                templocator[i] = this->locatorm[i][j] * v.locatorv[j];
            }
        }
    } 
    Vector res(tempsize, templocator);
    return res;  
}

ostream& operator<<(ostream& out, const Matrix& m) {
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            out << m.locatorm[i][j] << " ";
        }
        out << endl;
    }
    return out;
}   

istream& operator>>(istream& in, Matrix& m) {
    in >> m.row;
    in >> m.col;
    m.locatorm = new double*[m.row];
    for (int i = 0; i < m.row; i++) {
        m.locatorm[i] = new double[m.col];
    }
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++ ) {
            in >> m.locatorm[i][j];
            //in.ignore();
        }
    }
    return in;
}