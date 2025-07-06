#include <iostream>
using namespace std;

// An impure function: it checks whether a number is even or odd
int Even(int number) 
{
    return (number % 2 == 0);
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Calling the impure function
    if (Even(num)) 
	{
        cout << num << " is even." << endl;
    } else 
	{
        cout << num << " is odd." << endl;
    }

    return 0;
}

