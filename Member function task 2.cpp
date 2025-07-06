#include <iostream>
using namespace std;

class Car                      // The class
{       
	public:                    // Access specifier
	int speed(int maxSpeed);   // Method/function declaration
};

// Method/function definition outside the class
int Car::speed(int maxSpeed) 
{
	return maxSpeed;
}

int main() 
{ 
	Car myObj;                  // Create an object of MyClass
	cout << myObj.speed(200);   // Call the method
	return 0;
}
