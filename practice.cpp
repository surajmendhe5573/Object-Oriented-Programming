// Hybrid Inheritanece=> A combination of muliple and multilevel inheritance.
#include<bits/stdc++.h>
using namespace std;

// base class
class Vehicle{
    public:
    void fuelUp(){
        cout<<"Vehicle is fueling"<<endl;
    };
};

// intermediate base  class 1
class Engine: public Vehicle{
    public:
    void startEngine(){
        cout<<"Engine has started"<<endl;
    }
};

// intermediate base class 2
class Car: public Vehicle{
    public:
        void drive(){
            cout<<"Car is driving"<<endl;
        }
};

// derived class inherits from engine and car class
class Wheels: public Engine, public Car{
    public:
     void rotateWheels(){
        cout<<"Wheels are rotating"<<endl;
     }
};

int main(){
   Wheels A1;

    A1.startEngine();
    A1.rotateWheels();
    A1.drive();

    A1.Engine::fuelUp();
    A1.Car::fuelUp();

    return 0;
}