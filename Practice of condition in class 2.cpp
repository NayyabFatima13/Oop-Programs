#include<iostream>
using namespace std;

class A
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
int main()
{
	A obj;    //create object
	int x;
	cout<<"Enter the value: "<<endl;
	cin>>x;
	obj.display(x);
	return 0;
	
}
