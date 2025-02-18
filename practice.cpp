#include<bits/stdc++.h>
using namespace std;

// base class
class Animal{
    public:
        void eat(){
            cout<<"This animal is eating"<<endl;
        }
        void sleep(){
            cout<<"This animal is sleeping"<<endl;
        }
};

// derived class 1
class Dog: public Animal{
    public:
        void bark(){
            cout<<"Dog Says: Woof Woof !"<<endl;
        }
};

// derived class 2
class Cat: public Animal{
    public:
        void meow(){
            cout<<"Cat Says: meow !"<<endl;
        }
};

int main(){
    Dog myDog;
    Cat myCat;

    myDog.eat();
    myDog.sleep();
    myDog.bark();

    myCat.eat();
    myCat.sleep();
    myCat.meow();

    return 0;
}