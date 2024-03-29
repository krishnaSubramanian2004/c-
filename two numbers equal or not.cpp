#include <iostream>
using namespace std;
class NumberComparator {
private:
    int num1;
    int num2;

public:
    NumberComparator(int n1, int n2) : num1(n1), num2(n2) {}

    bool isEqual() {
        return num1 == num2;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    NumberComparator comparator(num1, num2);
    if (comparator.isEqual()) {
        cout << "The two numbers are equal." << endl;
    } else {
        cout << "The two numbers are not equal." << endl;
    }

    return 0;
}

