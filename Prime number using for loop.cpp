#include <iostream>

class PrimeChecker {
private:
    int num;

public:
    PrimeChecker(int n) : num(n) {}

    bool isPrime() {
        if (num <= 1)
            return false;
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    PrimeChecker checker(num);
    if (checker.isPrime())
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}

