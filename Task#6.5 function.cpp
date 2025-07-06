#include<iostream>
using namespace std;

//function
int swap (int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

//main function
int main ()
{
	int a, b;
	cout<<"Enter an integer: ";
	cin>>a;
	cout<<"Enter an integer: ";
	cin>>b;
	cout<<"Values before swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Swapping the values....."<<endl;
	cout<<"------------------------"<<endl;
	swap (a, b);
	cout<<"Values after swapping: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	return 0;
}

