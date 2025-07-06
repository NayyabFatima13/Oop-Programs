#include<iostream>
using namespace std;
int main () 
{
	float num,sum;
	float avg,min,max;
	int count;
	sum = 0.0;
	count = 0;
	cout<<"Enter a positive number: ";
	cin>>num;
	
	while(num <= 10)
	{
		sum = sum + num;
		count ++;
		cout<<"Enter a positive number: ";
		cin>>num;
	
		if(num > max)
		max = num;
		else if(num < min)
		min = num;
		avg = sum / count;
		cout<<"You entered "<< count<<" positive numbers"<<endl;
		cout<<"Average = "<<avg<<endl;
		cout<<"Maximum = "<<max<<endl;
		cout<<"Minimum = "<<min<<endl;
	}
	return 0;	
}
