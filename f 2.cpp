#include <iostream>
using namespace std;
class PrimeChecker {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    PrimeChecker obj;
    if (obj.isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}

