#include <iostream>
using namespace std;
class Base 
{
public:
    virtual void display() 
	{
        std::cout << "Display from Base" << std::endl;
    }
    virtual void show() 
	{
        std::cout << "Show from Base" << std::endl;
    }
};

class Derived : public Base 
{
public:
    void display() override 
	{ 
        std::cout << "Display from Derived" << std::endl;
    }
    void show(int x) 
	{ 
        std::cout << "Show from Derived with " << x << std::endl;
    }
};

int main() 
{
    Base b;
    Derived d;

    Base* ptr = &d;
    ptr->display(); 
    ptr->show(); 

    d.show(42); 
    return 0;
}

