#include <iostream>
using namespace std;

class Math // Base class 1 containing the marks in math subject.
{
    public: 
	int mathMarks = 99;
};

class English // Base class 2 containing the marks in english subject.
{
    public: 
	int engMarks = 90;
};

class Result: public Math, public English // Derived class.
{
    public: 
	void total() 
	{
        int result;
        // Accessing the data members of the base classes.
        result = (mathMarks + engMarks) / 2;
        cout << " The average marks of math and english is: " << result;
    }
};

int main() {
    // Create an object of the derived class.
    Result obj;
    // Call total() function of the derived class.
    obj.total(); 
    return 0;
}

