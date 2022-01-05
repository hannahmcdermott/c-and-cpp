/* 
    CH-230-A
    a12_p4.cpp 
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
    cout << "Has participated in " << times << " tournaments in his lifetime." << endl;
    cout << "Is currently in: " << location << "\n" << endl;
}

/*/////////////////
    PLAYER CLASS 
*//////////////////

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
    cout << "Goals scored: " << goals << endl;
    cout << "Is " << footed << "\n"<< endl;
}

void Player::incrementgoals() {
    goals++;
}

/*//////////////////
    REFEREE CLASS
*///////////////////

void Referee::setYCL(Player**p) {
    for (int i = 0; i < 40; i++) {
        yellowCardList[i] = p[i];
    }
}

void Referee::setRCL(Player**p) {
    for (int i = 0; i < 40; i++) {
        redCardList[i] = p[i];
    }
}

bool Referee::addToYellowCardList(Player * p) 
{
    // first checks if first pointer in array is NULL
    if (yellowCardList[0] == NULL) {
        yellowCardCount++;
        yellowCardList[0] = p;
        return true;
    }

    for (int i = 0; i < yellowCardCount; i++) 
    {
        // checks if player is already in the list 
        if (yellowCardList[i] == p) 
        {
            /*
                if yes, sets all elements in the list to one 
                position before, hence deleting the player 
                it is checking
            */
            for (int j = i; j < yellowCardCount; j++) 
            {
                yellowCardList[i] = yellowCardList[i+1];
            }

            // decreases the yellow card count after removing the player 
            yellowCardCount--;
            // increments the red card count and adds the player to red card list
            redCardCount++;
            redCardList[redCardCount-1] = p;
            return false;
        }

        // if player is not in the list, increases the yellow card count and adds player to list
        else 
        {
            yellowCardCount++;
            yellowCardList[yellowCardCount-1] = p; 
            return true;
        }
    }
    return true;
}

bool Referee::addToRedCardList(Player * p) 
{
    // first checks if first pointer in array is NULL 
    if (redCardList[0] == NULL) {
        redCardCount++;
        redCardList[0] = p;
        return true;
    }
    
    /* 
        for loop for checking if the player is already in 
        the red list or not   
    */
    for (int i = 0; i < redCardCount; i++) 
    {
        // if player already there returns false 
        if (redCardList[i] == p) {
            return false;
        }
        /* 
            if player is not in the list: increments 
            the red card count, then sets the [red card count - 1]
            element to p and returns true 
        */
        else {
            redCardCount++;
            redCardList[redCardCount-1] = p;
            return true;
        }
    }
    return true;
}

void Referee::printreferee() {
    // prints yellow card count and names of players in yellow card list 
    cout << "----------------------" << endl;
    cout << "Yellow card count: " << yellowCardCount << endl;
    cout << "Yellow card list:\n"; 
    for (int i = 0; i < yellowCardCount; i++) {
        cout << yellowCardList[i]->getName() << endl;
    }
    // prints red card count and names of players in red card list 
    cout << "\nRed card count: " << redCardCount << endl;
    cout << "Red card list:\n";
    for (int i = 0; i < redCardCount; i++) {
        cout << redCardList[i]->getName() << endl;
    } 
    cout << "----------------------" << endl;
}