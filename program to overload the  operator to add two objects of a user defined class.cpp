#include <iostream>
using namespace std;
class Number {
private:
    int value;

public:
    // Constructor to initialize value
    Number(int v = 0) : value(v) {}

    // Overloading the += operator
    Number& operator+=(const Number& other) {
        this->value += other.value;
        return *this;
    }

    // Function to display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10); // Creating object num1 of Number class
    Number num2(20); // Creating object num2 of Number class

    // Adding num2 to num1 using overloaded += operator
    num1 += num2;

    // Displaying the updated value of num1
    cout << "Updated value of num1 after addition: ";
    num1.display();

    return 0;
}

