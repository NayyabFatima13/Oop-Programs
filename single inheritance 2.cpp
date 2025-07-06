#include<iostream>
using namespace std;

class Employee  // Base class
{
	public:  // Protected access specifier
    int salary;
    
};

class Programmer: public Employee  // Derived class
{
  public:
    int bonus;
    void setSalary(int s) 
	{
      salary = s;
    }
    int getSalary() 
	{
      return salary;
    }
};

int main() {
  Programmer Obj;
  Obj.setSalary(55000);
  Obj.bonus = 12000;
  cout << "Salary: " <<Obj.getSalary() << "\n";
  cout << "Bonus: " <<Obj.bonus << "\n";
  return 0;
}
