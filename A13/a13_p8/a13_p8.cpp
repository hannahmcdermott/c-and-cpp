/* 
    CH-230-A
    a13_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

// OwnException class 
class OwnException : public exception {
    private:
        char msg[50];

    public:
        OwnException(const char*m) { strncpy(msg, m, 50); }
        const char* getMsg() const { return msg; }
        // overwriting what() to return "OwnException"
        virtual const char* what() const throw() {
            return "OwnException";
        }   
}; 

void exceptions(int x) {
    // try block that evaluates different values of x 
    if (x == 1) {
        throw 'a';
    }
    else if (x == 2) {
        throw 12;
    }
    else if (x == 3) {
        throw true;
    }
    else {
        throw OwnException("Default case exception");
    }
}   

int main(int argc, char**argv) {
    cout << "\nTesting exceptions....\n" << endl;
    int x;

    // endless while loop for trying outputs of different numbers
    while(1) {
        cout << "----------------------------" << endl;
        cout << "Press any number: " << endl;
        cin >> x;
        // calls function to test x
        
        try {
            exceptions(x);  
        }
        // catch block that prints message according to 'error' caught
        catch (int x) {
            cerr << "\nCaught in main: " << x << endl;
        }
    
        catch (char a) {
            cerr <<  "\nCaught in main: " << a << endl;
        }

        catch (bool a) {
            cerr << "\nCaught in main: " << a << endl;
        }

        catch (OwnException &oops) {
            cerr << "\nCaught in main: " << oops.what() << endl;
        }       
    }
    return 0;
}