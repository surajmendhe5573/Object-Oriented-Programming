// Hybrid Inheritance=> It is a combination of multiple and multilevel inheritance.
#include<bits/stdc++.h>
using namespace std;

// base class
class Vehicle{
    public:
        void fuelUp(){
            cout<<"Vehicle is fueling"<<endl;
        }
};

// intermediate derived class
class Engine: public Vehicle{
    public:
        void startEngine(){
            cout<<"Engine has started"<<endl;
        }
};

// final derived class
class Wheels: public Vehicle{
    public:
        void rotateWheels(){
            cout<<"Wheels are rotating"<<endl;
        }
};

class Car: public Engine, public Wheels{
    public:
        void drive(){
            cout<<"Car is driving"<<endl;
        }
};

int main(){
    Car myCar;

    myCar.startEngine();
    myCar.rotateWheels();
    myCar.drive();

    myCar.Engine::fuelUp();
    myCar.Wheels::fuelUp();

    return 0;
}