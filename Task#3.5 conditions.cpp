#include<iostream>
using namespace std;
int main()
{
	int week;
	cout<<"Enter the number of the day: ";
	cin>>week;
	if(week==1)
	cout<<"Monday";
	if(week==2)
	cout<<"Tuesday";
	if(week==3)
	cout<<"Wednesday";
	if(week==4)
	cout<<"Thursday";
	if(week==5)
	cout<<"Friday";
	if(week==6)
	cout<<"Saturday";
	if(week==7)
	cout<<"Sunday";
	else
	cout<<"The number is invalid";
	return 0;
}
