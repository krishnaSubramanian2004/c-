#include <iostream>
using namespace std;
class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int n1, int n2) : num1(n1), num2(n2) {}

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
            cout << "Division Result: " << static_cast<double>(num1) / num2 << endl;
        else
            cout << "Cannot divide by zero!" << endl;
    }

    void modulo() {
        if (num2 != 0)
            cout << "Modulo Result: " << num1 % num2 << endl;
        else
            cout << "Cannot perform modulo operation when divisor is zero!" << endl;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    Calculator calc(num1, num2);
    
    calc.addition();
    calc.subtraction();
    calc.multiplication();
    calc.division();
    calc.modulo();

    return 0;
}

