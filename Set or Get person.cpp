#include <iostream> 
#include <string> 
using namespace std;

class Person { //person---------class name
  private:
  	int age; 
    std::string name;  
    std::string country; 
  public:
  	void setAge(int a) { // Setter function for the age
      age = a; 
    }
    int getAge() { // Getter function for retrieving the age
      return age; 
    }
    
    void setName(const std::string & n) { // Setter function for the name
      name = n; 
    }
    std::string getName() { // Getter function for retrieving the name
      return name; 
    }
    
    void setCountry(const std::string & c) { // Setter function for the country
      country = c;
    }
    std::string getCountry() { // Getter function for retrieving the country
      return country; 
    } 
};

int main() {
  
  Person p;  //p---------object name
  // Set the person's details using setter functions
  p.setName("LAIBA"); 
  p.setAge(25); 
  p.setCountry("PAKISTAN"); 
  
  // Get and display the person's details using getter functions
  std::cout << "Name: " << p.getName() << std::endl; 
  std::cout << "Age: " << p.getAge() << std::endl; 
  std::cout << "Country: " << p.getCountry() << std::endl; 

  return 0; 
}


