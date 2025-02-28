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
    Animal* animal1 = new Dog(); // Base class pointer pointing to Dog object
    Animal* animal2 = new Cat(); // Base class pointer pointing to Cat object

    // Polymorphism in action
    animal1->makeSound(); // Calls Dog's makeSound()
    animal2->makeSound(); // Calls Cat's makeSound()

    // Clean up
    delete animal1;     // Free memory
    delete animal2;     // Free memory

    return 0;
}

// Why is cleanup needed?
// Since animal1 and animal2 were created using new, they occupy dynamic memory on the heap.
// delete is used to free that memory and prevent memory leaks.



/*
1. The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
2. A person at the same time can have different characteristics. A man at the same time is a father, a husband, and an employee. 
3. So the same person possesses different behavior in different situations. This is called polymorphism.
*/