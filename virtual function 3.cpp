#include <iostream>
using namespace std;
 
class base {
public:
    virtual void print() { cout << "print base class\n"; }
 
    void show() { cout << "show base class\n"; }
};
 
class derived : public base {
public:
    void print() { cout << "print derived class\n"; }
 
    void show() { cout << "show derived class\n"; }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at runtime
    bptr->print();
 
    // Non-virtual function, binded at compile time
    bptr->show();
 
    return 0;
}
// concept of Virtual Functions
