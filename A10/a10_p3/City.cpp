/* 
    CH-230-A
    a10_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "City.h"

using namespace std;

//setter methods to assign values to properties of an instance 
void City::setCityname(string& newcity){
    cityname = newcity;
}

void City::setInhabitants(float population){
    inhabitants = population;
}

void City::setMayor(string& currentmayor){
    mayor = currentmayor;
}

void City::setArea(float currentarea){
    area = currentarea;
}

//getter methods to get value of a property of an instance 
string City::getcityname(){
    return cityname;
}

float City::getInhabitants(){
    return inhabitants;
}

string City::getmayor(){
    return mayor;
}

float City::getArea(){
    return area;
}

//service method
void City::print(){
    cout << cityname << " has the following information:" << endl;
    cout << "Number of inhabitants: " << inhabitants << endl;
    cout << "Current mayor: " << mayor << endl;
    cout << "Area: " << area << " km^2\n" << endl;
}
