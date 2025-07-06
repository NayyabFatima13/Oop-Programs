#include<iostream>
using namespace std;

class abc
{
	private:
		int u,v,w,x;
	public:
		abc(int a,int b)  //constructor with two parameters
		{
			u = v = a;
			w = x = b;
		}
	
		void display() //constructor mai output dikhane k liye void display use hota hai
		{
			cout<<" u = "<< u <<" and "<<" v = "<< v <<endl;
			cout<<" w = "<< w <<" and "<<" x = "<< x <<endl;
		}
	
};
int main()
{
	abc c2(10,20);
	c2.display();
	return 0;
}
//agr constructor mai parameter liye hain to uski value hum main() ki body mai hi dhe sakte hain 
//parameterized
