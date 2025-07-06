#include<iostream>
using namespace std;

class abc
{
	public:
	void x() //void x() ke bad ; nhi ae ga
	{
		cout<<"hello world";
	}

};
int main()
{
	abc z;
	//z.x;  error
	z.x();
	return 0;
}

//z.x() statement without parentheses z.x will generate error
