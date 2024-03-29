#include <iostream>
using namespace std;
class finds
{
    public:
        int findFibonacci(int n) {
            if (n <= 0) {
                cout << "Invalid input. Please enter a positive integer." << endl;
                return -1;
            }
        
            int a = 0, b = 1, fib = 0;
        
            if (n == 1) {
                return a;
            } else if (n == 2) {
                return b;
            } else {
                for (int i = 3; i <= n; ++i) {
                    fib = a + b;
                    a = b;
                    b = fib;
                }
                return fib;
            }
        }
};
int main() {
    int n;
    finds f;
    cout << "Enter the value of N to find the Nth Fibonacci number: ";
    cin >> n;

    int result = f.findFibonacci(n);

    if (result != -1) {
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }

    return 0;
}
