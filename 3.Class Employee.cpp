#include <iostream> 
#include <string> //necessary header for handling strings

class Employee { // class named Employee
  private: 
    std::string name; 
    int employeeId; 
    double salary; 

  public:
    // Constructor to initialize Employee object with provided details
    Employee(const std::string & empName, int empId, double empSalary) 
	{
	  name = empName;
	  employeeId = empId;
	  salary = empSalary;
	}

    // Member function to calculate salary based on performance rating
    void calculateSalary(double performanceRating) {
      if (performanceRating >= 0.0 && performanceRating <= 5.0) 
	  { 
        salary *= performanceRating; // Calculate updated salary based on performance rating
      } 
	  else 
	  {
        std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl; 
      }
    }

    // Member function to set salary
    void setSalary(double empSalary) {
      salary = empSalary; 
    }
    // Member function to get employee name
    std::string getName() const {
      return name; // Return employee name
    }
    // Member function to get employee ID
    int getEmployeeId() const {
      return employeeId; // Return employee ID
    }
    // Member function to get employee salary
    double getSalary() const {
      return salary; // Return employee salary
    }
};

int main() {
  std::string empName; 
  int empId; 
  double empSalary; 

  std::cout << "Input employee name: "; 
  std::cin >> empName; 

  std::cout << "Input employee ID: "; 
  std::cin >> empId; 

  std::cout << "Input employee salary: "; 
  std::cin >> empSalary; 
  // Create an employee object
  Employee employee(empName, empId, empSalary); // Create Employee object with provided details

  // Calculate and display initial salary
  std::cout << "Initial salary: " << employee.getSalary() << std::endl; 

  // Perform salary calculation based on performance rating
  double performanceRating; // Define variable to store performance rating
  std::cout << "Input performance rating (0.0-5.0): "; 
  std::cin >> performanceRating; 

  employee.calculateSalary(performanceRating); // Calculate updated salary based on performance

  // Display updated salary
  std::cout << "Updated salary: " << employee.getSalary() << std::endl; // Output updated salary

  return 0; 
}

