#include<iostream>
using namespace std;
class parent
{
	public:
	int num;
	int display(int n)
	{
		num = n;
		if(num >= 0 )
	{
		cout<<"Positive number";}
	else
	{
		cout<<"Negative number";}	
	}
};
class child : public parent
{
	public:
	int display(int n)
	{
		num = n;
		if(num >= 0 )
	{
		cout<<"Positive number";}
	else
	{
		cout<<"Negative number";}	
	}
};
int main()
{
	child obj;    //create object
	int x;
	cout<<"Enter the value: "<<endl;
	cin>>x;
	obj.display(x);
	return 0;
	
}

