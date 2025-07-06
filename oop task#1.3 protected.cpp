#include<iostream>
using namespace std;

class abc
{
	protected:
	int a;
	private:
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
//keep one data member private and one protected
//keeping one member protected and one private the output does not generate
