#include<iostream>
using namespace std;

class Employee  // Base class
{
  protected:  // Protected access specifier
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

//protected specifier in inheritance
//we have only used public (members of a class are accessible from outside the class)
//private (members can only be accessed within the class)
//The third specifier, protected, is similar to private, but it can also be accessed in the inherited class
