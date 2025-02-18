#include<bits/stdc++.h>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating" << endl;
    }
    void sleep() {
        cout << "This animal is sleeping" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog Says: Woof Woof !" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat Says: meow !" << endl;
    }
};

int main() {
    Dog myDog; // Create an object of the derived class `Dog`
    Cat myCat; // Create an object of the derived class `Cat`

    myDog.eat();    // Inherited from Animal
    myDog.sleep();  // Inherited from Animal
    myDog.bark();   // Specific to Dog

    myCat.eat();    // Inherited from Animal
    myCat.sleep();  // Inherited from Animal
    myCat.meow();   // Specific to Cat

    return 0;
}


/* Hierarchical Inheritance: Multiple derived classes inherit from a single base class.

Animal      (base class)
/   \
Dog   Cat   (Derived class)

*/