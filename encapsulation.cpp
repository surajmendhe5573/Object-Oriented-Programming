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
    string accountHolderName; 
    double balance = 0;       

public:
    void setName(string name) {
        accountHolderName = name;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
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

    account.setName("Alice Smith"); 
    account.deposit(1000.50);      
    account.withdraw(200.75);      
    // account.withdraw(1000.00);     
    account.display();             

    return 0;
}

*/