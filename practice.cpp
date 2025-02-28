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
             << ", Balance: " << balance << ", Age: " << age << endl;
    }
};

int main() {
    Customer A1("Suraj", 1, 1000, 21);
    Customer A2("Kamal", 2, 500, 19);

    A1.updateAge(22);
    A1.deposit(500);
    A1.withdraw(-800);

    A1.display();

    return 0;
}