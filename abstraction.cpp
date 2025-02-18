#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() const = 0; // Only declare, no definition

    // Concrete function
    void sleep() const {
        cout << "This animal is sleeping." << endl;
    }
};

// Derived class for Dog
class Dog : public Animal {
public:
    // Implement the pure virtual function
    void sound() const override {
        cout << "Dog says: Woof Woof!" << endl;
    }
};

// Derived class for Cat
class Cat : public Animal {
public:
    // Implement the pure virtual function
    void sound() const override {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    // Create objects of derived classes
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    // Call functions
    myDog->sound();  // Abstract method
    myDog->sleep();  // Concrete method

    myCat->sound();  // Abstract method
    myCat->sleep();  // Concrete method

    // Clean up memory
    delete myDog;
    delete myCat;

    return 0;
}


/*
Data abstraction is one of the most essential and important features of object-oriented programming in C++. 
Abstraction means displaying only essential information and hiding the details. 
Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 
*/