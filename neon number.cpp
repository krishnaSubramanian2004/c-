#include <iostream>
using namespace std;
class NeonNumberChecker {
private:
    int num;

public:
    NeonNumberChecker(int n) : num(n) {}

    bool isNeonNumber() {
        int square = num * num;
        int sum = 0;

        // Calculate the sum of digits of square
        while (square != 0) {
            sum += square % 10;
            square /= 10;
        }

        return sum == num;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    NeonNumberChecker checker(num);
    if (checker.isNeonNumber())
        cout << num << " is a neon number." << endl;
    else
        cout << num << " is not a neon number." << endl;

    return 0;
}

