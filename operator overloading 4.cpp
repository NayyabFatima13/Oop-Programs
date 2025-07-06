#include <iostream>
using namespace std;

class Triangle {
private:
	double base, height;

public:
	
	void setBase(double b) {
		base = b;
	}

	void setHeight(double h) {
		height = h;
	}

	double operator*(const Triangle& t) {
		double area = (base * height) / 2.0;
		return area;
	}
};

int main() {
	double base, height;
	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> height;

	Triangle triangle1, triangle2;
	triangle1.setBase(base);
	triangle1.setHeight(height);
	triangle2.setBase(base);
	triangle2.setHeight(height);

	double area = triangle1 * triangle2;
	cout << "Area of the triangle: " << area << endl;

	return 0;
}
