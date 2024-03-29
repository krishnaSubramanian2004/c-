#include <iostream>
#include <cmath>
using namespace std;
class AbsoluteValueCalculator {
public:
    // Overloaded function to find absolute value of an integer number
    int absolute(int num) {
        return abs(num);
    }

    // Overloaded function to find absolute value of a floating-point number
    double absolute(double num) {
        return fabs(num);
    }
};

int main() {
    AbsoluteValueCalculator calc;

    // Finding absolute value of an integer number
    int intNum = -5;
    cout << "Absolute value of " << intNum << " is: " << calc.absolute(intNum) << endl;

    // Finding absolute value of a floating-point number
    double floatNum = -3.5;
    cout << "Absolute value of " << floatNum << " is: " << calc.absolute(floatNum) << endl;

    return 0;
}

