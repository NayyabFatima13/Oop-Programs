#include<iostream>
using namespace std;
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int main()
{
	cout<<"Addition"<<"\t"<<addition(8,4);
	cout<<"\n"<<"Subtraction"<<"\t"<<subtraction(8,4);
	cout<<"\n"<<"Multiplication"<<"\t"<<multiplication(8,4);
	cout<<"\n"<<"Division"<<"\t"<<division(8,4);
	return 0;
}
int addition(int x, int y)
{
	return x + y;
}
int subtraction(int x, int y)
{
	return x - y;
}
int multiplication(int x, int y)
{
	return x * y;
}
int division(int x, int y)
{
	return x / y;
}
