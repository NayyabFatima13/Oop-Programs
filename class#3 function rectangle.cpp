#include <iostream>
using namespace std;

class Rectangle { //Rectangle -------- class name
  private: 
    double length, width; 
  public:
    // Constructor to initialize the Rectangle object with length and width
    Rectangle(double len, double wid): length(len), width(wid) 
	{
	}
    double Area() {     // function for the area
    return length * width; // Formula for area
    }

    double Perimeter() {  // function for the perimeter
    return 2 * (length + width); // Formula for perimeter
    }
};

int main() {
  double length, width;
  cout<<"The length of the rectangle is: ";
  cin>>length; 
  cout<<"The width of the rectangle is: ";
  cin>>width; 
 
  Rectangle r(length,width);   // Create a r object with the provided length and width
  
  double area = r.Area(); //area using the r object
  cout<<"Area: " <<area<<endl; 
  double perimeter = r.Perimeter(); //perimeter using the r object
  cout<<"Perimeter: " <<perimeter<<endl; 

  return 0; 
}
