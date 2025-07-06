#include<iostream>
using namespace std;

class abc
{
	private:
	int x;
	//public:
	//int x;
	
};
int main()
{
	abc z;
	z.x = 10;
	cout<<z.x;
	return 0;
}
//private error
//public
//without mentioning public the default will be set in private
