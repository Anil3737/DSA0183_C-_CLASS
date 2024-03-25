#include <iostream>

class Vehicle {
public:
    virtual void drive() const {
        std::cout << "Vehicle is being driven.\n";
    }
};

class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Car is being driven.\n";
    }
};

class Truck : public Vehicle {
public:
    void drive() const override {
        std::cout << "Truck is being driven.\n";
    }
};

int main() {
    Vehicle vehicle;
    Car car;
    Truck truck;

    vehicle.drive();
    car.drive();
    truck.drive();

    return 0;
}

