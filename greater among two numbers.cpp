#include <iostream>
using namespace std;
class NumberComparer {
private:
    int num1;
    int num2;

public:
    NumberComparer(int n1, int n2) : num1(n1), num2(n2) {}

    void compare() {
        if (num1 > num2)
            cout << num1 << " is greater than " << num2 << endl;
        else if (num1 < num2)
            cout << num2 << " is greater than " << num1 << endl;
        else
            cout << "Both numbers are equal." << endl;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    NumberComparer comparer(num1, num2);
    comparer.compare();

    return 0;
}

