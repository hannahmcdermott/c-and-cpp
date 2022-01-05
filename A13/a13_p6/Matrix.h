/* 
    CH-230-A
    a13_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _MATRIX_H
#define _MATRIX_H

#include "Vector.h"

class Vector;

class Matrix 
{
    friend class Vector;
    private:
        int row;
        int col;
        double **locatorm;
    
    public:
        Matrix();
        Matrix(int, int, double**);
        Matrix(const Matrix&);
        ~Matrix();

        void setRow(int r) {row = r;}
        void setCol(int c) {col = c;}
        void setLocatorm(double **);
        int getRow() {return row;}
        int getCol() {return col;} 
        double** getLocatorm() {return locatorm;}

        Vector operator*(const Vector&);
        friend std::ostream& operator<<(std::ostream&, const Matrix&);
        friend std::istream& operator>>(std::istream&, Matrix&);

};

#endif