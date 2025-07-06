#include<iostream>
using namespace std;

class line
{
	public:
	int size;
	//default constructor
	line()
	{
		size = 30;
	}
};
int main()
{
	//default constructor called when object is created
	line l;
	cout<<"Line size is"<<" "<<l.size<<" "<<"cm";
	return 0;
}

