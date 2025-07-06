#include<iostream>
using namespace std;

class table
{
	private:
		int a,b,c;
	public:
		table()
		{
			a = b = c = 0;
		}
		table(int x,int y)
		{
			a = x;
			b = y;
		}
		table(int z)
		{
			c = z;
		}
	void display()
	{
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;	
	}	
};
int main()
{
	table obj1;
	table obj2(10,20);
	table obj3(30);
	
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
//copy(constructor overloading)

