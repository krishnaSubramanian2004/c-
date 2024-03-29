#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> matrix;

public:
    // Constructor
    Matrix(const std::vector<std::vector<int>>& m) : matrix(m) {}

    // Overloading the * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        int m = matrix.size();
        int n = matrix[0].size();
        int p = other.matrix[0].size();

        std::vector<std::vector<int>> result(m, std::vector<int>(p, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < p; ++j) {
                for (int k = 0; k < n; ++k) {
                    result[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }

        return Matrix(result);
    }

    // Function to display matrix
    void display() const {
        for (const auto& row : matrix) {
            for (int elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // Define two matrices
    std::vector<std::vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> mat2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Create objects of Matrix class
    Matrix matrix1(mat1);
    Matrix matrix2(mat2);

    // Multiply matrices using overloaded * operator
    Matrix result = matrix1 * matrix2;

    // Display the result
    std::cout << "Result of matrix multiplication:" << std::endl;
    result.display();

    return 0;
}

