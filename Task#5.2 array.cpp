#include<iostream>
using namespace std;
int main()
{
	int number[10] = {5,10,15,20,25,30,35,40,45,50};
	cout<<number[0]<<endl;
	cout<<number[1]<<endl;
	cout<<number[2]<<endl;
	cout<<number[3]<<endl;
	cout<<number[4]<<endl;
	cout<<number[5]<<endl;
	cout<<number[6]<<endl;
	cout<<number[7]<<endl;
	cout<<number[8]<<endl;
	cout<<number[9]<<endl;
	//changing the number at index 3 from 20 to 21
	cout<<"---"<<endl;
	number[3] = 21;
	cout<<number[3]<<endl;
	//changing the number at index 5 from 30 to 32
	cout<<"---"<<endl;
	number[5] = 32;
	cout<<number[5]<<endl;
	//changing the number at index 7 from 40 to 43
	cout<<"---"<<endl;
	number[7] = 43;
	cout<<number[0]<<endl;
	cout<<number[1]<<endl;
	cout<<number[2]<<endl;
	cout<<number[3]<<endl;
	cout<<number[4]<<endl;
	cout<<number[5]<<endl;
	cout<<number[6]<<endl;
	cout<<number[7]<<endl;
	cout<<number[8]<<endl;
	cout<<number[9]<<endl;
	return 0;
}
