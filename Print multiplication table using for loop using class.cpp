#include <iostream>
using namespace std;
class MultiplicationTablePrinter {
private:
    int num;

public:
    MultiplicationTablePrinter(int n) : num(n) {}

    void printMultiplicationTable() {
        cout << "Multiplication Table of " << num << ":" << endl;
        for (int i = 1; i <= 10; ++i) {
            cout << num << " * " << i << " = " << (num * i) << endl;
        }
    }
};

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    MultiplicationTablePrinter printer(num);
    printer.printMultiplicationTable();

    return 0;
}

