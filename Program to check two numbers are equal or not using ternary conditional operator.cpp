#include <iostream>
using namespace std;
class NumberComparator {
private:
    int num1;
    int num2;

public:
    NumberComparator(int n1, int n2) : num1(n1), num2(n2) {}

    void checkEquality() {
        cout << (num1 == num2 ? "The numbers are equal." : "The numbers are not equal.") << endl;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    NumberComparator comparator(num1, num2);
    comparator.checkEquality();

    return 0;
}

