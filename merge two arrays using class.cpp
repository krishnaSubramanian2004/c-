#include <iostream>
using namespace std;
class ArrayMerger {
private:
    int *arr1;
    int *arr2;
    int size1;
    int size2;

public:
    ArrayMerger(int *a1, int s1, int *a2, int s2) : arr1(a1), size1(s1), arr2(a2), size2(s2) {}

    void mergeArrays(int *resultArr, int &resultSize) {
        for (int i = 0; i < size1; ++i) {
            resultArr[i] = arr1[i];
        }

        for (int i = 0; i < size2; ++i) {
            resultArr[size1 + i] = arr2[i];
        }

        resultSize = size1 + size2;
    }
};

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int *mergedArray = new int[mergedSize];

    ArrayMerger merger(arr1, size1, arr2, size2);
    merger.mergeArrays(mergedArray, mergedSize);

    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    delete[] mergedArray;

    return 0;
}

