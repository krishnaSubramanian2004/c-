#include <iostream>
using namespace std;
class NumberComparator {
private:
    int num1;
    int num2;
    int num3;

public:
    NumberComparator(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

    void findLargest() {
        int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
        cout << "The largest number is: " << largest << endl;
    }
};

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    NumberComparator comparator(num1, num2, num3);
    comparator.findLargest();

    return 0;
}

