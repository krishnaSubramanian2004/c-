#include <iostream>
using namespace std;
class DivisibilityChecker {
private:
    int num;

public:
    DivisibilityChecker(int n) : num(n) {}

    void checkDivisibility() {
        cout << (num % 3 == 0 ? "The number is divisible by 3." : "The number is not divisible by 3.") << endl;
    }
};

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    DivisibilityChecker checker(num);
    checker.checkDivisibility();

    return 0;
}

