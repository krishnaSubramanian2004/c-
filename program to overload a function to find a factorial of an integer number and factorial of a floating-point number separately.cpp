#include <iostream>
using namespace std;
class FactorialCalculator {
public:
    // Overloaded function to find factorial of an integer number
    unsigned long long factorial(int n) {
        if (n < 0) {
            cerr << "Factorial is not defined for negative integers." << endl;
            return 0;
        }
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    // Overloaded function to find factorial of a floating-point number
    double factorial(double n) {
        if (n < 0) {
            cerr << "Factorial is not defined for negative numbers." << endl;
            return 0.0;
        }
        if (n == 0) {
            return 1.0;
        }
        double result = 1.0;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    FactorialCalculator calc;

    // Finding factorial of an integer number
    int intNum = 5;
    cout << "Factorial of " << intNum << " is: " << calc.factorial(intNum) << endl;

    // Finding factorial of a floating-point number
    double floatNum = 5.5;
    cout << "Factorial of " << floatNum << " is: " << calc.factorial(floatNum) << endl;

    return 0;
}

