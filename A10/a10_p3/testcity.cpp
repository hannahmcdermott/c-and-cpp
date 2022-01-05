/* 
    CH-230-A
    a10_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
    //creates three instances 
    City Bremen, Paris, London;

    //declares variables for each property of each instance
    string cityname1, cityname2, cityname3;
    float population1, population2, population3;
    string mayor1, mayor2, mayor3;
    float area1, area2, area3;
    
    //Instance: Bremen 
    cityname1 = "Bremen";
    Bremen.setCityname(cityname1);
    
    population1 = 547976;
    Bremen.setInhabitants(population1);  

    mayor1 = "Andreas Bovenschulte";
    Bremen.setMayor(mayor1);

    area1 = 326.7; //km^2
    Bremen.setArea(area1);
    
    //Instance: Paris 
    cityname2 = "Paris";
    Paris.setCityname(cityname2);

    population2 = 2141000;
    Paris.setInhabitants(population2);

    mayor2 = "Anne Hidalgo";
    Paris.setMayor(mayor2);

    area2 = 105.4; //km^2
    Paris.setArea(area2);

    //Instance: London 
    cityname3 = "London";
    London.setCityname(cityname3);

    population3 = 8900000;
    London.setInhabitants(population3);

    mayor3 = "Sadiq Khan";
    London.setMayor(mayor3);

    area3 = 1572; //km^2
    London.setArea(area3);

    //prints information to standard output 
    cout << endl;
    Bremen.print();
    Paris.print();
    London.print();

    return 0;

}