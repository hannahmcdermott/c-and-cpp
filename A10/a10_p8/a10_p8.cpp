/* 
    CH-230-A
    a10_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>  

using namespace std;

class NaiveString 
{
	private:
		char *str;

	public:
		//parametric constructor
		NaiveString(const char*);
		//copy constructor 
		NaiveString(const NaiveString&);
		//destructor
    	~NaiveString();
		void update(char, char);
		void print();
};

NaiveString::NaiveString(const char* t) {
	//dynamic allocation for str
	str = new char[strlen(t) + 1];
	strcpy(str, t);
	//prints message such that one can see when this constructor is being called
    cout << "----------------------------------------" << endl;
	cout << "  parametric constructor being called   " << endl;
	cout << "----------------------------------------" << endl;
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/

NaiveString::NaiveString(const NaiveString& src) {
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	//prints message such that one can see when this constructor is being called
    cout << "----------------------------------------" << endl;
	cout << "      copy constructor being called     " << endl;
	cout << "----------------------------------------" << endl;
}

NaiveString::~NaiveString() {
    delete []str;
	//prints message such that one can see when destructor is being called
    cout << "----------------------------------------" << endl;
	cout << "         destructor being called        " << endl;
	cout << "----------------------------------------" << endl;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

/*
	funcByVal will create a copy of string s and update the copied string. 
	Copied string goes out of scope and is destroyed by destructor, so
	changes to the string will not be visible in the standard output. 
*/
void funcByVal(NaiveString s) {
	cout << "----------------------------------------" << endl;
	cout << "        funcByVal() being called        " << endl;
	cout << "----------------------------------------" << endl;
	s.update('L', '!');
	s.print();
}

/*
	funcByRef will update string s. Changes to string s will be visible
	in the standard output because no copy is created and destroyed, 
	rather string s is changed. 
*/
void funcByRef(NaiveString &s) {
	cout << "----------------------------------------" << endl;
    cout << "        funcByRef() being called        " << endl;
	cout << "----------------------------------------" << endl;
    s.update('A', '@');
    s.print();
}

int main(int argc, char** argv)
{
	cout << endl;

	//creates instance a using parametric constructor
	NaiveString a("HELLO LALA LAND");
	a.print();
	cout << "----------------------------------------" << endl;
	cout << "        about to call funcByVal()       " << endl;
	cout << "----------------------------------------" << endl;
	funcByVal(a); 
    a.print();

	/*
		copy constructor will be called because funByVal creates copy of 
		string a. funByVal will print modified copy of string a, and when
		it goes out of scope destructor will be called to destroy copy. 
    	a.print() will print original string as it was not modified.
	*/

	//creates instance b using copy constructor
    NaiveString b(a);
    b.print();
	cout << "----------------------------------------" << endl;
    cout << "        about to call funcbyRef()       " << endl;
	cout << "----------------------------------------" << endl;
    funcByRef(b);
	b.print();

    /*
		No copy is created by funcbyRef so string b is modified. funByRef will 
		print modified version of string b.
		b.print() will also print modified verson. 
    */

	//destructor will be called twice for instance a and instance b, releasing memory

    return 0;
}