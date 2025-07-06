#include<iostream>
using namespace std;

class Circle //Base 1 
{
	public:
		float radius;
};
class circle_Area : public Circle  //Derived class 1 
{
	public:
		double area_circle(float r)
		{
			radius = r;
			return 3.14 * r * r;	
		}
	
};
class Triangle  //Base class 2
{
	public:
		int base;
		int height;
};
class triangle_Area : public Triangle  //Derived class 2
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
	circle_Area obj1;
	triangle_Area obj2;
	
	obj1.area_circle(6.5);
	obj2.area_triangle(4,8);
	
	cout<<"Area of circle is: "<<obj1.area_circle(6.5)<<endl;
	cout<<"Area of triangle is: "<<obj2.area_triangle(4,8)<<endl;
	return 0;
}

