#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    // Constructor to initialize value
    Number(int v = 0) : value(v) {}

    // Overloading the + operator
    Number operator+(const Number& other) {
        Number result;
        result.value = this->value + other.value;
        return result;
    }

    // Function to display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5); // Creating object num1 of Number class
    Number num2(10); // Creating object num2 of Number class

    // Adding two objects using overloaded + operator
    Number sum = num1 + num2;

    // Displaying the result
    cout << "Sum of num1 and num2: ";
    sum.display();

    return 0;
}

