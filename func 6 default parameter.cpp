#include <iostream>
#include <string>
using namespace std;
  
int mathoperation(int a, int b = 3, int c = 2)
{
  return ((a*b)/c);
}
  
int main()
{
  int a,b,c;
  
  cout<<"Enter values for a,b and c: "; cin>>a>>b>>c;
  cout<<endl;
  cout<<"Call to mathoperation with 1 arg : "<<mathoperation(a);
  cout<<endl;
  cout<<"Call to mathoperation with 2 arg : "<<mathoperation(a,b);
  cout<<endl;
  cout<<"Call to mathoperation with 3 arg : "<<mathoperation(a,b,c);
  cout<<endl;
}
 
