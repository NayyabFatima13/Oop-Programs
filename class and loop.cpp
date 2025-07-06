#include <iostream>
using namespace std;

class FactorialCalculator  //FactorialCalculator---------class name
{
private:
    int number;

public:
    FactorialCalculator(int num) 
	{
        number = num;
    }

    int calculateFactorial()  //member function inside class
	{
        int factorial = 1;
        int i = 1;

        while (i <= number) 
		{
            factorial *= i;
            i++;
        }

        return factorial;
    }
};

int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    FactorialCalculator cal(num); //cal---------object name
    
    int result = cal.calculateFactorial();

    cout << "The factorial of " << num << " is: " << result << endl;

    return 0;
}
