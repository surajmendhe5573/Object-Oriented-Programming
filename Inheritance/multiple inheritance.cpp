#include<bits/stdc++.h>
using namespace std;

// Base class 1
class Engine {
public:
    void startEngine() {
        cout << "Engine has started" << endl;
    }
};

// Base class 2
class Wheels {
public:
    void rotateWheels() {
        cout << "Wheels are rotating" << endl;
    }
};

// Derived class inheriting from two base classes
class Car : public Engine, public Wheels {
public:
    void driving() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car myCar; // Create an object of the derived class `Car`

    myCar.startEngine();   // Inherited from Engine
    myCar.rotateWheels();  // Inherited from Wheels

    myCar.driving();       // Specific to Car

    return 0;
}

// Multiple Inheritance: A derived class inherits from multiple base classes.