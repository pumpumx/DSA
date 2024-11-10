#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string make;
    int year;
    float fuel;

public:
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}

    void refuel(float amount) {
        fuel += amount;
        cout << "Refueled by " << amount << " liters. Current fuel: " << fuel << " liters." << endl;
    }

    virtual void display() {
        cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " liters" << endl;
    }
};


class Car : public Vehicle {
private:
    int doors;

public:
    Car(string m, int y, float f, int d) : Vehicle(m, y, f), doors(d) {}

    void display() override {
        Vehicle::display();
        cout << "Doors: " << doors << endl;
    }

    void openDoors() {
        cout << "Doors are opened." << endl;
    }
};


class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    Bike(string m, int y, float f, bool carrier) : Vehicle(m, y, f), hasCarrier(carrier) {}

    void display() override {
        Vehicle::display();
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }

    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

int main() {
    Car myCar("Toyota", 2021, 15.0, 4);
    Bike myBike("Yamaha", 2020, 5.0, true);

    myCar.refuel(10.0);
    myBike.refuel(2.0);

    cout << "\nCar Details:" << endl;
    myCar.display();
    myCar.openDoors();

    cout << "\nBike Details:" << endl;
    myBike.display();
    myBike.kickStart();

    return 0;
}
