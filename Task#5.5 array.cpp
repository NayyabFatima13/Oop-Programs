#include<iostream>
using namespace std;
int main () 
{
	char name[4][10];
	int monthlysalary[4];
	int i;
	
	for (i=0; i<4; i++) 
	{
		cout<<"Enter the name of employee: ";
		cin>>name[i];
		cout<<"Enter the monthly salary: ";
		cin>>monthlysalary[i];
	}
	cout<<"Name"<<"\t\t"<<"salary"<<"\t\t"<<"Tax details"<<endl;
	
	for (i=0; i<4; i++) 
	if (monthlysalary[i] * 12 >= 250000) 
	{
		cout<<name[i]<<"\t\t"<<monthlysalary[i]<<"\t\t"<<"Tax to be paid! "<<endl;
	}
	else 
	{
		cout<<name[i]<<"\t\t"<<monthlysalary[i]<<"\t\t"<<"No Tax "<<endl;
	}
	return 0;
}
