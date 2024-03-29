#include <iostream>
using namespace std;
class NumberPrinter {
public:
    void printNumbers() {
        for (int i = 1; i <= 10; ++i) {
            std::cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    NumberPrinter printer;
    printer.printNumbers();

    return 0;
}

