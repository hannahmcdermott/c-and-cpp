/* 
    CH-230-A
    a11_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Person.h"

using namespace std;

int main(int arg, char** argv){

    /* 
        declares variables for each property of each instance
    */

    string name_a, name_b, name_c;
    int birth_a, birth_b, birth_c;
    string eyecolour_a, eyecolour_b, eyecolour_c;
    double height_a, height_b, height_c;

    cout << "\nInput the following information for three people!" << endl;
    cout << "Let's start with person#1 shall we?"  << endl;

    /*
        User inputs data for first instance 
    */

    cout << "Persons name: " << endl;
    getline(cin,name_a);
    cout << name_a << "'s year of birth: " << endl;
    cin >> birth_a;
    cout << name_a << "'s eyecolour: " << endl;
    getchar(); // gets rid of \n from previous input for birth
    getline(cin, eyecolour_a);
    cout << name_a << "'s height (in m): " << endl;
    cin >> height_a;

    // uses parametric constructor to build Person a 
    Person a(name_a, birth_a, eyecolour_a, height_a);

    // uses default constructor and prints to standard output
    Person b;
    cout << "\nThis is your person #2 right now... " << endl;
    b.print2(); 
    cout << "\nIs this right? If not please input data" << endl; 

    /* 
        User inputs data for second instance 
    */

    cout << "Persons name: " << endl;
    getchar();
    getline(cin,name_b);
    b.setName(name_b);

    cout << name_b << "'s year of birth:" << endl;
    cin >> birth_b;
    b.setBirth(birth_b);

    cout << name_b << "'s eyecolour: " << endl;
    getchar(); // gets rid of \n from previous input of age_b
    getline(cin, eyecolour_b);
    b.setEyecolour(eyecolour_b);

    cout << name_b << "'s height (in m): " << endl;
    cin >> height_b;
    b.setHeight(height_b);
    
    // uses copy constructor 
    Person c(a);
    cout << "\nYour third person looks a look like your first person...";
    cout << "this is your third person right now: " << endl;
    c.print2();

    cout << "If this is not right, change it please..." << endl;
    
    /*
        User inputs data for third instance 
    */

    cout << "Persons name: " << endl;
    getchar(); // gets rid of \n from previous input of height_b
    getline(cin,name_c);
    c.setName(name_c);

    cout << name_c << "'s year of birth: " << endl;
    cin >> birth_c;
    c.setBirth(birth_c);

    cout << name_c <<"'s eyecolour: " << endl;
    getchar(); // gets rid of \n from previous input of age_c
    getline(cin, eyecolour_c);
    c.setEyecolour(eyecolour_c);

    cout << name_c <<"'s height (in m): " << endl;
    cin >> height_c;
    c.setHeight(height_c);

    /* 
        prints data to standard output
    */

    cout << endl << "Here's your info!" << endl; 
    cout << endl;
    a.print();
    b.print();
    c.print();
    cout << endl;

    return 0;

}

