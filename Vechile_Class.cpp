#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(std::string make, std::string model, int year)
        : make(make), model(model), year(year) {}
    std::string getMake() const { return make; }
    void setMake(const std::string& newMake) { make = newMake; }
    std::string getModel() const { return model; }
    void setModel(const std::string& newModel) { model = newModel; }

    // Getter and Setter for Year
    int getYear() const { return year; }
    void setYear(int newYear) { year = newYear; }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(std::string make, std::string model, int year, int seatingCapacity, std::string fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    // Getter and Setter for Seating Capacity
    int getSeatingCapacity() const { return seatingCapacity; }
    void setSeatingCapacity(int newSeatingCapacity) { seatingCapacity = newSeatingCapacity; }

    // Getter and Setter for Fuel Type
    std::string getFuelType() const { return fuelType; }
    void setFuelType(const std::string& newFuelType) { fuelType = newFuelType; }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    Truck(std::string make, std::string model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    // Getter and Setter for Payload Capacity
    int getPayloadCapacity() const { return payloadCapacity; }
    void setPayloadCapacity(int newPayloadCapacity) { payloadCapacity = newPayloadCapacity; }

    // Getter and Setter for Towing Capacity
    int getTowingCapacity() const { return towingCapacity; }
    void setTowingCapacity(int newTowingCapacity) { towingCapacity = newTowingCapacity; }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    std::cout << "Car: " << car.getMake() << " " << car.getModel() << " " << car.getYear() << std::endl;
    std::cout << "Seating Capacity: " << car.getSeatingCapacity() << std::endl;
    std::cout << "Fuel Type: " << car.getFuelType() << std::endl;

    Truck truck("Ford", "F-150", 2022, 2000, 5000);
    std::cout << "\nTruck: " << truck.getMake() << " " << truck.getModel() << " " << truck.getYear() << std::endl;
    std::cout << "Payload Capacity: " << truck.getPayloadCapacity() << std::endl;
    std::cout << "Towing Capacity: " << truck.getTowingCapacity() << std::endl;

    return 0;
}

