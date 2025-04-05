#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void Eat(){
            cout<<"This animal is eating."<<endl;
        }
        void Sleep(){
            cout<<"This animal is sleeping."<<endl;
        }
};

class Dog: public Animal{
    public:
        void Bark(){
            cout<<"Dog is barking"<<endl;
        }
};

int main(){
    Dog d;

    d.Eat(); // Inherited from Animal class
    d.Sleep(); // Inherited from Animal class   
    d.Bark(); // Dog class method

    return 0;
}