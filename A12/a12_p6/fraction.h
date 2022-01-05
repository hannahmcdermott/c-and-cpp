/* 
    CH-230-A
    a12_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						
	int num;		
	int den;			

    /*
        Internal implementation for calculating the gcd of a and b
        and the lcm of a and b 
    */
	int gcd(int a, int b);	
	int lcm(int a, int b);     

public:
	/*
        Empty constructor, constructor taking values for fractions and
        integers. Denomintor by default is 1.
    */
    Fraction();				
	Fraction(int, int = 1); 
	
    /*
        Inline setter/getter methods for properties
    */
    void setNum(int a) {num = a;}
    void setDen(int b) {den = b;}
    int getNum() {return num;}
    int getDen() {return den;}
    
    

    void print();
    
    /*
        Overloading operators * and / for computing multiplication and division of 
        fractions using member method alternative
    */
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction& operator=(Fraction&);
 
    /* 
        Overloading operators << and >> such that cout << can be used for printing 
        a fraction on the screen and cin >> can be used to enter a fraction from
        the keyboard; have to be friend function because second argument is the class 
    */
    friend std::ostream& operator<<(std::ostream& out, const Fraction&);
    friend std::istream& operator>>(std::istream& in, Fraction&);    
};
#endif /* FRACTION_H_ */