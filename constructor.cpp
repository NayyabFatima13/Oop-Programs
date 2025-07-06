#include<iostream>
using namespace std;

class hero
{
	//properties
	public:
	int health;
	char level; 

 	//default constructor without parameter/argument
	hero() 
	{
		cout<<"Constructor called"<<endl;
	}
	
};
int main()
{
	//objected created statically
	cout<<"hi"<<endl;
	hero h1;
	cout<<"hello"<<endl;
	
	//objected created dynamically
	hero *h = new hero;
	hero *g = new hero();
	
	
	return 0;
}
//constructor invoked at object creation
//constructor has no return type
//constructor has no i/p parameter
//constructor has the sam name as class
//whenever you write the class,default constructor is already created by class name
