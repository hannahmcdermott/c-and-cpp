/* 
    CH-230-A
    a11_p6.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

/* 
    NOTE: ALL CONSTRUCTORS PRINT A MESSAGE ON THE SCREEN WHEN THEY ARE 
    CALLED TO SEE THE ORDER IN WHICH THEY ARE CALLED WHEN AN INSTANCE
    OF A DERIVED CLASS IS CREATED

*/

/*//////////////////////////
    SHAPE IMPLEMENTATIONS 
*///////////////////////////

//CONSTRUCTORS
Shape::Shape() {
    name = "default";  
    cout << "1. shape default constructor being called" << endl;
}

Shape::Shape(const string& n) : name(n) {
    cout << "1. shape parametric constructor being called" << endl;
}

Shape::Shape(const Shape &source) {
    name = source.name;
    cout << "1. shape copy constructor being called" << endl;
}

//METHODS
void Shape::setName(string &n) {
    name = n;
}

string Shape::getName(){
    return name;
}

void Shape::printName() const {
	cout << name << endl;
}

/*////////////////////////////////
   CENTEREDSHAPE IMPLEMENTATIONS 
*/////////////////////////////////

//CONSTRUCTORS
CenteredShape::CenteredShape() {
    x = 1;
    y = 1; 
    cout << "2. centeredshape default constructor being called" << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
    cout << "2. centeredshape parametric constructor being called" << endl;
}

CenteredShape::CenteredShape(const CenteredShape& source) : Shape(source.name) {
    x = source.x;
    y = source.y;
    cout << "2. centeredshape copy constructor being called" << endl;
}

//METHODS
void CenteredShape::setX(double nx) {
    x = nx;
}

void CenteredShape::setY(double ny) {
    y = ny;
}

double CenteredShape::getX() {
    return x;
}

double CenteredShape::getY() {
    return y;
}

void CenteredShape::move(double nx, double ny) {
    x += 5;
    y += 5;
}

/*/////////////////////////////////
   REGULARPOLYGON IMPLEMENTATIONS 
*//////////////////////////////////

//CONSTRUCTORS
RegularPolygon::RegularPolygon() {
    EdgesNumber = 3; 
    cout << "3. regularpolygon default constructor being called" << endl;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
    cout << "3. regularpolygon parametric constructor being called" << endl;
}

RegularPolygon::RegularPolygon(const RegularPolygon& source) : 
    CenteredShape(source.name, source.x, source.y) {
    EdgesNumber = source.EdgesNumber;
    cout << "3. regularpolygon copy constructor being called" << endl;
}

//METHODS
void RegularPolygon::setEdgesNumber(int nl) {
    EdgesNumber = nl;
}

int RegularPolygon::getEdgesNumber() {
    return EdgesNumber;
}

/*///////////////////////////
   CIRLCE IMPLEMENTATIONS 
*////////////////////////////

//CONSTRUCTORS
Circle::Circle() {
    Radius = 1;
    cout << "3. circle default constructor being called" << endl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) {
	Radius = r;
    cout << "3. circle parametric constructor being called" << endl;
}

Circle::Circle(const Circle& source) : CenteredShape(source.name, source.x, source.y) {
    Radius = source.Radius;
    cout << "3. circle copy constructor being called" << endl;
}

//METHODS
void Circle::setRadius(double r) {
    Radius = r;
}

double Circle::getRadius() {
    return Radius;
}

double Circle::perimeter() {
    return M_PI * Radius * 2;
}

double Circle::area() {
    return M_PI * Radius * Radius;
}


/*/////////////////////////////
   RECTRANGLE IMPLEMENTATIONS 
*//////////////////////////////

//CONSTRUCTORS
Rectangle::Rectangle() {
    width = 1;
    height = 2;
    cout << "4. rectangle default constructor being called"  << endl;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) : 
    RegularPolygon(n, nx, ny, 4) {
    width = nwidth;
    height = nheight;
    cout << "4. rectangle parametric constructor being called" << endl;
}

Rectangle::Rectangle(const Rectangle& source) : 
    RegularPolygon(source.name, source.x, source.y, source.EdgesNumber) {
    width = source.width;
    height = source.height;
    cout << "4. rectangle copy constructor being called" << endl;
}

//METHODS
void Rectangle::setWidth(double nwidth) {
    width = nwidth;
}

void Rectangle::setHeight(double nheight) {
    height = nheight;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getHeight() {
    return height;
}

double Rectangle::perimeter() {
    return (2 * width) + (2 * height);
}

double Rectangle::area() {
    return width * height;
}

/*//////////////////////////
   SQUARE IMPLEMENTATIONS 
*///////////////////////////

//CONSTRUCTORS
Square::Square() {
    side = 1;
    cout << "5. square default constructor being called" << endl;
}

Square::Square(const string& n, double nx, double ny, double nside) : 
    Rectangle(n, nx, ny, nside, nside) {
    side = nside;
    cout << "5. square parametric constructor being called" << endl;
}

Square::Square(const Square& source) :
    Rectangle(source.name, source.x, source.y, source.width, source.height) {
    side = source.side;
    cout << "5. square copy constructor being called" << endl;
}

//METHODS
void Square::setSide(double nside) {
    side = nside;
}

double Square::getSide() {
    return side;
}

double Square::perimeter() {
    return 4 * side;
}

double Square::area() {
    return side * side;
}