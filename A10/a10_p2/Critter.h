/* 
    CH-230-A
    a10_p2.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string> 

/* First C++ class */
class Critter
{
//data members are private	
private:  
	std::string name;
	int hunger;
	int boredom;
	double height;
	std::string feeling;
	int percentage;

//business logic methods are public 
public: 
	// setter methods == used to initialize variables 
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHeight(double newheight);
	void setFeeling(std::string& newfeeling);
	void setPercentage(int newpercentage);
	// getter method == get values for data members  
	int getHunger();
	int getBoredom();
	double getHeight();
	int getPercentage();
	// service method
	void print();
};