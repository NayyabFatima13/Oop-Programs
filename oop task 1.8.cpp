#include<iostream>
using namespace std;

class abc
{
	public:
	void x()
	{
		cout<<"hello world";
	}

};
int main()
{
	abc z;
	z.x();
	return 0;
}
//must call x() with object name using . operator otherwise error generates
