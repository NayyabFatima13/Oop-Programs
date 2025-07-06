#include<iostream>
using namespace std;

class multiplication
{
	public:
	int product(int a, int b)
	{
	  cout << "Product = "<< (a * b) << endl;
	}
	int product(float a, float b, float c)
	{
	    cout << "Product = " << (a * b * c) << endl;
	}
	int product(double a, double b, double c)
	{
		cout << "Product = " << (a * b * c) << endl;	
	}	
	int product(int a, int b, int c, int d)
	{
		cout << "Product = " << (a * b * c * d) << endl;	
	}	
};
int main()
{
	multiplication obj; //create an object 
	obj.product(3,9);
	obj.product(3.5,7.4,4.9);
	obj.product(10.2,17.5,22.2);
    obj.product(5,9,7,2);
 
    return 0;
}
