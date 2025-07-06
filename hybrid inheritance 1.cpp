#include<iostream>
using namespace std;

class A
{
	public:
		float radius;
};
class B: public A
{
	public:
		double area_circle(float r)
		{
			radius = r;
			return 3.14 * r * r;	
		}	

};
class C: public A
{
	public:
		double circumference_circle(float rad)
		{
			radius = rad;
			return 2 * 3.14 * rad;	
		}
	public:
		int base;
		int height;
};
class D: public B, public C
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

