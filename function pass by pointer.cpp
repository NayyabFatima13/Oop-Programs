#include <iostream>
#include <string>
using namespace std;
 
void swap(int *a, int *b)
{
   int temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   int a,b;
   cout<<"Enter the two numbers to be swapped: "; cin>>a>>b;
   
   cout<<"a = "<<a;
   cout<<"\tb = "<<b;
   
   swap(a,b);
   
   cout<<"\nAfter swapping inside Main:\n ";
   cout<<"a = "<<a;
   cout<<"\tb = "<<b;
}
//function (pass by pointer)
