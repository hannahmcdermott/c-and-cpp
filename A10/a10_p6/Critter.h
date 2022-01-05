/* 
    CH-230-A
    a10_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string> 

class Critter
{
	
	private:  
		std::string name;
		int hunger;
		int boredom;
		double height;

		//methods to convert hunger from int to double and back
		double hungerpercentage(int h);
		int hungerint(double h);


	public: 	
		//default constructor
		Critter(); 
		//constructor only takes name as a parameter
		Critter(std::string);
		//constructor that takes all properties as parameters; height is optional parameter, 
		//sets height to ten if not specified 
		Critter(std::string, int hunger, int boredom, double height = 10);

		//setter methods to assign values to properties of an instance 
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);
		void setHeight(double newheight);

		//getter methods to get values of propreties of instances   
		std::string getName();
		int getHunger();
		int getBoredom();
		double getHeight();

		//service method
		void print();
};