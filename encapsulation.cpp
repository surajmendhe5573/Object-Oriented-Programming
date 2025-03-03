#include<bits/stdc++.h>
using namespace std;

class Employee{
    // Private data members
    string name;
    int age;
    double salary;

    public:
    // Public methods to access and modify private members
        void setName(string empName){
            name= empName;
        }

        string getName(){
            return name;
        }

        void setAge(int empAge){
           if(empAge > 0){
             age= empAge;
           }
           else{
              cout<<"Age must be positive !"<<endl;
           }
        }

        int getAge(){
            return age;
        }

        void setSalary(double empSalary){
            if(empSalary >= 0){
                salary= empSalary;
            }else{
                cout<<"Salary must be non-negative"<<endl;
            }
        }

        double getSalary(){
            return salary;
        }
};

int main(){

    Employee emp;

    emp.setName("Suraj");         // Setting private data using public methods
    emp.setAge(21);
    emp.setSalary(50000);

    cout<<"Employee Details"<<endl;     // Getting private data using public methods
    cout<<"Name: "<<emp.getName()<<endl;
    cout<<"Age: "<<emp.getAge()<<endl;
    cout<<"Salary: $"<<emp.getSalary()<<endl;

    return 0;
}


// Encapsulation is defined as wrapping up data and information under a single unit.
// In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them. 


/*

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;   // Private data member
    double balance = 0;         // Private data member

public:
    void setName(string name) {
        accountHolderName = name;       // Public method to set name
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;        // Public method to deposit money
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;      // Public method to withdraw money
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    void display() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;    // Create a BankAccount object

    account.setName("Alice Smith");     // Using public method to set name
    account.deposit(1000.50);           // Using public method to deposit money
    account.withdraw(200.75);           // Using public method to withdraw money
    // account.withdraw(1000.00);     
    account.display();                 // Using public method to display account details

    return 0;
}

*/