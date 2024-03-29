#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(const std::string& carMake, const std::string& carModel, int carYear) 
        : make(carMake), model(carModel), year(carYear) {
        cout << "A new car of make " << make << ", model " << model << " and year " << year << " has been created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "The car of make " << make << ", model " << model << " and year " << year << " has been destroyed." << endl;
    }
};

int main() {
    // Creating an object of Car class
    Car myCar("Toyota", "Camry", 2022);

    // The destructor will be called automatically when myCar goes out of scope
    return 0;
}

