#include<iostream>
using namespace std;

class abc
{
	private:
		int x,y;
	public:
		abc(int a)  //constructor with one parameter
		{
			x = y = a;
		}
		void display() //constructor mai output dikhane k liye void display use hota hai
		{
			cout<<" x = "<< x <<" and "<<" y = "<< y <<endl;
		}
	
};
int main()
{
	abc c1(10);
	c1.display();
	return 0;
}
//parameterized
