#include <iostream>
using namespace std;
class NumberChecker {
private:
    int num;

public:
    NumberChecker(int n) : num(n) {}

    void check() {
        if (num > 0)
            cout << "The number is positive." << endl;
        else if (num < 0)
            cout << "The number is negative." << endl;
        else
            cout << "The number is zero." << endl;
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    NumberChecker checker(num);
    checker.check();

    return 0;
}

