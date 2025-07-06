#include<iostream>
using namespace std;

class A       //main class
{
	
	
};
class B    //main class
{
	
};
class C: public A,public B
{
	
};
int main()
{
	C obj;    //creat an object
	cout<<"Hello World";
	return 0;	
}
//intro to inheritance
//multiple inheritance
//multiple inheritance mai aik se ziada parent hote hain
//number of objects depend upon number of child classes
//every child class has separate object
