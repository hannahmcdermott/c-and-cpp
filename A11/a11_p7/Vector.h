/* 
    CH-230-A
    a11_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

class Vector 
{
    private:
        // properties include the size of a vector, and pointer that holds data
        int size;
        double *locator;

    public:
        // constructors and destructor 
        Vector();
        Vector(int, double*);
        Vector(const Vector&);
        ~Vector();
        // setters and getters for properties
        void setSize(int);
        void setLocator(double*);
        int getSize();
        double* getLocator(); 
        // service methods for printing and calculating norm,
        // scalar product, addition, and subtraction of vectors 
        void print();
        double norm();
        double scalprod(Vector& v);
        Vector add(const Vector&) const;
        Vector subtract(const Vector&) const;
};