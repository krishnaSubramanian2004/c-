#include <iostream>
#include <cmath>
using namespace std;
class NumberRounder {
private:
    double num;

public:
    NumberRounder(double n) : num(n) {}

    void roundToNearestInteger() {
        cout << "Original Number: " << num << endl;
        cout << "Nearest Integer (Floor): " << floor(num) << endl;
        cout << "Nearest Integer (Ceil): " << ceil(num) << endl;
    }
};

int main() {
    double num;
    
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    NumberRounder rounder(num);
    rounder.roundToNearestInteger();

    return 0;
}

