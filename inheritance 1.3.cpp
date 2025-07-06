#include <iostream>
using namespace std;

class Animal   // base class
{    
   public:
    void eat() 
	{
        cout << "I can eat!" << endl;
    }
    void sleep() 
	{
        cout << "I can sleep!" << endl;
    }
};
class Dog : public Animal   // derived class
{
   public:
    void bark() 
	{
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() 
{
    Dog obj;  // Create object of the Dog class

    obj.eat();     // Calling members of the base class
    obj.sleep();
    obj.bark();    // Calling member of the derived class

    return 0;
}
