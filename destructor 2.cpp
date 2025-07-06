#include <iostream>
using namespace std;
 
class Animal {
public:
    // User-Defined Constructor
    Animal() { cout << "Constructor executed"; }
 
    // User-Defined Destructor
    ~Animal() { cout << "\nDestructor executed"; }
};
main()
{
    Animal t;
 
    return 0;
}
