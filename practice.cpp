#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
     virtual void makeSound(){
        cout<<"Animals making sound"<<endl;
     }
};

class Dog: public Animal{
    public:
        void makeSound()override{
            cout<<"Dogs barks !"<<endl;
        }
};

class Cat: public Animal{
    public:
        void makeSound()override{
            cout<<"Cat meow !"<<endl;
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