#include <iostream>
using namespace std;
class BuzzNumberChecker {
private:
    int num;

public:
    BuzzNumberChecker(int n) : num(n) {}

    bool isBuzzNumber() {
        return (num % 7 == 0) || (num % 10 == 7);
    }
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    BuzzNumberChecker checker(num);
    if (checker.isBuzzNumber())
        cout << num << " is a Buzz number." << endl;
    else
        cout << num << " is not a Buzz number." << endl;

    return 0;
}

