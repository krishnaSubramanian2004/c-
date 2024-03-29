#include <iostream>
using namespace std;
class MatrixAddition {
private:
    int **matrix1;
    int **matrix2;
    int **result;
    int numRows;
    int numCols;

public:
    MatrixAddition(int rows, int cols) : numRows(rows), numCols(cols) {
        matrix1 = new int*[numRows];
        matrix2 = new int*[numRows];
        result = new int*[numRows];
        for (int i = 0; i < numRows; ++i) {
            matrix1[i] = new int[numCols];
            matrix2[i] = new int[numCols];
            result[i] = new int[numCols];
        }
    }

    ~MatrixAddition() {
        for (int i = 0; i < numRows; ++i) {
            delete[] matrix1[i];
            delete[] matrix2[i];
            delete[] result[i];
        }
        delete[] matrix1;
        delete[] matrix2;
        delete[] result;
    }

    void fillMatrices() {
        cout << "Enter elements of first matrix:" << endl;
        fillMatrix(matrix1);
        cout << "Enter elements of second matrix:" << endl;
        fillMatrix(matrix2);
    }

    void fillMatrix(int **matrix) {
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    void addMatrices() {
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }

    void displayResult() {
        cout << "Resultant matrix after addition:" << endl;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows, numCols;
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> numRows >> numCols;

    MatrixAddition matrixAddition(numRows, numCols);
    matrixAddition.fillMatrices();
    matrixAddition.addMatrices();
    matrixAddition.displayResult();

    return 0;
}

