#include <iostream>
using namespace std;
 
void swap(int a, int b) //here a and b are formal parameters
{ 
    b = a + b;
    a = b - a;
    b = b - a;
    
	cout<<"\nAfter swapping inside Swap:\n ";  
	cout<<"a = "<<a;
	cout<<"\tb = "<<b;
	return;
}
int main()
{
	int a,b;
	cout<<"Enter the two numbers to be swapped: "; cin>>a>>b;
	     
	cout<<"a = "<<a;
	cout<<"\tb = "<<b;
	swap(a,b);
	cout<<"\nAfter swapping inside Main:\n ";   
	cout<<"a = "<<a;   
	cout<<"\tb = "<<b;
}
//function (pass by value)
