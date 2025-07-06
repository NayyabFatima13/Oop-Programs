#include<iostream>
using namespace std;

class abc {
private:
    int a, b;

public:
    // Constructor with parameters
    abc(int f, int i) {
        a = f;
        b = i;
    }

    // Overloading the unary minus operator
    abc operator-() {
        return abc(-a, -b);
    }

    // Display function
    void display() { 
        cout << "A: " << a << " B: " << b << endl;
    }
};

int main() {
    abc m1(6, 9), m2(-5, -3);
    m1.display();
    m2 = -m1; // This will use the overloaded unary minus operator
    m2.display();
    return 0;
}
