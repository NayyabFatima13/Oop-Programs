#include<iostream>
using namespace std;

class MyClass  // Base class
{
  public:
    void myFunction() 
	{
      cout << "Some content in parent class."<<endl;
    }
};
class MyOtherClass  // Another base class
{
  public:
    void myOtherFunction() 
	{
      cout << "Some content in another class."<<endl;
    }
};

class MyChildClass: public MyClass, public MyOtherClass // Derived class
{
	
};

int main() 
{
  MyChildClass Obj;
  Obj.myFunction();
  Obj.myOtherFunction();
  return 0;
}

//concept of multiple inheritance
//A class can also be derived from more than one base class, using a comma-separated list:
