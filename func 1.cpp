#include <iostream>
using namespace std;

int add(int a, int b)         //Function definition
{      
	a = 5, b = 2;
	int result;
	result = add(a, b);   //Function call
	return a+b;
}

int main() 
{
	cout<<result;
	return 0;
}

