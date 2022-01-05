/* 
    CH-230-A
    a10_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string>

class City
{
//data memebers are private
private:
    std::string cityname;
    float inhabitants;
    std::string mayor;
    float area;

public:
    //setter methods to assign values to properties in an instance
    void setCityname(std:: string& newcity);
    void setInhabitants(float population);
    void setMayor(std:: string& currentmayor);
    void setArea(float currentarea);
       
    //getter methods to get values of properties in an instance 
    std::string getcityname();
    float getInhabitants();
    std::string getmayor();       
    float getArea();
        
    //service method
    void print();

};