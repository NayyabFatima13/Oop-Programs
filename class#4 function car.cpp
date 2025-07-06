#include <iostream> 
#include <string> 
using namespace std;

class Car { // Car ------- class name
  private: 
    std::string company; 
    std::string model; 
    int year; 
  public:
    // Constructor to initialize Car object with provided values
    Car(const std::string & comp, const std::string & mdl, int yr): company(comp), model(mdl), year(yr) {}

 	void setCompany(const std::string & comp) { // Setter function for modifying the company name
      company = comp;
    }
    std::string getCompany() { // Getter function for retrieving the company name
      return company; 
    }
     void setModel(const std::string & mdl) { // Setter function for modifying the model name
      model = mdl; 
    }
    std::string getModel() { // Getter function for retrieving the model name
      return model; 
    }
    
    void setYear(int yr) { // Setter function for modifying the year
      year = yr; 
    }
    int getYear() { // Getter function for retrieving the year
      return year; 
    }   
};

int main() {
  Car car("AUDI", "A6", 2023);  // Create a car object with initial values

  std::cout << "Company: " << car.getCompany() << std::endl; 
  std::cout << "Model: " << car.getModel() << std::endl;
  std::cout << "Year: " << car.getYear() << std::endl; 
  
  return 0; 
}












/*car.setCompany("BMW"); // Update the car's company name
  car.setModel("M4"); // Update the car's model name
  car.setYear(2022); // Update the car's year

  std::cout << "\nUpdated Company: " << car.getCompany() << std::endl; 
  std::cout << "Updated Model: " << car.getModel() << std::endl; 
  std::cout << "Updated Year: " << car.getYear() << std::endl; */
  

