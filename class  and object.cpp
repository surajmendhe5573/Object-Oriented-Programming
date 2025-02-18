#include<bits/stdc++.h>
using namespace std;
class Car{
    public: 
        string brand;   // data members
        int speed;

        void displayDetails(){     //  member function
            cout<<"Brand: "<<brand<<", Speed: "<<speed<<endl;
        }
};
int main(){
    Car myCar;      // Creating an object
    myCar.brand= "Tesla";
    myCar.speed= 200;
    myCar.displayDetails();     // Accessing class method

    return 0;
}


/*
Class: A blueprint for creating objects (data types).
Object: An instance of a class.
*/


// Explore Access Specifiers

// Private: Accessible only within the class.
// Public: Accessible from outside the class.
// Protected: Accessible in the class and its derived classes.

// Constructors: Special methods for initializing objects.
// Destructors: Special methods for cleanup before an object is destroyed.