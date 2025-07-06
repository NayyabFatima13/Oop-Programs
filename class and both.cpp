#include <iostream>
using namespace std;

class NumberClassifier {
private:
    int evenSum;
    int oddSum;

public:
    NumberClassifier() {
        evenSum = 0;
        oddSum = 0;
    }

    void classifyNumbers() {
        int num;
        char choice;

        cout << "Enter numbers. Type 'q' to quit." << endl;

        while (true) {
            cout << "Enter a number: ";
            cin >> num;

            if (cin.fail()) {
                cout << "Invalid input. Exiting..." << endl;
                break;
            }

            if (num % 2 == 0) {
                evenSum += num;
            } else {
                oddSum += num;
            }
        }

        cout << "Sum of even numbers: " << evenSum << endl;
        cout << "Sum of odd numbers: " << oddSum << endl;
    }
};

int main() {
    NumberClassifier classifier;
    classifier.classifyNumbers();

    return 0;
}

