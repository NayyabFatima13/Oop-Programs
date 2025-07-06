#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

class Car : public Vehicle {
public:
    Car() { cout << "This is a Car\n"; }
};

class Bike : public Vehicle {
public:
    Bike() { cout << "This is a Bike\n"; }
};

int main() {
    Car objCar;
    Bike objBike;
    return 0;
}
