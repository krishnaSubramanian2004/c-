#include <iostream>
using namespace std;
class Dynamic2DArray {
private:
    int **arr;
    int numRows;
    int numCols;

public:
    Dynamic2DArray(int rows, int cols) : numRows(rows), numCols(cols) {
        arr = new int*[numRows];
        for (int i = 0; i < numRows; ++i) {
            arr[i] = new int[numCols];
        }
    }

    ~Dynamic2DArray() {
        for (int i = 0; i < numRows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }

    void fillArray() {
        cout << "Enter " << numRows << "x" << numCols << " elements:" << endl;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                std::cin >> arr[i][j];
            }
        }
    }

    void displayArray() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numRows, numCols;
    cout << "Enter the number of rows and columns for the 2D array: ";
    cin >> numRows >> numCols;

    Dynamic2DArray dynamic2DArray(numRows, numCols);
    dynamic2DArray.fillArray();
    dynamic2DArray.displayArray();

    return 0;
}

