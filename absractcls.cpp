#include<iostream>
using namespace std; 
#include<stdio.h>  
/*class Base 
{ 
   int x; 
public: 
    virtual void fun() = 0; 
    int getX() { return x; } 
}; 
  
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "fun() called"; } 
}; 
  
int main(void) 
{ 
    Derived d; 
    d.fun(); 
    return 0; 
}*/
  


/*class Base 
{ 
public: 
    virtual void show() = 0; 
}; 
  
class Derived: public Base 
{ 
public: 
    void show() { cout << "In Derived \n"; } 
}; 
  
int main(void) 
{ 
    Base *bp = new Derived(); 
    bp->show(); 
    return 0; 
}*/




/*class Base 
{ 
public: 
    virtual void show() = 0; 
}; 
  
class Derived : public Base { }; 
  
int main(void) 
{ 
  Derived d; 
  return 0; 
}*/



/*class Base 
{ 
protected: 
   int x; 
public: 
  virtual void fun() = 0; 
  Base(int i) { x = i; } 
}; 
  
class Derived: public Base 
{ 
    int y;
public: 
    Derived(int i, int j):Base(i) { y = j; } 
    void fun() { cout << "x = " << x << ", y = " << y; } 
}; 
  
int main(void) 
{ 
    Derived d(4, 5); 
    d.fun(); 
    return 0; 
}*/



/*
class Person { 
   // Data members of person  
public: 
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   } 
}; 
  
class Faculty : public Person { 
   // data members of Faculty 
public: 
    Faculty(int x):Person(x)   { 
       cout<<"Faculty::Faculty(int ) called"<< endl; 
    } 
}; 
  
class Student : public Person { 
   // data members of Student 
public: 
    Student(int x):Person(x) { 
        cout<<"Student::Student(int ) called"<< endl; 
    } 
}; 
  
class TA : public Faculty, public Student  { 
public: 
    TA(int x):Student(x), Faculty(x)   { 
        cout<<"TA::TA(int ) called"<< endl; 
    } 
}; 
  
int main()  { 
    TA ta1(30); 
} */



class base { 
  public: 
    base()      
    { cout<<"Constructing base \n"; } 
virtual~base() 
    { cout<<"Destructing base \n"; }      
}; 
  
class derived: public base { 
  public: 
    derived()      
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
  
int main(void) 
{ 
  derived *d = new derived();   
  base *b = d; 
  delete b; 
  getchar(); 
  return 0; 
} 

