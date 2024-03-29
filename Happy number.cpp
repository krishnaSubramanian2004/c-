#include <iostream>
#include <unordered_set>

class HappyNumberChecker {
private:
    int num;

public:
    HappyNumberChecker(int n) : num(n) {}

    bool isHappyNumber() {
        std::unordered_set<int> seen;

        while (num != 1 && seen.find(num) == seen.end()) {
            seen.insert(num);
            int sum = 0;
            while (num > 0) {
                int digit = num % 10;
                sum += digit * digit;
                num /= 10;
            }
            num = sum;
        }

        return num == 1;
    }
};

int main() {
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    HappyNumberChecker checker(num);
    if (checker.isHappyNumber())
        std::cout << num << " is a happy number." << std::endl;
    else
        std::cout << num << " is not a happy number." << std::endl;

    return 0;
}

