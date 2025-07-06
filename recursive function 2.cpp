#include <iostream>
using namespace std;
// Recursive function to swap the values of two integers
void swapIntegers(int &a, int &b) 
{
    if (a == b) 
	{
        return;
    }
    // Recursive case: swap the values
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() 
{
    int num1, num2;
    std::cout << "Enter two integers to swap: ";
    std::cin >> num1 >> num2;

    // Print the values before swapping
    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Calling the recursive function to swap the values
    swapIntegers(num1, num2);

    // Print the values after swapping
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    return 0;
}

