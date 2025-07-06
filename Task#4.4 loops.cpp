#include<iostream>
using namespace std;
int main()
{
	int min,value,i;
	cout<<"Enter a number: "<<endl;
	cin>>min;

	for(i=1; i<5; i++)
	{
		cout<<"Enter a number: "<<endl;
		cin>>value;
		if(value < min)
		min = value;
	}
	cout<<"The minimum number is: "<<min<<endl;
	return 0;
}
