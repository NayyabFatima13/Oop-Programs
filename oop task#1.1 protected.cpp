#include<iostream>
using namespace std;

class abc
{
	protected:
	int a;
	
};
int main()
{
	abc z;
	z.a = 4;

	cout<<z.a<<endl;
	return 0;
}
//keeping only 1 member protected the output does not generate
