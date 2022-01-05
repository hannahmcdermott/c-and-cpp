/* 
    CH-230-A
    a13_p5.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A 
{
  int x;
public:
  A(int i) { x = i; cout << "A constructor" << endl; }
  void print() { cout << x << endl; }
};
 
class B: virtual public A
{
public:
  B(): A(10) { cout << "B constructor" << endl; }
};
 
class C: virtual public A 
{
public:
  C(): A(10) { cout << "C constructor" << endl; }
};
 
class D: public B, public C 
{
public:
  //D() : A(30) { cout << "D constructor" << endl; }
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*
a13_p5.cpp:31:7: error: implicit default constructor for 'D' must explicitly initialize 
  the base class 'A' which does not have a default constructor
class D: public B, public C {
      ^
a13_p5.cpp:36:7: note: in implicit default constructor for 'D' first required here
    D d;
      ^
a13_p5.cpp:11:7: note: 'A' declared here
class A

The reason for this error is that when an instance of D, a derived class, is created, 
the base class has to be constructed first therefore we have to specify a constructor for 
D. 

*/