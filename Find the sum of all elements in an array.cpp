#include <iostream>
using namespace std;
class ArraySum {
private:
    int *arr;
    int size;

public:
    ArraySum(int *a, int s) : arr(a), size(s) {}

    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArraySum sumCalculator(arr, size);
    int totalSum = sumCalculator.calculateSum();

    cout << "Sum of all elements in the array: " << totalSum << endl;

    return 0;
}

