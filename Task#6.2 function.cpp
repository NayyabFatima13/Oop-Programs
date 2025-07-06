#include<iostream>
using namespace std;

//Loop function to display even numbers within a range
int even(int a, int b) 
{
    int n;
    n = a;
	while(n<b) 
	{
	if(n%2==0)
	cout<<n<<endl;
	n++;
	}
    return n;
}

//main function 
int main() 
{
    int a,b;
    cout<<"Enter the starting number" <<endl;
    cin>>a;
    cout<<"Enter the ending number" <<endl;
    cin>>b;

    cout<<"These are all the even integers between the starting and ending numbers" <<endl;
    cout<<even(a,b);    

    return 0;
}
