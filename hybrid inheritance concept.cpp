#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Base class inheriting from Animal
class Mammal : public Animal {
public:
    void walk() {
        cout << "Mammal is walking." << endl;
    }
};

// Base class inheriting from Animal
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {
public:
    void display() {
        cout << "Bat is a mammal and a bird." << endl;
    }
};

int main() {
    Bat bat;
    bat.display();
    bat.eat(); // Accessing eat() from Animal class
    bat.walk(); // Accessing walk() from Mammal class
    bat.fly(); // Accessing fly() from Bird class

    return 0;
}

