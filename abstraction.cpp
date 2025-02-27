#include<bits/stdc++.h>
using namespace std;

class Customer {
private:
    string name;
    int account_number;
    int balance;
    int age;

    // Private helper methods (hidden from the user)
    bool isValidAmount(int amount) {
        return amount > 0;
    }

    bool isValidAge(int age) {
        return age > 0 && age < 100;
    }

public:
    Customer(string name, int account_number, int balance, int age) {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
    }

    // Public interface (abstraction)
    void deposit(int amount) {
        if (isValidAmount(amount)) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid amount. Deposit failed." << endl;
        }
    }

    void updateAge(int age) {
        if (isValidAge(age)) {
            this->age = age;
            cout << "Age updated successfully." << endl;
        } else {
            cout << "Invalid age. Update failed." << endl;
        }
    }

    void withdraw(int amount) {
        if (isValidAmount(amount) && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance. Withdrawal failed." << endl;
        }
    }

    void display() {
        cout << "Name: " << name << ", Account Number: " << account_number
             << ", Balance: $" << balance << ", Age: " << age << endl;
    }
};

int main() {
    Customer A1("Suraj", 1, 1000, 21);
    Customer A2("Kamal", 2, 500, 19);

    A1.updateAge(22);
    A1.deposit(500);
    A1.withdraw(300);

    A1.display();

    return 0;
}

// Abstraction=> Displaying only essential information and hiding the details.

/*

The private data members (name, account_number, balance, age) and private helper methods (isValidAmount, isValidAge) are hidden from the user. 
These are internal details that the user doesn't need to know about.

For example, the user doesn't need to know how the isValidAmount or isValidAge methods work;
they only need to know that they can deposit money, withdraw money, or update their age.

*/





/*
Data abstraction is one of the most essential and important features of object-oriented programming in C++. 
Abstraction means displaying only essential information and hiding the details. 
Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation. 
*/


/*

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

*/