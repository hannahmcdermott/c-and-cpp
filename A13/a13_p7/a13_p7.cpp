/* 
    CH-230-A
    a13_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main(int argc, char**argv) {
    
    vector<int> v;
    
    // fills the array with 8 twenty times 
    v.assign(20, 8);

    // print vector 
    cout << "\nCurrent vector: " << endl;
    long unsigned int i;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << "\n\nAttempting to access 21st element...";

    try { 
        // at throws an out_of_range error
        v.at(21) = 8;
    }

    // what() identifies the exception 
    catch (const out_of_range& oops){
        cerr << "\n\nout_of_range error: " << oops.what() << "\n" << endl;
    }
    return 0;
}