#include <iostream>
using namespace std;

class NumberChecker //NumberChecker------class name
{
private:
    int number;
public:
    NumberChecker(int num) 
	{
        number = num;
    }

    void checkEvenOdd() 
	{
        if (number % 2 == 0) 
		{
            cout << number << " is even." << endl;
        } 
		else 
		{
            cout << number << " is odd." << endl;
        }
    }
};

int main() 
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    NumberChecker checker(num); //checker-------object name
    checker.checkEvenOdd();

    return 0;
}
