#include<iostream>
using namespace std;

class abc
{
	private:
		int x,y;
	public:
		abc() //constructor 1 with no argument
		{
			x = y = 0;
		}
		abc(int a)  //constructor 2 with one argument
		{
			x = y = a;
		}
		abc(int a,int b)  //constructor 3 with two argument
		{
			x = a;
			y = b;
		}	
		void display() //constructor mai output dikhane k liye void display use hota hai
		{
			cout<<" x = "<< x <<" and "<<" y = "<< y <<endl;
		}
	
};
int main()
{
	abc c1;
	abc c2(10);
	abc c3(10,20);
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
//private ki value set or get k sath bhi ati hai
//private ki value constructor k sath bhi ati hai

