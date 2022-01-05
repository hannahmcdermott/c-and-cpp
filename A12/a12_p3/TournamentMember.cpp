/* 
    CH-230-A
    a12_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "TournamentMember.h"

using namespace std;

/*  
    NOTE* All constructos and destructors print a message when they are 
    being called from the main function.
*/

/*/////////////////////////////
    TOURNAMENTPLAYER CLASS
*//////////////////////////////

/*
    Definitions of static data members are included here.
*/

std::string TournamentMember::location = "---";

void TournamentMember::changelocation(std::string newlocation) {
    location = newlocation;
}

TournamentMember::TournamentMember() {
    strcpy(name, "blank");
    strcpy(lastname, "blank");
    strcpy(DoB, "0000-00-00");
    strcpy(isfrom, "blank");
    times = 0;
    cout << "**tournamentmember default constructor being called**" << endl;
}

TournamentMember::TournamentMember(const char *n, const char *l, const char *d, 
    const char *i, int t) {
    strcpy(name, n); 
    strcpy(lastname, l);
    strcpy(DoB, d);
    strcpy(isfrom, i);
    times = t;
    cout << "**tournamentmember parametric constructor being called**" << endl;
} 

TournamentMember::TournamentMember(const TournamentMember& source) {
    strcpy(name, source.name);
    strcpy(lastname, source.lastname);
    strcpy(DoB, source.DoB);
    strcpy(isfrom, source.isfrom);
    times = source.times;
    cout << "**tournamentmember copy constructor being called**" << endl;
}

TournamentMember::~TournamentMember() {
    cout << "**tournamentmember destructor being called**" << endl;
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

void TournamentMember::print() {
    cout << "\nName: " << name << endl;
    cout << "Lastname: " << lastname << endl;
    cout << "Date of birth: " << DoB << endl;
    cout << "Place of brith: " << isfrom << endl;
    cout << "Has participated in " << times << " tournaments." << endl;
    cout << "Is currently in: " << location << "\n" << endl;
}

/*/////////////////
    PLAYER CLASS 
*//////////////////

/*
    Definitions for constructors and destructor
*/
Player::Player() {
    number = 0;
    position = "default";
    goals = 0;
    footed = "default";
    cout << "**player default constructor being called**" << endl;
}

Player::Player(const char *n, const char *l, const char *d, const char *i, int t,
    int nu, string p, int g, string f) : TournamentMember(n, l, d, i, t) 
{
    number = nu;
    position = p; 
    goals = g;
    footed = f;
    cout << "**player parametric constructor being called**" << endl;   
}

Player::Player(const Player &src) : 
    TournamentMember(src.name, src.lastname, src.DoB, src.isfrom, src.times)
{
    number = src.number;
    position = src.position;
    goals = src.goals;
    footed = src.footed;
    cout << "**player copy constructor being called**" << endl;
}

Player::~Player() {
}

/*
    Definitions of other setter/getters already included as inline in 
    TournamentMember.h 
*/
void Player::setGoals(int g) {
    goals = g;
}

int Player::getGoals() {
    return goals;
}

void Player::printplayer() {
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goals Scored: " << goals << endl;
    cout << "Is " << footed << "\n"<< endl;
}

void Player::incrementgoals() {
    goals++;
}