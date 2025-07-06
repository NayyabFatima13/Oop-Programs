#include<iostream>
using namespace std;
class abc
{
	private:
		float rad;
	public:
	void setarea (int r)
	{
		rad = r;
	}
	int getarea()
	{
		float area;
		float pi = 3.14;
		area = 3.14*rad*rad;
		return area;
	}
};

int main()
{
	abc obj;
	obj.setarea(12);
	obj.getarea();
	cout<<obj.getarea();
	return 0;
}


