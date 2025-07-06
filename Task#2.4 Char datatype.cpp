#include<iostream>
using namespace std;
int main () 
{
char ch;
cout<<"Enter the alphabet: ";
cin>>ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
cout<<"It is a vowel";
else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
cout<<"It is a vowel";
else
cout<<"It is a consonant";
cout<<endl;
return 0;
}

