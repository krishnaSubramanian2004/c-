#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
class FactorialCalculator {
public:
    int calculate(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * calculate(n - 1);
        }
    }
};

int main() {
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    int result1 = factorial(num);
    cout << "Factorial using function: " << result1 << endl;
    FactorialCalculator obj;
    int result2 = obj.calculate(num);
    cout << "Factorial using class: " << result2 << endl;
    return 0;
}

