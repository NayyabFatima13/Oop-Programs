#include<iostream>
using namespace std;

class abc
{
	private:
		int u,v,w,x;
	public:
		abc(int a,int b,int c,int d)  //constructor with 4 parameters
		{
			u = a;
			v = b;
			w = c;
			x = d;
		}
		void display() //constructor mai output dikhane k liye void display use hota hai
		{
			cout<<" u = "<< u <<" and "<<" v = "<< v <<endl;
			cout<<" w = "<< w <<" and "<<" x = "<< x <<endl;
		}
		
};
int main()
{
	abc cc2(10,20,30,40);
	cc2.display();
	return 0;
}
//parameterized
