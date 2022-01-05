/* 
    CH-230-A
    a9_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/ 

#include <iostream>

//returns the absolute value of a real number 
float absolute(float x)
{
    //if x is negative, returns -x
    if (x < 0)
    {
        return -x;
    }

    //if x is positive returns x
    if (x >= 0)
    {
        return x; 
    }

    return 0; 
}

int main()
{
    float x;
    //user inputs a neg./pos. number
    std :: cout << "Enter a positive or negative number: " << std :: endl;
    std :: cin >> x;
    
    //function absolute is called to return the absolute value of x  
    x = absolute(x);
    
    //prints absolute value in standard output 
    std :: cout << "The absolute value is: " << x << std :: endl;

    return 0;
}