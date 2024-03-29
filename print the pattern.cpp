#include <iostream>
using namespace std;
class PatternPrinter {
private:
    int rows;

public:
    PatternPrinter(int r) : rows(r) {}

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows;
    
    cout << "Enter the number of rows: ";
    cin >> numRows;
    
    PatternPrinter printer(numRows);
    printer.printPattern();

    return 0;
}

