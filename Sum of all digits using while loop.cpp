#include <iostream>
using namesapce std;
class DigitSummer {
private:
    int num;

public:
    DigitSummer(int n) : num(n) {}

    int calculateSum() {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit to sum
            num /= 10; // Remove the last digit from the number
        }
        return sum;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    DigitSummer summer(num);
    int sum = summer.calculateSum();
    
    cout << "Sum of all digits: " << sum << endl;

    return 0;
}

