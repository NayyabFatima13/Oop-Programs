#include <iostream>
using namespace std;

class NumberAdder {
private:
    int sum;

public:
    NumberAdder() {
        sum = 0;
    }

    void addNumbers() {
        int num;
        int choice;

        while (choice <= 5) 
		{
            cout << "Enter a number: ";
            cin >> num;

            sum += num;

        } ;
    }

    int getSum() {
        return sum;
    }
};

int main() {
    NumberAdder adder;
    adder.addNumbers();

    cout << "Sum of the numbers entered: " << adder.getSum() << endl;

    return 0;
}
