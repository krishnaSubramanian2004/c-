#include <iostream>
using namespace std;
class ArrayAverage {
private:
    int *arr;
    int size;

public:
    ArrayAverage(int *a, int s) : arr(a), size(s) {}

    double calculateAverage() {
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum / size;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayAverage avgCalculator(arr, size);
    double average = avgCalculator.calculateAverage();

    cout << "Average of all elements in the array: " << average << endl;

    return 0;
}

