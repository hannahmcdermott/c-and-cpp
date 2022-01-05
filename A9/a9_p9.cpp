/* 
    CH-230-A
    a9_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
using namespace std;

//ptr = pointer to integer array
//n = size of array
//subtracts the maximum value in the array from all other elements
void subtract_max(int * ptr, int n)
{
    int max = ptr[0];
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            //gets maximum value of array 
            max = ptr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        //subtracts the max from every element
        ptr[i] -= max;
    }
}

//deallocates memory of an int array with delete
void deallocate(int * ptr)
{
    delete[] ptr;
}

int main()
{
    //user inputs how many elements to store
    int n;
    cout << "How many elements do you want to store?" << endl;
    cin >> n;

    //dynamic memory allocatin for int array of n elements
    int *ptr = new int[n];
    cout << "Enter " << n << " elements: " << endl;
    
    //program scans all elements 
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }

    //prints original array to standard output
    cout << "Your original array: {";
    for (int i = 0; i < n; i++) 
    {
        cout << ptr[i] << ",";
    }
    cout << "}" << endl;

    //calls funciton subtract_max 
    subtract_max(ptr, n);

    //prints result array to standard output
    cout << "Your array after subtracting the max value: {";
    for (int i = 0; i < n; i++) 
    {
        cout << ptr[i] << ",";
    }
    cout << "}" << endl;

    //deallocates memory by calling function deallocate
    deallocate(ptr);

    return 0;
}

