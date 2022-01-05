/* 
    CH-230-A
    a13_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/


class Complex {
    private: 
        float real;
        float imag;
    
    public:
        Complex() : real(0) , imag(0) {};
        Complex(float r, float i = 0) : real(r) , imag(i) {};
        Complex(const Complex& src) : real(src.real), imag(src.imag) {};
        ~Complex() {};
        void setReal(float r) {real = r;}
        void setImag(float i) {imag = i;}
        float getReal() {return real;}
        float getImag() {return imag;}
        void print();

        Complex conjugate(Complex&);
        Complex add(Complex&);
        Complex sub(Complex&);
        Complex prod(Complex&);
        
        // overloading operator +, -, *, and = 
        Complex operator+(const Complex&);
        Complex operator-(const Complex&);
        Complex operator*(const Complex&);
        Complex& operator=(Complex&);
        
        // overloading << and >> operators  
        friend std::ostream& operator<<(std::ostream&, const Complex&);
        friend std::istream& operator>>(std::istream&, Complex&);        
};
