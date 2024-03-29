#include <iostream>
#include <cmath>
using namespace std;
class NarcissisticNumberChecker {
private:
    int num;

public:
    NarcissisticNumberChecker(int n) : num(n) {}

    bool isNarcissisticNumber() {
        int originalNum = num;
        int numDigits = 0;
        int sum = 0;

        // Count the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++numDigits;
        }

        // Calculate the sum of digits raised to the power of numDigits
        originalNum = num;
        while (originalNum != 0) {
            int digit = originalNum % 10;
            sum += std::pow(digit, numDigits);
            originalNum /= 10;
        }

        return sum == num;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    NarcissisticNumberChecker checker(num);
    if (checker.isNarcissisticNumber())
        cout << num << " is a narcissistic number." << endl;
    else
        cout << num << " is not a narcissistic number." << endl;

    return 0;
}

