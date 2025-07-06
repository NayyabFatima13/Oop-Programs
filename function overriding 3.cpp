#include<iostream>
using namespace std;
class Circle
{
	public:
		float radius;
	public:
		double area_circle(float r)
		{
			radius = r;
			return 3.14 * r * r;	
		}
};
class circle_Area : public Circle 
{
	public:
		double area_circle(float r)
		{
			radius = r;
			return 3.14 * r * r;	
		}
};
int main()
{
	circle_Area obj1; // create an object
	
	obj1.area_circle(6.5);

	cout<<"Area of circle is: "<<obj1.area_circle(6.5)<<endl;
	return 0;
}

