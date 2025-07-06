#include <iostream> 
#include <string> 
using namespace std;

class Person { //person---------class name
  private:
  	int age; 
    string name;  
    string country; 
  public:
  	void setAge(int a) { // Setter function for the age
      age = a; 
    }
    int getAge() { // Getter function for retrieving the age
      return age; 
    }
    
    void setName(const string & n) { // Setter function for the name
      name = n;
    }
    string getName() { // Getter function for retrieving the name
      return name; 
    }
    
    void setCountry(const string & c) { // Setter function for the country
      country = c;
    }
    string getCountry() { // Getter function for retrieving the country
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
  std::cout << "Name: " << p.getName() <<endl; 
  std::cout << "Age: " << p.getAge() <<endl; 
  std::cout << "Country: " << p.getCountry() <<endl; 

  return 0; 
}


