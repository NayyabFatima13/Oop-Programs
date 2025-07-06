#include <iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b) // A pure function: it takes two integers as input and returns their sum
{
    return a + b; 
}

int main() 
{
    int x = 5;
    int y = 3;

    int result = add(x, y);  // Calling the pure function

    cout << "The sum of " << x << " and " << y << " is " << result << std::endl;
    return 0;
}
