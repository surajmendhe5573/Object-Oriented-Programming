#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() const {
        cout << "Drawing a generic shape." << endl;
    }

    virtual ~Shape() {} // Virtual destructor
};

// Derived class for Circle
class Circle : public Shape {
public:
    // Override the virtual function
    void draw() const override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    // Override the virtual function
    void draw() const override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    // Base class pointer
    Shape* shape;

    // Pointing to a Circle object
    Circle circle;
    shape = &circle;
    shape->draw(); // Calls Circle's draw()

    // Pointing to a Rectangle object
    Rectangle rectangle;
    shape = &rectangle;
    shape->draw(); // Calls Rectangle's draw()

    return 0;
}
