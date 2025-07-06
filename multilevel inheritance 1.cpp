#include <iostream>
using namespace std;

class university
{
	public:
    university() 
	{
        cout << "University has different departments." << endl;
    }
};

class department :  public university
{
	public:
    department() 
	{
        cout << "Every department perform specific tasks." << endl;
    }
};

class room : public department 
{
	public:
	room()
	{
		cout<<"Room no.3 is for student services."<<endl;
	}
};

int main() 
{
    room obj;
    return 0;
}
