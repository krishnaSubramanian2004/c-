#include <iostream>
using namespace std;
class NumberSwapper {
private:
    int num1;
    int num2;

public:
    NumberSwapper(int n1, int n2) : num1(n1), num2(n2) {}

    void swap() {
        // Displaying original numbers
        cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

        // Swapping numbers using XOR operator
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;

        // Displaying swapped numbers
        cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    NumberSwapper swapper(num1, num2);
    swapper.swap();

    return 0;
}

