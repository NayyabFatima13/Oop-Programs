#include<iostream>
using namespace std;

class A //parent class 
{
	public:
		float radius;
	public:
		int base;
		int height;
};
class B : public A  //Derived class 1 
{
	public:
		double area_circle(float r)
		{
			radius = r;
			return 3.14 * r * r;	
		}
	
};
class C : public A  //Derived class 2
{
	public:
		double circumference_circle(float rad)
		{
			radius = rad;
			return 2 * 3.14 * rad;	
		}

};
class D: public A   //Derived class 3
{
	public:
		int area_triangle(int b, int h)
		{
			base = b;
			height = h;
			return 0.5 * b * h;
		}
};

int main() 
{
	B obj1;
	C obj2;
	D obj3;
	
	obj1.area_circle(6.5);
	obj2.circumference_circle(6.5);
	obj3.area_triangle(4,8);
	
	cout<<"Area of circle is: "<<obj1.area_circle(6.5)<<endl;
	cout<<"Circumference of circle is: "<<obj2.circumference_circle(6.5)<<endl;
	cout<<"Area of triangle is: "<<obj3.area_triangle(4,8)<<endl;
	return 0;
}

