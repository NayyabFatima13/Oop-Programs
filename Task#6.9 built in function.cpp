#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,r;
	cout<<"Enter first double value: ";
	cin>>a;
	cout<<"Enter second double value: ";
	cin>>b;
	r = fmod(a,b);
	cout<<"The result of fmod() = "<<r<<endl;
	return 0;
}
