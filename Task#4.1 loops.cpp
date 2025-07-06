#include<iostream>
using namespace std;
int main()
{
	int num,p,i;
	cout<<"Enter a number: ";
	cin>>num;
	p = 1;
	for(i=2; i<num; i++)
	if(num % i == 0)
	{
		p = 0;
		break;
	}
	if(p == 1)
	cout<<"The number is prime "<<num;
	else
	cout<<"The number is not prime "<<num;
	return 0;
}
