/* 
    CH-230-A
    a10_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Person.h"

using namespace std;

int main(int arg, char** argv){
    //creates three instances of class 'Person'
    Person a, b, c;

    //declares variables for each property of each instance
    string name_a, name_b, name_c;
    int age_a, age_b, age_c;
    string eyecolour_a, eyecolour_b, eyecolour_c;
    double height_a, height_b, height_c;

    cout << "Input the following information for three people!" << endl;
    cout << "Let's start with person#1 shall we?"  << endl;

    //user inputs data for first instance of person
    cout << "Persons name: " << endl;
    getline(cin,name_a);
    a.setName(name_a);

    cout << name_a << "'s year of birth: " << endl;
    cin >> age_a;
    a.setAge(age_a);

    cout << name_a << "'s eyecolour: " << endl;
    getchar();
    getline(cin, eyecolour_a);
    a.setEyecolour(eyecolour_a);

    cout << name_a << "'s height (in m): " << endl;
    cin >> height_a;
    a.setHeight(height_a);

    //user inputs data for second instance of person
    cout << "Cool, now for person#2..." << endl;
    
    cout << "Persons name: " << endl;
    //uses getchar to get rid of \n from previous input of height_a
    getchar();
    getline(cin,name_b);
    b.setName(name_b);

    cout << name_b << "'s year of birth:" << endl;
    cin >> age_b;
    b.setAge(age_b);

    cout << name_b << "'s eyecolour: " << endl;
    //uses getchar to get rid of \n from previous input of age_b
    getchar();
    getline(cin, eyecolour_b);
    b.setEyecolour(eyecolour_b);

    cout << name_b << "'s height (in m): " << endl;
    cin >> height_b;
    b.setHeight(height_b);
    
    //user inputs data for third instance of person
    cout << "Nice! Now, last but not least, person#3:" << endl;
    cout << "Persons name: " << endl;
    //uses getchar to get rid of \n from previous input of height_b
    getchar();
    getline(cin,name_c);
    c.setName(name_c);

    cout << name_c << "'s year of birth: " << endl;
    cin >> age_c;
    c.setAge(age_c);

    cout << name_c <<"'s eyecolour: " << endl;
    //uses getchar to get rid of \n from previous input of age_c
    getchar();
    getline(cin, eyecolour_c);
    c.setEyecolour(eyecolour_c);

    cout << name_c <<"'s height (in m): " << endl;
    cin >> height_c;
    c.setHeight(height_c);

    //prints data to standard output
    cout << endl << "Here's your info!" << endl; 
    cout << endl;
    a.print();
    b.print();
    c.print();
    cout << endl;

    return 0;

}

