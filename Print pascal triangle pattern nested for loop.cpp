#include <iostream>
using namespace std;
class PascalTriangle {
private:
    int rows;

public:
    PascalTriangle(int r) : rows(r) {}

    void printTriangle() {
        for (int i = 0; i < rows; ++i) {
            int number = 1;
            for (int j = 0; j <= i; ++j) {
                std::cout << number << " ";
                number = number * (i - j) / (j + 1);
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows;
    
    cout << "Enter the number of rows: ";
    cin >> numRows;
    
    PascalTriangle triangle(numRows);
    triangle.printTriangle();

    return 0;
}

