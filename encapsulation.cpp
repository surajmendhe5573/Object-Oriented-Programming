#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Private data members (encapsulated)
    string accountHolderName;
    double balance;

public:
    // Public methods to interact with private data (getters and setters)
    void setAccountHolderName(string name) {
        accountHolderName = name;
    }

    string getAccountHolderName() const {
        return accountHolderName;
    }

    void deposit(double amount) {
        if (amount > 0) { // Validation
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) { // Validation
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create an object of BankAccount
    BankAccount account;

    // Set account holder name using a public method
    account.setAccountHolderName("Alice Smith");

    // Deposit money
    account.deposit(1000.50);

    // Withdraw money
    account.withdraw(200.75);

    // Try to withdraw more than the balance (invalid)
    account.withdraw(1000.00);

    // Display account details
    account.displayAccountDetails();

    return 0;
}


// Encapsulation is defined as wrapping up data and information under a single unit.
// In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them. 