#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    string accountHolderName;
    double balance;

    public:
        BankAccount(string accountHolderName, double balance){
            this->accountHolderName= accountHolderName;
            this->balance= balance;
        }

        void deposit(int amount){
            if(amount > 0){
                balance += amount;
                cout<<"Deposited: "<<amount<<endl;
            }else{
                cout<<"Invalid amount"<<endl;
            }
        }

        void withdraw(int amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout<<"Withdrawn: "<<amount<<endl;
            }else{
                cout<<"Invalid amount or insuffiecient amount"<<endl;
            }
        }

        void display(){
            cout<<"Account Holder: "<<accountHolderName<<endl;
            cout<<"Balance: $"<<balance<<endl;
        }
};

int main(){
    BankAccount account("suraj", 500);

    account.deposit(500);
    account.withdraw(200);
    account.display();

    return 0;
}