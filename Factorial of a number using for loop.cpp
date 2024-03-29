#include <iostream>
using namespace std;
class FactorialCalculator {
private:
    int num;

public:
    FactorialCalculator(int n) : num(n) {}

    unsigned long long calculateFactorial() {
        unsigned long long factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    FactorialCalculator calculator(num);
    unsigned long long result = calculator.calculateFactorial();
    
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}

