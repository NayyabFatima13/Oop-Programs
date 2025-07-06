#include<iostream>
using namespace std;
int main()
{
	int row,space,column;
	for(row=1; row<=4; row++)
	{
		for(space=1; space<=4-row; space++) 
		{
			cout<<" ";
		}
		for(column=1; column<=row*2-1; column++) 
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	for(row=3; row>=1; row--)
	{  
		for(space=1; space<=4-row; space ++) 
		{
			cout<<" ";
		}
		for(column=1; column<=2*row-1; column++) 
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}                                                              
