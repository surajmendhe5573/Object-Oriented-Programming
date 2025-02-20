#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    // Override the virtual function
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Create objects of base and derived classes
    Animal* animal1 = new Dog(); // Pointer of type Animal pointing to a Dog object
    Animal* animal2 = new Cat(); // Pointer of type Animal pointing to a Cat object

    // Polymorphism in action
    animal1->makeSound(); // Calls Dog's makeSound()
    animal2->makeSound(); // Calls Cat's makeSound()

    // Clean up
    delete animal1;
    delete animal2;

    return 0;
}



/*
1. The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
2. A person at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. 
3. So the same person possesses different behavior in different situations. This is called polymorphism.
*/