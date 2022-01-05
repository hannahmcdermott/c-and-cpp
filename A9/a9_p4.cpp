/* 
    CH-230-A
    a9_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <string> 

//returns the difference between the second and first parameter
int mycount(int a, int b)
{
    return b - a;
}

//returns the number of occurances of a character 
int mycount(char a, std :: string s)
{
    int count = 0;
    //size_t = alias of one of the unsiged integer types
    //size() function returns the size of the set container/number of elements
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == a)
        {
            count++;
        }
    }
    //if no occurance, 0 will be returned because will never be incremented
    return count;
}

int main()
{
    //initializes variables a, b, o, and s
    int a = 7;
    int b = 3;
    char o = 'i';
    std :: string s = "this is a string";

    //demonstrates use of overloaded functions depending on the parameters
    //they are called with 
    //prints results on standard output 
    std:: cout << mycount(a, b) << std :: endl;
    std:: cout << mycount(o, s) << std :: endl;

    return 0; 
}