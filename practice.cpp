#include<bits/stdc++.h>
using namespace std;

class BackAccount{
    string accountHolderName;
    double balance= 0;

    public:
        void setName(string name){
            accountHolderName= name;
        }

        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<<"Deposited amount: $"<<amount<<endl;
            }else{
                cout<<"Invalid deposited amount !"<<endl;
            }
        }

        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout<<"Withdrawn: $"<<amount<<endl;
            }else{
                cout<<"Invalid withdrawn amount or insufficient balance !"<<endl;
            }
        }

        void display() const{
            cout<<"Account Holder: "<<accountHolderName<<endl;
            cout<<"Balance: $"<<balance<<endl;
        }
};

int main(){
    BackAccount account;

    account.setName("Suraj Mendhe");
    account.deposit(50000);
    account.withdraw(20000);

    account.display();

    return 0;
}