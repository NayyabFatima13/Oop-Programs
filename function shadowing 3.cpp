#include<iostream>
using namespace std;
class base
{
	public:
	int num;
	int display(int n)
	{
		num = n;
		if(num % 2 == 0 )
	{
		cout<<"Even number";}
	else
	{
		cout<<"Odd number";}	
	}
};
class derived : public base
{
	public:
	int display(float m)
	{
		num = m;
		if(num % 2 == 0 )
	{
		cout<<"Even number";}
	else
	{
		cout<<"Odd number";}	
	}
};
int main()
{
	derived obj;    //create object
	int x;
	cout<<"Enter the value: "<<endl;
	cin>>x;
	obj.display(x);
	return 0;
	
}

