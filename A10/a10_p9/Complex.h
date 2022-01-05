/* 
    CH-230-A
    a10_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/


class Complex {
    private: 
        float real;
        float imag;
    
    public:
        //default constructor 
        Complex();
        
        //parametric constructor
        Complex(float r, float i = 0);
        
        //copy constructor 
        Complex(const Complex&);
        
        //destructor;
        ~Complex();

        //setter and getter methods for real and imaginary parts 
        void setReal(float r);
        void setImag(float i);
        float getReal();
        float getImag();
        
        //methods for conjugation, adding, and multiplying complex #s
        Complex conjugate(Complex&);
        Complex add(Complex&);
        Complex sub(Complex&);
        Complex prod(Complex&);
    
        //service method
        void print();
};
