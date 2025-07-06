#include <iostream>
using namespace std;

int main() 
{
	int number[2][3] = {10,20,30,40,50,60};
	cout<<"The arrays before changing the value:"<<endl;
	cout<<number[0][0]<<endl;
	cout<<number[0][1]<<endl;
	cout<<number[0][2]<<endl;
	cout<<number[1][0]<<endl;
	cout<<number[1][1]<<endl;
	cout<<number[1][2]<<endl;
	cout<<"--------------------"<<endl;
	
	cout<<"Changing the values: "<<endl;
	//changing the number from 20 to 25
	number[0][1]= 25;
	cout<<number[0][1]<<endl;
	//changing the number from 40 to 45
	cout<<"---"<<endl;
	number[1][0] = 45;
	cout<<number[1][0]<<endl;
	//changing the number from 60 to 65
	cout<<"---"<<endl;
	number[1][2] = 65;
	cout<<number[1][2]<<endl;
	cout<<"--------------------"<<endl;
	
	cout<<"The arrays after changing the value:"<<endl;
	cout<<number[0][0]<<endl;
	cout<<number[0][1]<<endl;
	cout<<number[0][2]<<endl;
	cout<<number[1][0]<<endl;
	cout<<number[1][1]<<endl;
	cout<<number[1][2]<<endl;
	
	return 0;
}
