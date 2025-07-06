#include<iostream>
using namespace std;
class abc
{
	public:
		int a,b,temp;
	void setswap()
	{
		cout<<"Enter a = ";
		cin>>a;
		cout<<"Enter b = ";
		cin>>b;
	}
	void getswap()
	{
	    temp = a;
		a = b;
		b = temp;
			
		cout<<"After swapping "<<endl;
		cout<<"a = "<< a<<" ,b = "<< b<< endl;
	}
};
int main()
{
	abc obj;
	obj.setswap();
	obj.getswap();
	return 0;
}
