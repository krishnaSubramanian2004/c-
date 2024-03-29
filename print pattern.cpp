#include <iostream>

class PatternPrinter {
private:
    int rows;

public:
    PatternPrinter(int r) : rows(r) {}

    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << i;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int numRows;
    
    std::cout << "Enter the number of rows: ";
    std::cin >> numRows;
    
    PatternPrinter printer(numRows);
    printer.printPattern();

    return 0;
}

