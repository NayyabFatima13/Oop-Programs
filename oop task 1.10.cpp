#include<iostream>
using namespace std;

class abc
{
	public:
	int a;
	public:
	int b;
	public:
	int c;
	protected:
	int d;
};
int main()
{
	abc z;
	z.a = 4;
	z.b = 5;
	z.c = 6;
	z.d = 7;
	cout<<z.a<<endl;
	cout<<z.b<<endl;
	cout<<z.c<<endl;
	cout<<z.d<<endl;
	return 0;
}
//By taking 4 data members
//keeping only 1 member protected the output does not generate
