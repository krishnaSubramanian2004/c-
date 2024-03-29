#include <iostream>
using namespace std;
class AverageCalculator {
private:
    int num1;
    int num2;
    int num3;

public:
    AverageCalculator(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

    double computeAverage() {
        return static_cast<double>(num1 + num2 + num3) / 3.0;
    }
};

int main() {
    int num1, num2, num3;
    
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    
    AverageCalculator avgCalc(num1, num2, num3);
    double average = avgCalc.computeAverage();
    
    cout << "The average of the three integers is: " << average << endl;

    return 0;
}

