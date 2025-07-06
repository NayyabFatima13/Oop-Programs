#include<iostream>
using namespace std;

class abc
{
	public:
	int a;
	protected:
	int b;
	
};
int main()
{
	abc z;
	z.a = 4;
	z.b = 5;
	
	cout<<z.a<<endl;
	cout<<z.b<<endl;

	return 0;
}
//keep one data member public and one protected
//keeping only 1 member protected the output does not generate
