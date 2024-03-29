#include <iostream>
#include <cmath>

class ArmstrongNumberChecker {
private:
    int num;

public:
    ArmstrongNumberChecker(int n) : num(n) {}

    bool isArmstrongNumber() {
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
    
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    ArmstrongNumberChecker checker(num);
    if (checker.isArmstrongNumber())
        std::cout << num << " is an Armstrong number." << std::endl;
    else
        std::cout << num << " is not an Armstrong number." << std::endl;

    return 0;
}

