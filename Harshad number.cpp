#include <iostream>
using namespace std;
class HarshadNumberChecker {
private:
    int num;

public:
    HarshadNumberChecker(int n) : num(n) {}

    bool isHarshadNumber() {
        int originalNum = num;
        int sumOfDigits = 0;

        // Calculate the sum of digits
        while (originalNum != 0) {
            sumOfDigits += originalNum % 10;
            originalNum /= 10;
        }

        return num % sumOfDigits == 0;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    HarshadNumberChecker checker(num);
    if (checker.isHarshadNumber())
        cout << num << " is a Harshad number." << endl;
    else
        cout << num << " is not a Harshad number." << endl;

    return 0;
}

