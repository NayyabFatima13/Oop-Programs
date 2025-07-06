#include<iostream>
using namespace std;

class Swapping 
{
    private:
        int a,b;
    public:
        Swapping(int x,int y) 
		{
            a = x;
            b = y;
        }
        void setA(int x) {
            a = x;
        }
        void setB(int y) {
            b = y;
        }
        int getA() const {
            return a;
        }
        int getB() const {
            return b;
        }
        void swap() {
            int temp = a;
            a = b;
            b = temp;
        }
        void display() const 
		{
            cout << "After swapping:" << endl;
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main() {
    int x, y;
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;
    
    Swapping obj(x, y);
    cout << "Before swapping:" << endl;
    cout << "a = " << obj.getA() << endl;
    cout << "b = " << obj.getB() << endl;
    obj.swap();
    obj.display();
    return 0;
}

