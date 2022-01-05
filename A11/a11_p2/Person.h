/* 
    CH-230-A
    a11_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string>

class Person
{
    private:
        std::string name;
        int birth;
        std::string eyecolour;
        double height;
    
    public:
    
        /*
            Definitions of default constructor, parametric constructor, and copy 
            constructor
        */

        Person();
        Person(const std::string, int, const std::string, double); 
        Person(const Person&);


        /* 
            Setter methods to assign values to the properties of each instance 
        */

        void setName(const std::string& newname);
        void setBirth(int newbirth);
        void setEyecolour(std::string& newcolour);
        void setHeight(double newheight);

        /*
            Getter methods to get individual values of properties of an instance 
        */

        std::string getName() const;
        int getBirth() const;
        std::string getColour() const;
        double getHeight() const;

        /*
            service method
        */

        void print();
        void print2();

};