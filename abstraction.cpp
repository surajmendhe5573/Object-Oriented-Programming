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


/*
#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class BankAccount {
protected:
    string accountHolderName; 
    double balance = 0;       

public:
    virtual void setName(string name) = 0;     // Pure virtual function
    virtual void deposit(double amount) = 0;  // Pure virtual function
    virtual void withdraw(double amount) = 0; // Pure virtual function
    virtual void display() const = 0;         // Pure virtual function

    virtual ~BankAccount() {}                 // Virtual destructor
};

// Derived class for a specific bank account type
class SavingsAccount : public BankAccount {
public:
    void setName(string name) override {
        accountHolderName = name;
    }

    void deposit(double amount) override {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) override {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    void display() const override {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount* account = new SavingsAccount(); // Polymorphic use of abstraction

    account->setName("Alice Smith"); 
    account->deposit(1000.50);      
    account->withdraw(200.75);      
    account->display();            

    delete account; // Clean up
    return 0;
}

*/