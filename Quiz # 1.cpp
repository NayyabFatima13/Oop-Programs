#include<iostream>
using namespace std;

class circle  //circle------class name
{
    private:
    	float radius,area,circumference;
    public:
        float Area(float r)
        {
        	area = 3.14*r*r;
            return area;
        }
        float Circumference(float r)
        {
        	circumference =  2*3.14*r;
            return circumference;
        }
};
int main()
{
    circle c; // c--------object name
    
    float radius, area, circumference;
    cout<<"Enter the Radius of Circle: ";
    cin>>radius;
    
    area = c.Area(radius);
    circumference = c.Circumference(radius);
    
    cout<<"Area of Circle = "<<area<<endl;
    cout<<"Circumference of Circle = "<<circumference<<endl;
    
    return 0;
}


