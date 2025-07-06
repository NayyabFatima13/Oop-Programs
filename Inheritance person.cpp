#include<iostream>
using namespace std;

class A //Base 1 
{
	public:
		int age; 
};
class a : public A //Derived class 1 
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
class B  //Base class 2
{
	public:
		string name;
};
class b : public B  //Derived class 2
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
class C  //Base class 3
{
	public:
		string country;
};
class c : public C  //Derived class 3
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
	a obj1;
	b obj2;
	c obj3;
	
	obj1.setAge(25); 
	obj2.setName("LAIBA");
	obj3.setCountry("PAKISTAN"); 
	
	std::cout << "Age: " << obj1.getAge() <<endl; 
	std::cout << "Name: " << obj2.getName() <<endl; 
  	std::cout << "Country: " << obj3.getCountry() <<endl; 

	return 0;
}

