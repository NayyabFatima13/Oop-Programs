#include<iostream>
using namespace std;

class A   //main class
{
	public:
	int display()   //method function
	{
		int sum;
		int a,b;
		a = 2;
		b = 3;	
		sum = a + b;
	}
	
};
class B:public A   //sub class
{
	
};
int main()
{
	B obj;    //creat an object   
	obj.display();   //function in main class accessed by object made with subclass
	
	cout<<obj.display()<<endl; 
	
	return 0;	
}

//single inheritance
