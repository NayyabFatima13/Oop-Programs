#include<iostream>
using namespace std;

class Animal 
{
	public:
	    void sound() 
		{
	        std::cout << "Animal makes a sound" << std::endl;
	    }
};
	
class Dog : public Animal 
{
	public:
	    void sound(int loudness) 
		{
	        std::cout << "Dog barks with loudness " << loudness << std::endl;
	    }
};

int main()
{
	Dog obj;
	Animal* ptr = &obj;
	ptr->sound();
	return 0;
}
//function shadowing
