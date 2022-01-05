/* 
    CH-230-A
    a11_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Creature.h"

using namespace std;

int main()
{ 

    while(1) 
    {
        cout << endl;
        
        /*
            Asks user to choose creature and reads input from keyboard
        */

        cout << "What would you like to create?" << endl;
        cout << "A wizard, a mermaid, or an alien?" << endl;
        string creature; 
        getline(cin, creature);
        
        /*
            Series of if-else statements to compare input from user to 
            either "wizard", "mermaid", or "alien"
        */

       /*
            Each 'if' body dynamically allocates memory for the creature 
            chosen. Methods are then accessed using the pointer and '->'.
            Pointer is then deleted via 'delete'.
       */

        if (creature == "wizard") 
        {
            cout << "--------------------------------------\n";
            cout << "\ncreating a wizard\n";
            Wizard *p = new Wizard("Merlin", 1.33, "Mab", "Hleap on bæc");  
            cout << endl;
            p->growing();
            p->swoosh();
            cout << endl;
            delete p;
        }

        else if (creature == "mermaid") 
        {
            cout << "--------------------------------------\n";
            cout << "\ncreating a mermaid\n";
            Mermaid *p = new Mermaid("Melusine", 46, 4, 77777, "sleeeeeeeeeep");
            cout << endl;
            p->growing(); 
            p->singing();
            p->eating();
            cout << endl;
            delete p;
        }

        else if (creature == "alien")
        {
            cout << "--------------------------------------\n";
            cout << "\ncreating an alien\n";
            Alien *p = new Alien("Yihiyi", 0.3, 5, "Venus", "purple");
            cout << endl;
            p->growing();
            p->introducing(); 
            cout << endl;
            delete p;

        }

        /* 
            If user inputs "quit", program terminates 
        */

        else if (creature == "quit") 
        {
            exit(0);
        }

        cout << endl;
        cout << "--------------------------------------\n";
        
    } // end of while loop     

    return 0;
}