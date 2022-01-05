/* 
    CH-230-A
    a12_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// returns random word chosen from a string array of 4 
// elements 
string random(string words[4]) {
    string aWord = words[rand() % 4];
    return aWord;
}

int main() {
    string words[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
    int count = 0; 
    //initiliazes random number generator
    srand(static_cast <unsigned int> (time(0)));
    while (count < 4) {
        count++;
        cout << random(words) << endl;
    }
    return 0;
}