#include<bits/stdc++.h>
using namespace std;

// base class
class Animal{
    public:
        virtual void makeSound(){
            cout<<"This animals making sound !"<<endl;
        }
       
};

// derived class 1
class Dog: public Animal{
    public: 
        void makeSound()override{
            cout<<"Dog Says: Woof Woof !"<<endl;
        }
};

// derived class 2
class Cat: public Animal{
    public: 
        void makeSound()override{
            cout<<"Cat Says: Woof Woof !"<<endl;
        }
};
int main(){
    Animal* animal1= new Dog();
    Animal* animal2= new Cat();

    animal1->makeSound();
    animal2->makeSound();

    delete animal1;
    delete animal2;

    return 0;
}