#include <iostream>
using namespace std;

class A {
public:
    int b, e;

    void abc(int d, int newE) {
        b = d;
        e = newE; 
    }

    A operator+() {
        return *this;
    }
};

int main() {
    A obj;
   
    obj.abc(10, 20);

    A newObj = +obj;

    cout << "New Object b: " << newObj.b << endl;
    cout << "New Object e: " << newObj.e << endl;

    return 0;
}
