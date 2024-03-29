#include <iostream>
#include <algorithm>

class ArraySorter {
public:
    // Overloaded function to sort an integer array
    void sort(int arr[], int size) {
        std::sort(arr, arr + size);
    }

    // Overloaded function to sort a double array
    void sort(double arr[], int size) {
        std::sort(arr, arr + size);
    }
};

int main() {
    ArraySorter sorter;

    // Sorting an integer array
    int intArr[] = {5, 2, 9, 1, 7};
    int intSize = sizeof(intArr) / sizeof(int);
    sorter.sort(intArr, intSize);
    std::cout << "Sorted integer array:";
    for (int i = 0; i < intSize; ++i) {
        std::cout << " " << intArr[i];
    }
    std::cout << std::endl;

    // Sorting a double array
    double doubleArr[] = {3.5, 1.2, 2.7, 0.8, 4.1};
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    sorter.sort(doubleArr, doubleSize);
    std::cout << "Sorted double array:";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << " " << doubleArr[i];
    }
    std::cout << std::endl;

    return 0;
}

