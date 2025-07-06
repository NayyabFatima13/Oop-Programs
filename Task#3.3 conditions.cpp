#include<iostream>
using namespace std;
int main () 
{
	int a, b, c;
	cout<<"Enter the number: "<<"\n";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"Maximum number is: "<<a<<endl;
	else if(b>a && b>c)
	cout<<"Maximum number is: "<<b<<endl;
	else
	cout<<"Maximum number is: "<<c<<endl;
	return 0;
}

