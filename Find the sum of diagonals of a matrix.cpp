#include <iostream>
using namespace std;
class MatrixDiagonalSum {
private:
    int **matrix;
    int numRows;
    int numCols;

public:
    MatrixDiagonalSum(int rows, int cols) : numRows(rows), numCols(cols) {
        matrix = new int*[numRows];
        for (int i = 0; i < numRows; ++i) {
            matrix[i] = new int[numCols];
        }
    }

    ~MatrixDiagonalSum() {
        for (int i = 0; i < numRows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    void fillMatrix() {
        std::cout << "Enter elements of the matrix:" << std::endl;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                std::cin >> matrix[i][j];
            }
        }
    }

    int sumOfDiagonals() {
        int sum = 0;
        // Sum of main diagonal
        for (int i = 0; i < numRows && i < numCols; ++i) {
            sum += matrix[i][i];
        }
        // Sum of secondary diagonal
        for (int i = 0; i < numRows && (numCols - i - 1) >= 0; ++i) {
            sum += matrix[i][numCols - i - 1];
        }
        return sum;
    }
};

int main() {
    int numRows, numCols;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> numRows >> numCols;

    MatrixDiagonalSum diagonalSum(numRows, numCols);
    diagonalSum.fillMatrix();

    int sum = diagonalSum.sumOfDiagonals();
    cout << "Sum of diagonals of the matrix: " << sum << endl;

    return 0;
}

