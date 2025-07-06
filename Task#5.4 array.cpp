#include<iostream>
using namespace std;
int main () 
{
	int rollno[5];
	int marks[5];
	int i, max;
	
	for (i=0; i<5; i++)
	{
	cout<<"Enter the roll no of student "<<i+1<<":\t";
	cin>>rollno[i];
	cout<<"Enter the marks of student "<<i+1<<":\t";
	cin>>marks[i];
	}
	
    max = 0;
	for (i=1; i<5; i++)
	if(marks[i] > marks[max])
	max = i;
	
	cout<<"The details of student with highest marks: "<<endl;
	cout<<"Roll No: "<<rollno[max]<<endl;
	cout<<"Marks: "<<marks[max];
	
	return 0;
}

