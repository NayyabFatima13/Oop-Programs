#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid)
	{
	  length = len;
	  width = wid;
	}

    // Setter functions
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    // Getter functions
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double Area() const {
        return length * width;
    }

    double Perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle r(0, 0); // Create a default rectangle object

    r.setLength(length); // Set the length using setter function
    r.setWidth(width);   // Set the width using setter function

    cout << "Area: " << r.Area() << endl;
    cout << "Perimeter: " << r.Perimeter() << endl;

    return 0;
}

