#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i, max;
	for(i=0; i<10; i++)
	{
		cout<<"Enter the value: ";
		cin>>arr[i];
	}
	max = arr[0];
	for(i=0; i<10; i++)
	if(max < arr[i])
	max = arr[i];
	cout<<"-------------------"<<endl;
	cout<<"Maximum value is: "<<max;
	return 0;
}
