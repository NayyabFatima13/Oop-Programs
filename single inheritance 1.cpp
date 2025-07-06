#include<iostream>
using namespace std;

class Vehicle  // Base class
{
  public:
    string brand = "kia";
    int price = 4500000;
};

class Car: public Vehicle  // Derived class
{
  public:
    string model = "kia sportage";
    string color = "silver";
};

int main() 
{
  Car obj;
  cout<<"Brand: "<<obj.brand<<endl;
  cout<<"Price: "<<obj.price<<endl;
  cout<<"Model: "<<obj.model<<endl;
  cout<<"Color: "<<obj.color<<endl;
  
  return 0;
}
//single inheritance
