#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number;
    int balance;
    int age;

    bool isValidAmount(int amount){
        return amount > 0;
    }

    bool isValidAge(int age){
        return age>0 && age<=100;
    }

    public:
        Customer(string name, int account_number, int balance, int age){
            this-> name= name;
            this->account_number= account_number;
            this->balance= balance;
            this->age= age;
        };

        void deposit(int amount){
            if(isValidAmount(amount)){
                balance += amount;
                cout<<"Deposited: "<<amount<<endl;
            }else{
                cout<<"Invalid amount"<<endl;
            }
        };

        void withdraw(int amount){
            if(isValidAmount(amount) && amount <= balance){
                balance -= amount;
                cout<<"Withdrawn: "<<amount<<endl;
            }else{
                cout<<"Invalid or Insufficient balance"<<endl;
            }
        };

        void updateAge(int age){
            if(isValidAge(age)){
               this->age= age;
               cout<<"Age updated successfully !"<<endl;
            }else{
            cout<<"Invalid age !"<<endl;
            }
        };

        void diaplay(){
            cout<<"Account Holder: "<<name<<", Account Number: "<<account_number<<", Balance: "<<balance<<", Age: "<<age<<endl;
        }
        
};

int main(){
    Customer A1("Suraj Mendhe", 101, 800, 21);

    A1.deposit(300);
    A1.withdraw(200);
    A1.updateAge(22);

    A1.diaplay();

    return 0;
}
