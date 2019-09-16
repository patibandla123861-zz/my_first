#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
class fourWheeler: public Vehicle 
{  public: 
    fourWheeler() 
    { 
      cout<<"Objects with 4 wheels are vehicles"<<endl; 
    } 
}; 
class Car: public fourWheeler{ 
   public:
     Car() 
     { 
       cout<<"Car has 4 Wheels"<<endl; 
     }
};
  
// main function 
int main()
{     
    Car obj; 
f();
    return 0; 
}
void f()
{
    char *p;
    *p = 0;
}

