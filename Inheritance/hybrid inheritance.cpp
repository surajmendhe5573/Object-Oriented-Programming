#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void fuelUp() {
        cout << "Vehicle is fueling up." << endl;
    }
};

// Intermediate base class 1 (inherited from Vehicle)
class Engine : public Vehicle {
public:
    void startEngine() {
        cout << "Engine has started." << endl;
    }
};

// Intermediate base class 2 (inherited from Vehicle)
class Wheels : public Vehicle {
public:
    void rotateWheels() {
        cout << "Wheels are rotating." << endl;
    }
};

// Derived class (inherits from both Engine and Wheels)
class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main() {
    // Create an object of the derived class
    Car myCar;

    // Access methods from multiple inheritance levels
    myCar.startEngine();  // From Engine
    myCar.rotateWheels(); // From Wheels
    myCar.drive();        // Specific to Car

    // To access the base class method (Vehicle::fuelUp()), we must disambiguate
    myCar.Engine::fuelUp();
    myCar.Wheels::fuelUp();

    return 0;
}


// Hybrid Inheritance: A combination of multiple and multilevel inheritance.