#include <iostream>
using namespace std;
// Overloaded function to add two integers
int add(int num1, int num2) {
    return num1 + num2;
}

// Overloaded function to add two floating-point numbers
float add(float num1, float num2) {
    return num1 + num2;
}

int main() {
    int intResult;
    float floatResult;

    // Adding two integers
    intResult = add(5, 10);
    cout << "Sum of integers: " << intResult << endl;

    // Adding two floating-point numbers
    floatResult = add(3.5f, 4.5f);
    cout << "Sum of floating-point numbers: " << floatResult << endl;

    return 0;
}

