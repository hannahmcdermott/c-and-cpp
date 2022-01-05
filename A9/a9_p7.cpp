/* 
    CH-230-A
    a9_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream> 
#include <cstdio>
#include <string>

using namespace std;

//array[7] = array of ints with 7 elements
//returns the first positive and even value from the array 
//if no such element, returns -1
int myfirst(int array[7])
{
    for (int i =0; i < 7; i++)
    {
        if ((array[i] > 0) && (array[i] % 2 == 0))
        {
            return array[i];
        }
    }
    return -1;
}

//array[7] = array of doubles with 7 elements 
//returns the first negative element that does not have a fractional part
//if no such element, returns -1.1
double myfirst(double array[7])
{
    for (int d = 0; d < 7; d++)
    {
        //checks for fraction part of double by casting it as int
        if ((array[d] < 0) && (array[d] == (int) array[d]))
        {
            return array[d];
        }
    }
    return -1.1;
}

//s = string 
//returns the first consontant
//if no consontants in the string, returns '0'
char myfirst(string s)
{ 
    for (size_t i = 0; i < s.size(); i++)
    {
        //checks if s[i] is a letter 
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            //if s[i] is not a vowel returns s[i]
            if ( s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
                 s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && 
                 s[i] != 'E' && s[i] != 'I' && s[i] != 'O' &&
                 s[i] != 'U' )
            {
                    return s[i];
            }        
        }
    }
    return '0';
}

int main()
{
    //declares and initilizes variables int_array, double_array, and s
    int int_array[7] = {3, 17, 8, 9, -20, 34, 4};
    double double_array[7] = {4.5, 4.5, -2.2, -3, 5.6, -7, 6.8};
    string s = " a, e, i, o, u... burrito.";

    //calls myfirst function with parameter int array 
    cout << "The first positive and even value is: " << myfirst(int_array) << endl;
    
    //calls myfirst function with parameter double array 
    cout << "The first negative element that does NOT have a fractional part is: ";
    cout << myfirst(double_array) << endl;
    
    //calls myfirst funciton with parameter string
    cout << "The first consonant is: " << myfirst(s) << endl;

    return 0;

}