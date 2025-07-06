#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b,c,d;
	public:
		abc(int w,int x,int y,int z)
		{
			a = w;
			b = x;
			c = y;
			d = z;
		}
		int add()
		{
			return a+b+c+d;
		}
		int sub()
		{
			return a-b-c-d;
		}
		int multi()
		{
			return a*b*c*d;
		}
		int div()
		{
			return a/b/c/d;
		}
		void display()
		{
			cout<<"sum: "<<add()<<endl;
			cout<<"subtraction: "<<sub()<<endl;
			cout<<"multiplication: "<<multi()<<endl;
			cout<<"division: "<<div()<<endl;
		}
};
int main()
{
	int e,f,g,h;
	cout<<"enter value: "<<endl;
	cin>>e;
	cout<<"enter value: "<<endl;
	cin>>f;
	cout<<"enter value: "<<endl;
	cin>>g;
	cout<<"enter value: "<<endl;
	cin>>h;
	
	abc obj(e,f,g,h);
	obj.display();
	return 0;
}
