#include<iostream>
using namespace std;

class A
{
	public:
	int x(int a)
	{
	  cout << "a = "<< a << endl;
	}
	int x(int a, int b)
	{
	    cout << "sum = " << (a + b) << endl;
	}
	int x(int a, int b, int c)
	{
		cout << "sum = " << (a + b + c) << endl;	
	}	
	int x(int a, int b, int c, int d)
	{
		cout << "sum = " << (a + b + c + d) << endl;	
	}	
};
int main()
{
	A obj;
	obj.x(3);
	obj.x(3,7);
	obj.x(10,7,2);
    obj.x(5,9,7,2);
 
    return 0;
}
