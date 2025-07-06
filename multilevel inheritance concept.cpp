#include<iostream>
using namespace std;

class MyClass  // Base class (parent)
{
  public:
    void myFunction() 
	{
      cout << "Some content in parent class."<<endl;
    }
};

class MyChild: public MyClass  // Derived class (child)
{
	
};
class MyGrandChild: public MyChild  // Derived class (grandchild)
{
	
};

int main() 
{
  MyGrandChild Obj;
  Obj.myFunction();
  return 0;
}

//concept of multi-level inheritance
//A class can also be derived from one class, which is already derived from another class
//In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass)
