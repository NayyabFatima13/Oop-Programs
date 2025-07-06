#include<iostream>
using namespace std;

inline int setNum()  // define an inline function, using the keyword "inline"
{
	return 10; // definition of inline function 
}
int main()
{
    int num ; 
    num = setNum();    // call the inline function
    cout << " The inline function returned: " << num  ; // definition of inline function  
    cout << "\n\n"; 
    return 0 ;

}
