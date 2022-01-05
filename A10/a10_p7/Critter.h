/* 
    CH-230-A
    a10_p7.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <string> 

class Critter
{

	private:  
		std::string name;
		int hunger;
		double thirst;
		int boredom;
		double height;
		void hungerpercentage(int h);
		void hungerint(double h);

	public: 
		//default constructor 
		Critter(); 
		//constructor only takes names as a parameter
		Critter(std::string);
		//constructor that takes all properties as parameters; height is optional parameter, 
		//sets height to ten if not specified
		Critter(std::string, int hu, int b, double h = 10);
		//constructor that takes all properties including thirst as parameters
		Critter(std::string, int hu, double t, int b, double h);
		
		//setter methods == used to initialize variables 
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setThirst(double newthirst);
		void setBoredom(int newboredom);
		void setHeight(double newheight);

		//getter methodd to get values of properties of instances 
		std::string getName();
		int getHunger();
		double getThirst();
		int getBoredom();
		double getHeight();

		//service method
		void print();
};