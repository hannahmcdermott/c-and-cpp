/* 
    CH-230-A
    a10_p1.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name; //not advisable to use 'using namespace std'
	int hunger;
	int boredom;
	double height;

//declaraitons of the methods
public: // business logic methods are public
	// setter methods == used to initialize variables 
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method == get values for 
	int getHunger();
	// service method
	void print();
};