#include<iostream>
using namespace std;
int main()
{
	double a = 10;
	double b = 20;
	double temp;
	cout<<" before swapping: ";
	cout<< "a = "<<a<<" b = "<<b<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<" after swapping: ";
	cout<<" a = "<<a<<" b = "<<b<<endl;
	return 0;
}
