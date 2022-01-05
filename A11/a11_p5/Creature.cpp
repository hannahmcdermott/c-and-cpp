/* 
    CH-230-A
    a11_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Creature.h"


using namespace std;

/*//////////////////////////
    BASE CLASS: CREATURE 
*///////////////////////////

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

/*///////////////////////////////
    DERIVED CLAS: WIZARD CLASS
*////////////////////////////////

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

/*////////////////////////////////
    DERIVED CLAS: MERMAID CLASS
*/////////////////////////////////

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

/*///////////////////////////////
    DERIVED CLAS: ALIEN CLASS
*////////////////////////////////

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