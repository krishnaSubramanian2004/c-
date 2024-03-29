#include <iostream>
using namespace std;
class FloatCalculator {
private:
    float num1;
    float num2;

public:
    FloatCalculator(float n1, float n2) : num1(n1), num2(n2) {}

    void addition() {
        cout << "Addition Result: " << num1 + num2 << endl;
    }

    void subtraction() {
        cout << "Subtraction Result: " << num1 - num2 << endl;
    }

    void multiplication() {
        cout << "Multiplication Result: " << num1 * num2 << endl;
    }

    void division() {
        if (num2 != 0)
            cout << "Division Result: " << num1 / num2 << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }

    void modulo() {
        // Modulo operation is not applicable for floating-point numbers
        cout << "Modulo operation is not applicable for floating-point numbers." << endl;
    }
};

int main() {
    float num1, num2;
    
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> num1 >> num2;
    
    FloatCalculator calc(num1, num2);
    
    calc.addition();
    calc.subtraction();
    calc.multiplication();
    calc.division();
    calc.modulo();

    return 0;
}

