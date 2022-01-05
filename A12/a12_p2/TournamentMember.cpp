/* 
    CH-230-A
    a12_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

/*
    Definitions of static data members are included here. Location 
    not specified so is left blank. 
*/

std::string TournamentMember::location = "";

void TournamentMember::changelocation(std::string &newlocation) {
    location = newlocation;
}

/*  
    All constructos and destructor print a message when they are 
    being called from the main function. Also, to "assign" a character
    array to another function strcpy is used. Alternative method could 
    have been for loop and assign character per character. 
*/

TournamentMember::TournamentMember() {
    strcpy(name, "blank");
    strcpy(lastname, "blank");
    strcpy(DoB, "0000-00-00");
    strcpy(isfrom, "blank");
    times = 0;
    cout << "default constructor being called" << endl;
}

TournamentMember::TournamentMember(const char *n, const char *l, const char *d, 
    const char *i, int t) {
    strcpy(name, n); 
    strcpy(lastname, l);
    strcpy(DoB, d);
    strcpy(isfrom, i);
    times = t;
    cout << "parametric constructor being called" << endl;
} 

TournamentMember::TournamentMember(const TournamentMember& source) {
    strcpy(name, source.name);
    strcpy(lastname, source.lastname);
    strcpy(DoB, source.DoB);
    strcpy(isfrom, source.isfrom);
    times = source.times;
    cout << "copy constructor being called" << endl;
}

TournamentMember::~TournamentMember() {
    cout << "destructor being called" << endl;
}

/*
    Setter definitions not included here as they were already defined 
    in TournamentMember.h file  
*/

const char* TournamentMember::getName() const {
    return name;
}

const char* TournamentMember::getLastname() const {
    return lastname;
}

const char* TournamentMember::getDoB() const {
    return DoB;
}

const char* TournamentMember::getIsfrom() const {
    return isfrom;
}

int TournamentMember::getTimes() {
    return times;
}

// prints data
void TournamentMember::print() {
    cout << "\n***************************************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Lastname: " << lastname << endl;
    cout << "Date of birth: " << DoB << endl;
    cout << "Place of brith: " << isfrom << endl;
    cout << "Has participated in " << times << " tournaments." << endl;
    cout << "Is currently in: " << location << endl;
    cout << "***************************************************\n" <<endl;
}