/* 
    CH-230-A
    a9_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declares string 's'
    string s;

    //declares empty string 'concat'
    string concat = "";
    
    //inizializes bool variable to exit loop 
    bool quit = false;
    
    //do-while loop 
    do 
    {
        //uses getline to scan string input from user 
        getline(cin, s);
        
        //if entered string is 'quit' boolean variable turns true and exits loop
        if (s == "quit")
        {
           quit = true; 
        }
        
        // concatenates strings without spaces in between using += 
        //concant (empty string) = empty string + s
        else 
        {
            concat += s;
        }

    } while (!quit); //loops around while quite is false (quite == false)

    //prints to standard output the result of the concatenated string 
    cout << concat << endl;
    
    return 0;
}