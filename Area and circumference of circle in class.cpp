#include<iostream>
using namespace std;
class circle
{
	private:
		double radius;
	public:
		circle(double r)
		{
			radius = r;
		}
		void calculateArea()
		{
			double area = 3.14*radius*radius;
			cout<<"area of circle "<<area<<endl;
		}
		void calculateCircumference()
		{
			double circumference = 2*3.14*radius;
			cout<<"circumference of circle "<<circumference<<endl;
		}		
};
int main()
{
	circle obj(3.4);
	obj.calculateArea();
	obj.calculateCircumference();
	return 0;
}
