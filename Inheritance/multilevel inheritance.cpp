// Multilevel Inheritance: A derived class inherits from another derived class.
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void fuelUp() {
        cout << "Vehicle is fueling up." << endl;
    }
};

// Intermediate derived class (inherits from Vehicle)
class Car : public Vehicle {
public:
    void startCar() {
        cout << "Car has started." << endl;
    }
};

// Final derived class (inherits from Car)
class SportsCar : public Car {
public:
    void activateTurbo() {
        cout << "Turbo mode activated in SportsCar!" << endl;
    }
};

int main() {
    SportsCar mySportcar; // Create an object of the final derived class `SportCar`

    mySportcar.fuelUp();     // Inherited from Vehicle
    mySportcar.startCar();   // Inherited from car

    mySportcar.activateTurbo(); // Specific to SportCar

    return 0;
}


