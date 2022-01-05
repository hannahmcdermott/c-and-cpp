/* 
    CH-230-A
    a12_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

using namespace std;

/*
    Implementation of internal methods: GCD and LCM 
*/
int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
    
    // sets a to be the greater value 
    if ( b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    /* 
        for loop for checking what number from 1 - b 
        is the greatest common denominator; value is 
        stored in tmp_gcd every iteration of the loop
        if the 'if' statement is true
    */
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            tmp_gcd = i; 
        }
    }
	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

/*
    Empty and parametric constructor definitions, NOTE* both
    print out messages of when they are being called 
*/
Fraction::Fraction()
{
	num = 1;
	den = 1;
    cout << "(using default constructor for this instance)" << endl;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
    cout << "(using parametric constructor for this instance)" << endl;
}

/*
    Overloaded * operator: member method definition 
*/
Fraction Fraction::operator*(const Fraction& f) {
    Fraction res(this->num * f.num, this->den * f.den);
    return res;
}

/*
    Overloaded / operator: member method definition
*/
Fraction Fraction::operator/(const Fraction& f) {
    Fraction res(this->num * f.den, this->den * f.num);
    return res;
}

/*
    Overloaded = operator
*/
Fraction& Fraction::operator=(Fraction &f) {
    this->num = f.num;
    this->den = f.den;
    return *this;
}

void Fraction::print()
{
    // uses overloaded << operator to return current instance 
	cout << *this;
}

/*
    Overloaded << operator: friend function definition
*/
ostream& operator <<(ostream& out, const Fraction &f) {
    out << f.num << "/" << f.den << endl;
    return out;
}

/*
    Overloaded >> operator: friend function definition 
*/
istream& operator >>(istream& in, Fraction &f) {
    in >> f.num;
    in >> f.den; 
    return in;
}