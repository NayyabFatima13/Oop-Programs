#include<iostream>
using namespace std;

//function
int show (int arr[])
{
	int j;
	int sum=0;
	float average=0.0;
	
	for(j=0; j<5; j++)
	{
	sum = sum + arr[j];
	average = sum/5.0;
	}
	
	cout<<"\nSum is: "<<sum<<endl;
	cout<<"Average is: "<<average<<endl;
}

//main function
int main ()
{
	int num[5];
	cout<<"Enter five integers: "<<endl;
	for(int i=0; i<5; i++)
	cin>>num[i];
	show(num);
	return 0;
}

