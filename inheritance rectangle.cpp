#include<iostream>
using namespace std;

class Rectangle_Area   //Base 1 
{
	public:
		double length, width; 
};
class A : public Rectangle_Area   //Derived class 1 
{
	public:
		double Area(double l, double w) 
		{   
			length = l;
			width = w;
    		return l * w; // Formula for area
    	}
};
class Rectangle_Perimeter   //Base class 2
{
	public:
		double length, width; 
};
class P : public Rectangle_Perimeter   //Derived class 2
{
	public:
		double Perimeter(double len, double wid) 
		{  
			length = len;
			width = wid;
	    	return 2 * (len + wid); // Formula for perimeter
	    }
};

int main() 
{
	A obj1;
	P obj2;
	
	obj1.Area(6.5,2.5);
	obj2.Perimeter(8.5,6.5);
	
	cout<<"Area of circle is: "<<obj1.Area(6.5,2.5)<<endl;
	cout<<"Area of triangle is: "<<obj2.Perimeter(8.5,6.5)<<endl;
	return 0;
}
