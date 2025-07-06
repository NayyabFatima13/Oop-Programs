#include<iostream>
using namespace std;

class Circle {
	private:
	    float radius, area, circumference;
	
	public:
	    void setRadius(float r) {
	        radius = r;
	    }
	
	    float getRadius() const {
	        return radius;
	    }
	
	    float calculateArea() {
	        area = 3.14 * radius * radius;
	        return area;
	    }
	
	    float calculateCircumference() {
	        circumference = 2 * 3.14 * radius;
	        return circumference;
	    }
};

int main() {
    Circle c;

    float radius, area, circumference;
    cout << "Enter the Radius of Circle: ";
    cin >> radius;

    c.setRadius(radius);

    area = c.calculateArea();
    circumference = c.calculateCircumference();

    cout << "Area of Circle = " << area << endl;
    cout << "Circumference of Circle = " << circumference << endl;

    return 0;
}

