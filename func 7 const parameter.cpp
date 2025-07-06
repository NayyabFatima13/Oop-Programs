#include <iostream>
#include <string>
using namespace std;
 
int addition(const int &a, const int &b)
{
   return (a+b);
}
int main()
{
   int a,b;
   cout<<"Enter the two numbers to be swapped: "; cin>>a>>b;
   cout<<"a = "<<a;
   cout<<"\tb = "<<b;
   int res = addition(a,b);
   cout<<"\nResult of addition: "<<res;
}
