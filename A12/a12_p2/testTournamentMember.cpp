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

int main()
{
    
    /*
        Creates first instance of TM using default constructor, then 
        uses setter methods to set data, prints data 
    */
    cout << endl;
    TournamentMember a; 
    a.setName("Kylian\0");
    a.setLastname("Mbappé\0");
    a.setDoB("1998-12-20\0");
    a.setIsfrom("Bondy, France\0");
    a.setTimes(40);
    a.print();
   
    /*
        Creates second instance of TM using parametric constructor
        and prints the data 
    */
    TournamentMember b("Zinedine\0", "Zidane\0", "1972-07-23\0", 
        "La Castellane, France\0", 357);
    b.print();
   
    /*
        Creates third instance of TM using copy constructor, copies 
        data of first instance, and then prints data 
    */
    TournamentMember c(a);
    c.print();
    cout << endl;

    return 0;
}