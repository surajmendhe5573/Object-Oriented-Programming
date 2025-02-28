#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {    //  public member function
        cout << "This animal is eating." << endl;
    }

    void sleep() {   //  public member function
        cout << "This animal is sleeping." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog says: Woof Woof!" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat says: Meow!" << endl;
    }
};

int main() {
    // Create objects of derived classes
    Dog myDog;
    Cat myCat;

    // Call methods from the base class
    myDog.eat();    // Inherited from Animal
    myDog.sleep();  // Inherited from Animal
    myDog.bark();   // Specific to Dog

    myCat.eat();    // Inherited from Animal
    myCat.sleep();  // Inherited from Animal
    myCat.meow();   // Specific to Cat

    return 0;
}


/*
Types of Inheritance in C++
In C++, there are several types of inheritance:

Single Inheritance: A derived class inherits from one base class (as shown in the example above).
Multiple Inheritance: A derived class inherits from multiple base classes.
Multilevel Inheritance: A derived class inherits from another derived class.
Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
Hybrid Inheritance: A combination of multiple and multilevel inheritance.


*/

/*
Inheritance is a mechanism in Object-Oriented Programming (OOP) where one class (called the derived class or child class)
 inherits the properties (data members) and behaviors (member functions) of another class (called the base class or parent class).

This allows the derived class to reuse, extend, or modify the functionality of the base class, 
promoting code reuse and hierarchical classification.

*/




/*
#include<bits/stdc++.h>
using namespace std;

// base class
class Animal{
    public:
        void eat(){
            cout<<"This animal is eating"<<endl;
        }
        void sleep(){
            cout<<"This animal is sleeping"<<endl;
        }
};

// derived class
class Dog: public Animal{
    public: 
        void bark(){
            cout<<"Dog says: Woof Woof !"<<endl;
        }
};

int main(){
    Dog myDog;    // Create an object of the derived class `Dog`

    myDog.eat();      // Inherited from Animal
    myDog.sleep();    // Inherited from Animal

    myDog.bark();       // Specific to Dog

    return 0;
}

*/