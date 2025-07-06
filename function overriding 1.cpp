#include <iostream>
using namespace std;

class parent_class
{
public:
    void display_message()
    {
        cout << "I am the base class function"<<endl;
    }
};

class derived_class : public parent_class
{
public:
    void display_message()
    {
        cout << "I am the derived class function"<<endl;
    }
};

int main()
{
    derived_class obj;
    obj.display_message();

    return 0;
}

//concept
//function overriding
//take same method function with same parameters in derived class equivalent to function overloading

