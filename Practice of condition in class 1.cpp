#include<iostream>
using namespace std;

class A
{
	public:
	int num;
	int display(int n)
	{
		num = n;
		if(num % 2 == 0 )
	{
		cout<<"Even numbers";}
	else
	{
		cout<<"Odd numbers";}	
	}
	
};
int main()
{
	A obj;    //create object
	int x;
	cout<<"Enter the value: "<<endl;
	cin>>x;
	obj.display(x);
	return 0;
	
}
