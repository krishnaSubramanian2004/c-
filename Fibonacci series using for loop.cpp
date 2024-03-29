#include <iostream>
using namespace std;
class FibonacciGenerator {
private:
    int n;

public:
    FibonacciGenerator(int num) : n(num) {}

    void generateFibonacciSeries() {
        int first = 0, second = 1, next;

        cout << "Fibonacci Series up to " << n << " terms:" << endl;
        for (int i = 0; i < n; ++i) {
            if (i <= 1)
                next = i;
            else {
                next = first + second;
                first = second;
                second = next;
            }
            cout << next << " ";
        }
        cout << endl;
    }
};

int main() {
    int num;
    
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> num;
    
    FibonacciGenerator generator(num);
    generator.generateFibonacciSeries();

    return 0;
}

