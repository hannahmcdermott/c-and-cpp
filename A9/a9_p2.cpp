/* 
    CH-230-A
    a9_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/ 

#include <iostream>

int main()
{
    //declares int n, double x, string s
    int n;
    double x;
    std :: string s;

    //reads from keyboard int n, double x, string s
    std :: cin >> n;
    std :: cin >> x;
    std :: cin >> s;
    
    //'for' loop to repeat printing n times 
    for (int i = 0; i < n; i++)
    {
        std :: cout << s << ':' << x << std :: endl;
    }
    
    return 0;

}