/* 
    CH-230-A
    a13_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>

using namespace std;

class Motor {
    private: 
        char msg[30];
    public:
        // default constructor throws string 
        Motor() { throw string("This motor has problems"); }
        ~Motor() {}
        char * getMsg() { return msg; }

};

class Car {
    private:
        // Car class has a motor object as a property
        Motor motor;
    public:
        Car() {}
        ~Car() {}

};

class Garage {
    private:
        // uses dynamic allocation such that it controls when
        // the object is created and it can catch the exception 
        // thrown by the motor constructor, therefore has a Car* 
        // as a property
        Car *car;
    public:
        Garage() {
            try {
                car = new Car();
            }
            catch(string msg) {
                cout << "Caught in Garage constructor: " << msg << endl;
                throw string("The car in this garage has problems with the motor");
            }
        }
};

int main(int argc, char**argv) {
    try {
        Garage g;
    }
    catch (string msg) {
        cout << "Caught in main: " << msg << endl;
    }
    return 0;
}

