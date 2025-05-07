// multilevel inheritance=> A derived class inherits from another class.

#include<bits/stdc++.h>
using namespace std;

// base class
class Engine{
    public:
        void startEngine(){
            cout<<"Engine has started"<<endl;
        }
};

// derived class
class Wheels: public Engine{
    public:
        void rotateWheels(){
            cout<<"Wheels are rotating"<<endl;
        }
};

// final derived class
class Car: public Wheels{
    public:
        void drive(){
            cout<<"Car is driving"<<endl;
        }
};

int main(){
    Car myCar;
    myCar.rotateWheels();
    myCar.drive();
    myCar.startEngine();

    return 0;
}