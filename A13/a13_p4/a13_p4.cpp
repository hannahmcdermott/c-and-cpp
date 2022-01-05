/* 
    CH-230-A
    a13_p4.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
    int x;
    
    public:
        A() { cout << "A constructor" << endl;}
        void setX(int i) {x = i;}
        void print() { cout << x << endl; }
};
 
class B:  virtual public A
{
    public:
        B()  { setX(10); cout << "B constructor" << endl; }
};
 
class C:  virtual public A  
{
    public:
        C()  { setX(20); cout << "C constructor" << endl; }
};
 
class D: public B, public C {
    public:
        D() {}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/* 

The following was the only compilation error:

a13_p4.cpp:37:7: error: non-static member 'print' found in multiple base-class subobjects of type 'A':
    class D -> class B -> class A
    class D -> class C -> class A
    d.print();
      ^
a13_p4.cpp:16:8: note: member found by ambiguous name lookup
  void print() { cout << x << endl; }

Base class A is an indirect base class to the derived class D more than once because 
D is derived from B and C, both derived from A. Therefore:

                  A
                int x
                /   \
               /     \
              B       C
            int x   int x 
          setX(10) setX(20)
               \     /
                \   /
                  D  
                 The    

When an instance of D is created the compiler does not know which path to take:
class D -> class B -> class A
class D -> class C -> class A 

Class B has an empty constructor: B() { setX(10); }, class C also has an empty 
constructor:  C()  { setX(20); }, but D has no constructors at all. Therefore it 
is ambiguous whether an instance of D should take 10 as a value or 20 as a value. 

One way to solve this is to make the inheritance of B and C virtual, i.e:

class B:  virtual public A {...};
class C:  virtual public A {...};

Then, when an instance of D is created, only one path is taken in the hierarchy tree
which is the order in which D inherits from classes B and C. So if class D is defined as:

class D: public B, public C {};

Then the order in which the constructors are called is A, B, C, and d.print() will print 20 
because C is the last constructor called. 

If class D is defined as: 

class D: public C, public B {};

Then the order in which the constructor are called is A, C, B, and d.print() will print 10 
because B is the last constructor called. 

*/
