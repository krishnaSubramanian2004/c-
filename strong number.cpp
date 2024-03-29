#include <iostream>
using namespace std;
class StrongNumberChecker {
private:
    int num;

public:
    StrongNumberChecker(int n) : num(n) {}

    int factorial(int n) {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    bool isStrongNumber() {
        int originalNum = num;
        int sum = 0;

        while (originalNum > 0) {
            int digit = originalNum % 10;
            sum += factorial(digit);
            originalNum /= 10;
        }

        return sum == num;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    StrongNumberChecker checker(num);
    if (checker.isStrongNumber())
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;

    return 0;
}

