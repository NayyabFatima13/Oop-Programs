#include<iostream>
using namespace std;

class Vehicle  // Base class
{
  public:
    string brand = "Ford";
    void honk()
	{
      cout << "Tuut, tuut! \n" ;
    }
};

class Car: public Vehicle  // Derived class
{
  public:
    string model = "Mustang";
};

int main() 
{
  Car obj;
  //obj.honk();
  cout <<obj.brand<<" + "<<obj.model;
  return 0;
}
//simple concept  inhertance

//base class (parent) - the class being inherited from
//To inherit from a class, use the : symbol.
//In the example above, the Car class (child) inherits the attributes and methods from the Vehicle class (parent)
//It is useful for code reusability:reuse attributes and methods of an existing class when you create a new class.
