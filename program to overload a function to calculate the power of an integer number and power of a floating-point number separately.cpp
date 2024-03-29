#include <iostream>
#include <cmath>
using namespace std;
class PowerCalculator {
public:
    // Overloaded function to calculate power of an integer number
    long long power(int base, int exponent) {
        return static_cast<long long>(pow(base, exponent));
    }

    // Overloaded function to calculate power of a floating-point number
    double power(double base, int exponent) {
        return pow(base, exponent);
    }
};

int main() {
    PowerCalculator calc;

    // Calculating power of an integer number
    int intBase = 2;
    int intExponent = 5;
    cout << "Power of " << intBase << " raised to the power of " << intExponent << " is: "
              << calc.power(intBase, intExponent) << endl;

    // Calculating power of a floating-point number
    double floatBase = 2.5;
    int floatExponent = 3;
    cout << "Power of " << floatBase << " raised to the power of " << floatExponent << " is: "
              << calc.power(floatBase, floatExponent) << endl;

    return 0;
}

