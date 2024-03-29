#include <iostream>
using namespace std;
class MatrixMultiplication {
private:
    int **matrix1;
    int **matrix2;
    int **result;
    int numRows1;
    int numCols1;
    int numRows2;
    int numCols2;

public:
    MatrixMultiplication(int rows1, int cols1, int rows2, int cols2)
        : numRows1(rows1), numCols1(cols1), numRows2(rows2), numCols2(cols2) {
        if (numCols1 != numRows2) {
            cerr << "Error: Number of columns in first matrix must match number of rows in second matrix." << endl;
            exit(1);
        }

        matrix1 = new int*[numRows1];
        for (int i = 0; i < numRows1; ++i) {
            matrix1[i] = new int[numCols1];
        }

        matrix2 = new int*[numRows2];
        for (int i = 0; i < numRows2; ++i) {
            matrix2[i] = new int[numCols2];
        }

        result = new int*[numRows1];
        for (int i = 0; i < numRows1; ++i) {
            result[i] = new int[numCols2];
        }
    }

    ~MatrixMultiplication() {
        for (int i = 0; i < numRows1; ++i) {
            delete[] matrix1[i];
        }
        delete[] matrix1;

        for (int i = 0; i < numRows2; ++i) {
            delete[] matrix2[i];
        }
        delete[] matrix2;

        for (int i = 0; i < numRows1; ++i) {
            delete[] result[i];
        }
        delete[] result;
    }

    void fillMatrices() {
        cout << "Enter elements of first matrix:" << endl;
        fillMatrix(matrix1, numRows1, numCols1);
        cout << "Enter elements of second matrix:" << endl;
        fillMatrix(matrix2, numRows2, numCols2);
    }

    void fillMatrix(int **matrix, int numRows, int numCols) {
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    void multiplyMatrices() {
        for (int i = 0; i < numRows1; ++i) {
            for (int j = 0; j < numCols2; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < numCols1; ++k) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
    }

    void displayResult() {
        cout << "Resultant matrix after multiplication:" << endl;
        for (int i = 0; i < numRows1; ++i) {
            for (int j = 0; j < numCols2; ++j) {
                std::cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows1, numCols1, numRows2, numCols2;
    cout << "Enter the dimensions of the first matrix (rows cols): ";
    cin >> numRows1 >> numCols1;
    cout << "Enter the dimensions of the second matrix (rows cols): ";
    cin >> numRows2 >> numCols2;

    MatrixMultiplication matrixMultiplication(numRows1, numCols1, numRows2, numCols2);
    matrixMultiplication.fillMatrices();
    matrixMultiplication.multiplyMatrices();
    matrixMultiplication.displayResult();

    return 0;
}

