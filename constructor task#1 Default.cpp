#include<iostream>
using namespace std;

class testdefault{
	private:
		int num1,num2;
		public:
			testdefault(){
				num1 = 10;
				num2 = 20;
			}
	void display(){
		cout<<"num1 = "<< num1 <<endl;
		cout<<"num2 = "<< num2 <<endl;
	}
};
int main()
{
	testdefault obj;
	obj.display();
	return 0;
}
//bydefault
//obj.class mai wohi likhte hain jis mai hum cout krwa rahe hote hain 
