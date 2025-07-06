// inheritance.cpp
#include <iostream>
using namespace std;
class A  // base class
{
 	public:
 	int x;
 	void data1()
 	{
    	cout << "Enter value of x= "; cin >> x;
 	}
};
class B : public A  // derived class from class A
{
 	public:
 	int y;
 	void data2()
 	{
 	    cout << "\nEnter value of y= "; cin >> y;
 	}
};
class C : public B   // derived from class B
{
 	public:
 	int z;
 	void data3()
 	{
    	cout << "\nEnter value of z= "; cin >> z;
 	}
 	void product()
 	{
 	    cout << "\nProduct= " << x * y * z;
 	}
};
int main()
{
    C obj;
	//object of derived class
    obj.data1();
    obj.data2();
    obj.data3();
   
    obj.product();
     return 0;
}              	
//end of program
