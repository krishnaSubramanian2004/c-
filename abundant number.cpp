#include <iostream>
using namespace std;
class AbundantNumberChecker {
private:
    int num;

public:
    AbundantNumberChecker(int n) : num(n) {}

    int sumOfDivisors(int n) {
        int sum = 0;
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0)
                sum += i;
        }
        return sum;
    }

    bool isAbundantNumber() {
        return sumOfDivisors(num) > num;
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    AbundantNumberChecker checker(num);
    if (checker.isAbundantNumber())
        cout << num << " is an abundant number." << endl;
    else
        cout << num << " is not an abundant number." << endl;

    return 0;
}

