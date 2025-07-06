#include<iostream> 
#include <string> //necessary header for string handling

class Student //class named Student
{ 
  private: 
    std::string name; 
    std::string studentClass; 
    int rollNumber; 
    double marks; 

// constructor to initialize Student object with provided details
  public:
  Student(const std::string & studentName, const std::string & sClass, int rollNum, double studentMarks)
  	{
  		name = studentName;
  		studentClass = sClass;
  		rollNumber = rollNum;
  		marks = studentMarks;
	}

    // Member function to calculate the grade based on marks
    std::string calculateGrade() {
      if (marks >= 90) {
        return "A+";
      } else if (marks >= 80) {
        return "A";
      } else if (marks >= 70) {
        return "B";
      } else if (marks >= 60) {
        return "C";
      } else {
        return "D";
      }
    }

    // Member function to display student information
    void displayInformation() {
      std::cout << "\n\nName: " << name << std::endl; // Output student's name
      std::cout << "Class: " << studentClass << std::endl; // Output student's class
      std::cout << "Roll Number: " << rollNumber << std::endl; // Output student's roll number
      std::cout << "Marks: " << marks << std::endl; // Output student's marks
      std::cout << "Grade: " << calculateGrade() << std::endl; // Output student's grade
    }
};

int main() {
  
  std::string studentName; 
  std::string sClass; 
  int rollNum; 
  double studentMarks; 

  std::cout << "Student details: "; 
  
  std::cout << "\nName: "; 
  std::getline(std::cin, studentName); 

  std::cout << "Class: "; 
  std::getline(std::cin, sClass); 

  std::cout << "Roll number: "; 
  std::cin >> rollNum; 

  std::cout << "Marks (0-100): "; 
  std::cin >> studentMarks; 

// Create a student object
  Student obj(studentName, sClass, rollNum, studentMarks); // Create Student object with provided details
// Display student information
  obj.displayInformation(); 

  return 0;
}

