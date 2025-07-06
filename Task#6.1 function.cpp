#include<iostream>
using namespace std;

//function
int factorial(int n) 
{
    int c,f;
    c = 1;
    f = 1;
	while(c<=n) 
	{
	f = f*c;
	c++;
	}
    return f;
}

//main function 
int main() 
{
    int n;
    cout<<"Enter the number: " <<endl;
    cin>>n;
   
    cout<<"The factorial of the number is: "<<endl;
    cout<<factorial(n);    
    return 0;
}
