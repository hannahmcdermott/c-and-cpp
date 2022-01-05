/* 
    CH-230-A
    a13_p1.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // declares two strings: one for the name of the input file and one fore the 
    // name of the output
    string filenameSrc, filenameCpy;
    // declares string buffer to store lines from input file 
    string buffer;
    cout << "Input filename to copy: ";
    cin >> filenameSrc;
    
    size_t dotpos = filenameSrc.find('.');
    if (dotpos == string::npos) {
        cout << "Invalid filename: " << filenameSrc << endl;
        exit(1);
    }

    // insert function modifies string so assigns output filename the input filenmae
    // before and then changes filenameCpy
    filenameCpy = filenameSrc;
    // changes filenameCpy to "text_copy.txts"
    filenameCpy.insert(dotpos, "_copy");

    // declares file to read 
    ifstream in;
    in.open(filenameSrc.c_str());
    // checks for success
    if (!in.good()) {
        cerr << "Error opening input file" << endl;
        exit(2);
    }

    // Creates file to write
    ofstream out(filenameCpy.c_str());
    // checks for success
    if (!out.good()) {
        cerr << "Error opening output file" << endl;
        exit(3);
    }

    // read characters from in and writes them in out using while loop
    while (getline(in, buffer)) {
        out << buffer << endl;
    }

    cout << "The copied content can be found in " << filenameCpy << endl;
    
    // closes files for safety
    in.close();
    out.close();

    return 0;
}