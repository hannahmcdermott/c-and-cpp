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

int main() {
    
    // tests player default constructor 
    cout << "\n{{{USING PLAYER DEFAULT CONSTRUCTOR}}}\n" << endl;
    Player a;

    // Uses base class setter methods to set values for inherited properties
    a.setName("Pelé\0");
    a.setLastname("---\0");
    a.setDoB("1940-10-23\0");
    a.setIsfrom("Três Corações, State of Minas Gerais, Brazil");
    a.setTimes(694);
    // Uses player methods to set values for non-inherited properties
    a.setNumber(10);
    a.setPosition("Forward");
    a.setGoals(1281);
    a.setFooted("right footed");
    // prints data 
    a.print();
    a.printplayer();
    
    // tests player parametric constructor 
    cout << "{{{USING PLAYER PARAMETRIC CONSTRUCTOR}}}\n" << endl;
    
    Player b("Diego\0", "Maradona\0", "1960-10-30\0", "Lanús Oeste, Argentina",
            699, 10, "Midfielder", 1493, "left-footed");
    // prints data         
    b.print();
    b.printplayer();

    // tests player copy constructor 
    cout << "{{{USING PLAYER COPY CONSTRUCTOR}}}\n" << endl;
    Player c(a);
    c.print();
    c.printplayer();
    // increments the goals of Player c and prints it on the screen 
    c.incrementgoals();
    cout << "\nCorrection: " << c.getName() << " scored " << c.getGoals() << " goals\n" << endl;
    
    // moves the location of all members to Hamburg
    cout << "{{{TRANSFERING ALL MEMBERS OF TOURNAMENT}}}\n";
    //TournamentMember::changelocation("Hamburg");
    Player::changelocation("Hamburg");
    // prints updated data, i.e Hamburg as new location
    a.print();
    b.print();
    c.print();

    return 0;
}