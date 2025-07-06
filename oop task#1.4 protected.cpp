#include<iostream>
using namespace std;

class abc
{
	public:
	int a;
	protected:
	int b;
	private:
	int c;
	
};
int main()
{
	abc z;
	z.a = 4;
	z.b = 5;
	z.c = 6;
	
	cout<<z.a<<endl;
	cout<<z.b<<endl;
	cout<<z.c<<endl;

	return 0;
}
//take 1 data member private
//take 1 data member public
//take 1 data member protected
