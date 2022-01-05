/* 
    CH-230-A
    a11_p1.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main(int argc, char ** argv) {
    //declares variable for number of boxes 
    int n;

    //declares pointer to dynamically allocate data 
    Box *boxes;
    cout << "How many boxes woud you like to create?" << endl;
    cin >> n; 

    //dynamic allocation for an array of boxes 
    boxes = new Box[2 * n];
    
    //loop for user to input data for boxes 
    double h, w, d; 
    for (int i = 0; i < n; i++) {
        cout << "Box #" << (i + 1) << ":" << endl;
        cout << "Height: ";
        cin >> h;
        cout << "Width: ";
        cin >> w;
        cout << "Depth: ";
        cin >> d;
        /*uses parametric constructor to set all properties according 
        to users input*/
        boxes[i] = Box(h, w, d);
    }

    //loop for adding copies of boxes on remainding positions
    for (int i = 0; i < n; i++) {
        //uses copy constructor 
        boxes[n+i] = Box(boxes[i]);
    }
    
    //print results 
    cout << "------------------------------------------" << endl;
    cout << "           Y O U R   B O X E S            " << endl;
    cout << "------------------------------------------" << endl;
    //loops through all boxes and calculates their volume 
    for (int i = 0; i < (2 * n); i++) {
        cout << "Box #" << (i + 1) << endl;
        boxes[i].print();
        cout << "Volume: " << boxes[i].calcVolume() << endl;
        cout << "------------------------------------------" << endl;
    }
    
    //releases memory dynamically allocated with new 
    delete []boxes;
    return 0;

}