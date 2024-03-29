#include <iostream>
using namespace std;
class GCDCalculator {
private:
    int num1;
    int num2;

public:
    GCDCalculator(int n1, int n2) : num1(n1), num2(n2) {}

    int calculateGCD() {
        int temp;
        do {
            temp = num1 % num2;
            num1 = num2;
            num2 = temp;
        } while (num2 != 0);
        return num1;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    GCDCalculator calculator(num1, num2);
    int gcd = calculator.calculateGCD();
    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}

