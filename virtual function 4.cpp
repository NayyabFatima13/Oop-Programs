#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        cout << "Animal makes a sound" << endl;
    }
    
    // Non-virtual function
    void sleep() const {
        cout << "Animal is sleeping" << endl;
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        cout << "Dog barks" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() const override {
        cout << "Cat meows" << endl;
    }

    ~Cat() {
        cout << "Cat destructor called" << endl;
    }
};

int main() {
    // Pointer to base class
    Animal* animalPtr;

    // Point to Dog object
    Dog dog;
    animalPtr = &dog;
    animalPtr->makeSound(); // Calls Dog's makeSound
    animalPtr->sleep();     // Calls Animal's sleep

    // Point to Cat object
    Cat cat;
    animalPtr = &cat;
    animalPtr->makeSound(); // Calls Cat's makeSound
    animalPtr->sleep();     // Calls Animal's sleep

    return 0;
}

