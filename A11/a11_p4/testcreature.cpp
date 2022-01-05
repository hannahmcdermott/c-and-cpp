/* 
    CH-230-A
    a11_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Creature.h"

using namespace std;

int main()
{ 
    cout << "--------------------------------------\n";
    cout << "\ncreating a creature\n";
    // uses default creature constructor 
    Creature c;
    c.growing();
    cout << "Personalizing creature...\n";
    // uses setter methods to assign a name and growthrate
    c.setName("Doby");
    c.setGrowthrate(0.7);
    c.growing();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a creature\n";
    // uses parametric creature constructor 
    Creature c1("Pablo", 5.55);
    c1.growing();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a wizard\n";
    // uses default constructor 
    Wizard w;
    // calls method from base class interface 
    w.growing();
    w.swoosh();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a wizard\n";
    // uses parametric constructor 
    Wizard w1("Merlin", 1.33, "Mab", "Hleap on bæc");
    // calls method from base class interface 
    w1.growing();
    w1.swoosh();
    cout << endl;
    
    cout << "--------------------------------------\n";
    cout << "\ncreating a mermaid\n";
    // uses default constructor
    Mermaid m; 
    // calls method from base class interface 
    m.growing(); 
    m.singing();
    m.eating();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a mermaid\n";
    // uses parametric constructor 
    Mermaid m1("Melusine", 46, 4, 77777, "sleeeeeeeeeep");
    // calls method from base class interface 
    m1.growing();
    m1.singing();
    m1.eating();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating an alien\n";
    // uses default constructor 
    Alien a;
    // calls method from base class interface 
    a.growing();
    a.introducing(); 
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating an alien\n"; 
    // uses parametric constructor 
    Alien a1("Yihiyi", 0.3, 5, "Venus", "purple");
    // calls method from base class interface 
    a1.growing();
    a1.introducing();
    cout << endl;
    cout << "--------------------------------------\n";
    cout <<"\nDESTROYING CREATURES:" << endl;
    // destructors called automatically 
    
    return 0;
}