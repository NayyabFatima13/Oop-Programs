#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string name;
	cout << "Enter the input string:"; 
	getline (std::cin, name);
	cout << "String entered: " << name << "!\n"; 
	int size = name.size();
	cout<<"Size of string : "<<size<<endl;
}
