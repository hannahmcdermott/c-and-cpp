/* 
    CH-230-A
    a10_p4.cpp 
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
        //setter methods to assign values to the properties of each instance 
        void setName(std::string& newname);
        void setAge(int newbirth);
        void setEyecolour(std::string& newcolour);
        void setHeight(double newheight);

        //getter methods to get individual values of properties of an instance 
        std::string getName();
        int getBirth();
        std::string getColour();
        double getHeight();

        //service method
        void print();

};