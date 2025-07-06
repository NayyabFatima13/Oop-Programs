#include<iostream>
using namespace std;

class A   //main class
{
	public:
	float radius;
	double area(float r)
	{
		radius = r;
		return 3.14*r*r;
	}

};
class B:public A   //sub class
{
	public:
    //float radius;
	double circum(float rad)
	{
		radius = rad;
		return 2*3.14*rad;
	}
	
};
int main()
{
	B obj;    //creat an object
	obj.area(6.5);
	obj.circum(4.5);
	
	cout<<obj.area(6.5)<<endl;
	cout<<obj.circum(4.5)<<endl;
	
	return 0;	
}
//single inheritance
