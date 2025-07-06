#include <iostream>
#include <string>
using namespace std;
 
void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}
 
int main()
{
   int x,y;
   cout<<"Enter the two numbers to be swapped: "; cin>>x>>y;
   cout<<"x = "<<x;
   cout<<"\ty = "<<y;
   swap(x,y);
   cout<<"\nAfter swapping inside Main:\n ";
   cout<<"x = "<<x;
   cout<<"\ty = "<<y;
}
