#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(const string& make, const string& model, int year)
        : make(make), model(model), year(year) {}

    void display() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(const string& make, const string& model, int year, int seatingCapacity, const string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    void display() const {
        Vehicle::display();
        cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
    }
};

class Truck : public Vehicle {
private:
    int payloadCapacity;
    int towingCapacity;

public:
    Truck(const std::string& make, const std::string& model, int year, int payloadCapacity, int towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    void display() const {
        Vehicle::display();
        cout << "Payload Capacity: " << payloadCapacity << " tons, Towing Capacity: " << towingCapacity << " lbs" << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck truck("Ford", "F-150", 2021, 2, 10000);

    cout << "Car Details:" << endl;
    car.display();

    cout << "\nTruck Details:" << endl;
    truck.display();

    return 0;
}

