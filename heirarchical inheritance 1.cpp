#include<iostream>
using namespace std;

class A //base class 
{
	public:
		int age;
		string name;
		string country;
};
class B : public A           // child class 1
{
	public:
		void setAge(int a) 
		{ 
     		age = a; 
    	}
	    int getAge() 
		{ 
	    	return age; 
	    }
	
};
class C : public A          // child class 2
{
	public:	
		void setName(const string & n) 
		{ 
	      name = n;
	    }
	    string getName() 
		{ 
	      return name; 
	    }
};
class D : public A          //child class 3
{
		public:	
		void setCountry(const string & c) 
		{ 
	      country = c;
	    }
	    string getCountry() 
		{ 
	      return country; 
	    } 
};

int main()
{
	B obj1;
	C obj2;
	D obj3;
	
	obj1.setAge(25); 
	obj2.setName("LAIBA");
	obj3.setCountry("PAKISTAN"); 
	
	std::cout << "Age: " << obj1.getAge() <<endl; 
	std::cout << "Name: " << obj2.getName() <<endl; 
  	std::cout << "Country: " << obj3.getCountry() <<endl; 

	return 0;
	
}

