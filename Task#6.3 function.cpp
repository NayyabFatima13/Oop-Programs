#include<iostream>
using namespace std;

//function
int checknumber(int n) 
{
	int i,c=0;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0 && c==0)
	cout<<n<<" is a prime even number.";
	else if(n%2!=0 && c==0)
	cout<<n<<" is a odd prime number.";
	else if(n%2==0 && c!=0)
	cout<<n<<" is only even number, not prime number.";
	else if(n%2!=0 && c!=0)
	cout<<n<<" is only odd number, not prime number.";
	else
	cout<<n<<" is not a prime number.";
}

//main function 
int main() 
{
    int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"----------------------\n";
	cout<<"Nature of the number: \n";
	checknumber(n); 
    return 0;
}
