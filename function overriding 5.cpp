#include <iostream>
using namespace std;

class base
{
	public:
	int number;
    int calculateFactorial(int num)  //member function inside class
	{
		number = num;
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
class derived : public base
{
	public:
	int number;
    int calculateFactorial(int num)  //member function inside class
	{
		number = num;
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
	int result;
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    derived obj; //cal---------object name
    result = obj.calculateFactorial(num);
    cout << "The factorial of " << num << " is: " << result << endl;

    return 0;
}

