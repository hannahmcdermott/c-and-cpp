/* 
    CH-230-A
    a11_p3.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>


using namespace std;

/*///////////////////
    CREATURE CLASS
*////////////////////

class Creature 
{

    /*
        Derived classes able to access properties name and growthrate 
    */

	protected:  
        string name;
        float growthrate;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */

    public:
        Creature();
        Creature(const string&, float);
        ~Creature();
        void setName(const string&);
        string getName();
        void setGrowthrate(float);
        float getGrowthrate();
        void growing() const;
};

/*
    Implementation of constructors/destructor for Creature class 
*/

Creature::Creature() {
    name = "Blank";
    growthrate = 0;
    cout << "step one: calling creature constructor" << endl;
}

Creature::Creature(const string& n, float g) {
    name = n,
    growthrate = g;
    cout << "step one: calling parametric creature constructor" << endl;
} 

Creature::~Creature() {
    cout << "creature destructor being called" << endl;
}

/*
    Implementation of setter/getter methods for Creature properties 
*/

void Creature::setName(const string& n) {
    name = n;
}

string Creature::getName() {
    return name;
}

void Creature::setGrowthrate(float g) {
    growthrate = g;
}

float Creature::getGrowthrate() {
    return growthrate; 
}

/*
    Implementatin of service method for Creature class  
*/

void Creature::growing() const
{ 
    cout << name << " is growing " << growthrate << " times as fast as a human!\n";
}  

/*/////////////////
    WIZARD CLASS
*//////////////////

class Wizard : public Creature 
{
	private:
		string enemy; 
        string spell;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */

    public:
        Wizard();
        Wizard(const string&, float, const string&, const string&);
        ~Wizard();
        void setEnemy(const string&); 
        string getEnemy();
        void setSpell(const string&);
        string getSpell();
        void swoosh() const;
};

/*
    Implementation of constructors/destructor for Wizard class 
*/

Wizard::Wizard() {
    name = "Harry Potter";
    growthrate = 1.5;
    enemy = "Voldemort";
    spell = "avada kedavra";
    cout << "step two: calling wizard constructor" << endl;
}

Wizard::Wizard(const string& n, float g, const string& e, const string& s) {
    name = n;
    growthrate = g;
    enemy = e; 
    spell = s; 
    cout << "step two: calling parametric wizard constructor" << endl;
}

Wizard::~Wizard() {
    cout << "wizard destructor being called" << endl;
}

/*
    Implementation of setter/getter methods for Wizard properties 
*/

void Wizard::setEnemy(const string& e) {
    enemy = e;
}

string Wizard::getEnemy() {
    return enemy;
}

void Wizard::setSpell(const string& s) {
    spell = s;
}

string Wizard::getSpell() {
    return spell;
}

/*
    Implementatin of service method for Wizard class  
*/

void Wizard::swoosh() const
{
    cout << name << " says, \"" << spell << "!!!!!!!!\" " << endl;
    cout << enemy << " says, \"ooooooouch!\"" << endl;
}

/*/////////////////
    MERMAID CLASS
*//////////////////

class Mermaid : public Creature
{
    private: 
        int apetite;
        double pitch;
        string lyrics;

    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service methods
        definitions 
    */

    public:
        Mermaid();
        Mermaid(const string&, float, int, double, const string&);
        ~Mermaid();
        void setApetite(int);
        int getApetite();
        void setPitch(double);
        double getPitch();
        void setLyrics(const string&);
        string getLyrics();
        void singing(); 
        void eating(); 
};

/*
    Implementation of constructors/destructor for Mermaid class 
*/

Mermaid::Mermaid() {
    name = "Ariel";
    growthrate = 2.4;
    apetite = 10;
    pitch = 4500.45;
    lyrics = "aaaaaaaaaaaaaa";
    cout << "step two: calling mermaid constructor" << endl;
}

Mermaid::Mermaid(const string& n, float g, int a, double p, const string& l) {
    name = n;
    growthrate = g;
    apetite = a; 
    pitch = p; 
    lyrics = l; 
    cout << "step two: calling parametric mermaid constructor" << endl;
}

Mermaid::~Mermaid() {
    cout << "mermaid destructor being called" << endl;
}

/*
    Implementation of setter/getter methods for Mermaid properties 
*/

void Mermaid::setApetite(int a){
    apetite = a; 
}

int Mermaid::getApetite() {
    return apetite;
}

void Mermaid::setPitch(double p) {
    pitch = p; 
}

double Mermaid::getPitch() {
    return pitch; 
}

void Mermaid::setLyrics(const string& l) {
    lyrics = l; 
}

string Mermaid::getLyrics() {
    return lyrics;
}

/*
    Implementatin of service method for Mermaid class  
*/

void Mermaid::singing() {
    cout << name <<  " is singing \"" << lyrics << "\" at ";
    cout << pitch << " Hz" << endl;
}

void Mermaid::eating() {
    cout << name << " is eating " << apetite << " men" << endl;
}

/*/////////////////
    ALIEN CLASS
*//////////////////

class Alien : public Creature {
    private:
        int limbs;
        string origin;
        string colour;
    
    /*
        Default and parametric constructor definitions, destructor
        definition, setter/getter methods for properties, service method
        definitions 
    */
    public:
        Alien();
        Alien(const string&, float, int, const string&, const string&);
        ~Alien();
        void setLimbs(int);
        int getLimbs();
        void setOrigin(const string&);
        string getOrigin();
        void setColour(const string&);
        string getColour();
        void introducing();
};

/*
    Implementation of constructors/destructor for Alien class 
*/

Alien::Alien() {
    name = "E.T";
    growthrate = 7.888;
    limbs = 2; 
    origin = "Unknown";
    colour = "grayish";
    cout << "step two: calling alien constructor" << endl;
}

Alien::Alien(const string& n, float g, int l, const string& o, const string& c) {
    name = n;
    growthrate = g;
    limbs = l; 
    origin = o; 
    colour = c; 
    cout << "step two: calling parametric alien constructor" << endl;
}

Alien::~Alien(){
    cout << "alien destructor being called" << endl;
}

/*
    Implementation of setter/getter methods for Alien properties 
*/

void Alien::setLimbs(int l) {
    limbs = l;
}

int Alien::getLimbs() {
    return limbs;
}

void Alien::setOrigin(const string& o) {
    origin = o;
}

string Alien::getOrigin() {
    return origin;
}

void Alien::setColour(const string& c) {
    colour = c;
}

string Alien::getColour() {
    return colour;
}

/*
    Implementatin of service method for Alien class  
*/

void Alien::introducing() {
    cout << "Introducing " << name << " from " << origin << ":\n";
    cout << "#Legs : " << (limbs - 1) << endl;
    cout << "#Arms : " << (limbs * 2) << endl;
    cout << "#Eyes : " << (limbs * 4) << endl; 
    cout << "Colour: " << colour << endl;
}

int main()
{ 
    cout << "--------------------------------------\n";
    cout << "\ncreating a creature\n";
    // uses default creature constructor 
    Creature c;
    c.growing();
    cout << "Personalizing creature...\n";
    // uses setter methods to assign a name and growthrate
    c.setName("Doby");
    c.setGrowthrate(0.7);
    c.growing();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a creature\n";
    // uses parametric creature constructor 
    Creature c1("Pablo", 5.55);
    c1.growing();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a wizard\n";
    // uses default constructor 
    Wizard w;
    // calls method from base class interface 
    w.growing();
    w.swoosh();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a wizard\n";
    // uses parametric constructor 
    Wizard w1("Merlin", 1.33, "Mab", "Hleap on bæc");
    // calls method from base class interface 
    w1.growing();
    w1.swoosh();
    cout << endl;
    
    cout << "--------------------------------------\n";
    cout << "\ncreating a mermaid\n";
    // uses default constructor
    Mermaid m; 
    // calls method from base class interface 
    m.growing(); 
    m.singing();
    m.eating();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating a mermaid\n";
    // uses parametric constructor 
    Mermaid m1("Melusine", 46, 4, 77777, "sleeeeeeeeeep");
    // calls method from base class interface 
    m1.growing();
    m1.singing();
    m1.eating();
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating an alien\n";
    // uses default constructor 
    Alien a;
    // calls method from base class interface 
    a.growing();
    a.introducing(); 
    cout << endl;

    cout << "--------------------------------------\n";
    cout << "\ncreating an alien\n"; 
    // uses parametric constructor 
    Alien a1("Yihiyi", 0.3, 5, "Venus", "purple");
    // calls method from base class interface 
    a1.growing();
    a1.introducing();
    cout << endl;
    cout << "--------------------------------------\n";
    cout <<"\nDESTROYING CREATURES:" << endl;
    // destructors called automatically 
    
    return 0;
} 