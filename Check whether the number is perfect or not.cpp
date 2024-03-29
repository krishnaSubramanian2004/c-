#include <iostream>
using namespace std;
class PerfectNumberChecker {
private:
    int num;

public:
    PerfectNumberChecker(int n) : num(n) {}

    bool isPerfectNumber() {
        int sum = 0;
        for (int i = 1; i <= num / 2; ++i) {
            if (num % i == 0)
                sum += i;
        }
        return sum == num;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    PerfectNumberChecker checker(num);
    if (checker.isPerfectNumber())
        cout << num << " is a perfect number." << endl;
    else
        cout << num << " is not a perfect number." << endl;

    return 0;
}

