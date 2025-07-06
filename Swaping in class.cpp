#include<iostream>
using namespace std;

class Swapping {
    private:
        int a, b;

    public:
        Swapping(int x, int y) {
            a = x;
            b = y;
        }

        void swap() {
            int temp = a;
            a = b;
            b = temp;
        }

        void display() {
            cout << "After swapping:" << endl;
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main() {
    int x, y;

    
    cout << "Enter two integers: ";
    cin >> x >> y;

    
    Swapping obj(x, y);
    cout << "Before swapping:" << endl;
    cout << "a = " << x << endl;
    cout << "b = " << y << endl;


    obj.swap();


    obj.display();

    return 0;
}

