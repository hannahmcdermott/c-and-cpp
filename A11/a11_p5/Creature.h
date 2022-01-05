/* 
    CH-230-A
    a11_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef __CREATURE_H
#define __CREATURE_H
#include <cstring>

/*//////////////////////////
    BASE CLASS: CREATURE 
*///////////////////////////

class Creature 
{

    /*
        Derived classes able to access properties name and growthrate 
    */

	protected:  
        std::string name;
        float growthrate;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */

    public:
        Creature();
        Creature(const std::string&, float);
        ~Creature();
        void setName(const std::string&);
        std::string getName();
        void setGrowthrate(float);
        float getGrowthrate();
        void growing() const;
};

/*///////////////////////////////
    DERIVED CLAS: WIZARD CLASS
*////////////////////////////////

class Wizard : public Creature 
{
	private:
		std::string enemy; 
        std::string spell;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */

    public:
        Wizard();
        Wizard(const std::string&, float, const std::string&, const std::string&);
        ~Wizard();
        void setEnemy(const std::string&); 
        std::string getEnemy();
        void setSpell(const std::string&);
        std::string getSpell();
        void swoosh() const;
};

/*////////////////////////////////
    DERIVED CLAS: MERMAID CLASS
*/////////////////////////////////

class Mermaid : public Creature
{
    private: 
        int apetite;
        double pitch;
        std::string lyrics;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service methods
        definitions 
    */

    public:
        Mermaid();
        Mermaid(const std::string&, float, int, double, const std::string&);
        ~Mermaid();
        void setApetite(int);
        int getApetite();
        void setPitch(double);
        double getPitch();
        void setLyrics(const std::string&);
        std::string getLyrics();
        void singing(); 
        void eating(); 
};

/*///////////////////////////////
    DERIVED CLAS: ALIEN CLASS
*////////////////////////////////

class Alien : public Creature 
{
    private:
        int limbs;
        std::string origin;
        std::string colour;
    
    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */

    public:
        Alien();
        Alien(const std::string&, float, int, const std::string&, const std::string&);
        ~Alien();
        void setLimbs(int);
        int getLimbs();
        void setOrigin(const std::string&);
        std::string getOrigin();
        void setColour(const std::string&);
        std::string getColour();
        void introducing();
};

#endif