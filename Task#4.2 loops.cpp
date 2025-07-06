#include<iostream>
using namespace std;
int main () 
{
	int number;
	int a = 0;
	int n = 0;
	int c = 0;
	cout<<" Enter a positive number: ";
	cin>>number;
	while(n<=number) 
	{
	if (n % 2 == 0) 
	{
	a = a + n;
	}
	else if (n % 2 != 0) 
	{
	c = c + n;
	}
	n++;
	}
	cout<<" Sum of even numbers: "<<a<<endl;
	cout<<" Sum of odd numbers: "<<c<<endl;
	return 0;
}


