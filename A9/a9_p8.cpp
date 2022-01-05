/* 
    CH-230-A
    a9_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
using namespace std;

//swaps ints
//&a = reference to int a
//&b = reference to int b 
void swapping(int &a, int &b)
{
    int help = a;
    a = b; 
    b = help;
}  

//swaps floats
//&x = reference to float x
//&y = reference to float y
void swapping(float &x, float &y)
{
    float help = x;
    x = y; 
    y = help; 
} 

//swaps char pointers
//&str1 = reference to const char pointer str1
//&str2 = reference to const char pointer str2
void swapping(const char * &str1 , const char * &str2)
{
    const char *help = str1;
    str1 = str2; 
    str2 = help;
}

int main(void)
{
    //declares and initializes ints a, b; floats x, y; and 
    //const char pointers str1, str2
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
   
    //prints values before swap 
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    //calls swapping function with int parameters, float parameters, 
    //and const char* parameters
    swapping(a,b);
    swapping(x,y);
    swapping(str1,str2);

    //prints results 
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    return 0;
}