/* 
    CH-230-A
    a13_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {
    // asks user to input number of files to concatenate
    int n;
    cout << "How many files do you want to concatenate? ";
    cin >> n; 

    // creates file concatn.txt to concatenate the content of n files in binary mode 
    ofstream out("concatn.txt", ios::out | ios::binary); 
    if (!out.good()) {
        cerr << "Error creating output file!" << endl;
        exit(1);
    }

    // declares string for storing the name of the file input by user 
    string infile;
    char buf[700];

    // for loop for reading from input files and writing into output file
    for (int i = 0; i < n; i++) {
        cout << "filename (" << i + 1 << ") ";
        cin >> infile;
        // opens in binary mode 
        ifstream in(infile, ios::in | ios::binary);
        if (!in.good()) {
            cerr << "Error opening input file!" << endl;
            exit(2);
        }

        // while the end of file has not been reached 
        while (!in.eof()) {
            in.read(buf, 700);
            /* writes to output file how ever many 
            characters that were read from the input 
            file with in.gcount() */
            out.write(buf, in.gcount());
            out << "\n\n";
            // resets buffer for safety
            memset(buf, 0, sizeof(buf));
        }

        // closes input file 
        in.close();
    }
    // closes output file 
    out.close();
    cout << "\nThe concatenation can be found in concatn.txt\n" << endl;
    return 0;
}