/* 
    CH-230-A
    a9_p11.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    //declares empty string 
    string backwards = "";

    //s.size() - 1 because s.size will return number of elements in a string
    for (int i = s.size() - 1; i >= 0; i--)
    {
        //concatenates characters starting from the end of string 's' into 
        //string 'backwards' 
        backwards += s[i];
    }

    //returns true if 'backwards' string is the same as string 's'
    //otherwise returns false 
    if (backwards == s)
    {
        return true;
    }
   
    else
    {
        return false;
    }
}

int main()
{
    cout << "Check if a word is a palindrome! Type in a word: " << endl;
    
    while(1)
    {
        //declares string for users input  
        string users_word;
        
        //scans input word from user 
        cin >> users_word; 

        //series of if-else statements to print corresponding message depending 
        //if word is a palindrome, not a palindrome, or if users input is "exit"
        if (users_word == "exit") break;

        else if (isPalindrome(users_word))
        {
            cout << users_word << " is a palindrome!" << endl;
        }
        
        else if (!isPalindrome(users_word))
        {
            cout << users_word << " is not a palindrome!" << endl;
        }
    }
    return 0;
}
