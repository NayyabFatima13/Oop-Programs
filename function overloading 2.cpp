#include <iostream>
using namespace std;
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(int a, int b, int c,int d)
{
    cout << endl << "sum = " << (a + b + c + d);
}
 
int main()
{
    add(10, 2);
    add(5, 6, 4, 9);

    return 0;
}
//function overloading 
