#include <iostream>
using namespace std;
class ArrayDeletion {
private:
    int *arr;
    int size;

public:
    ArrayDeletion(int *a, int s) : arr(a), size(s) {}

    void deleteElement(int position) {
        if (position < 0 || position >= size) {
            cout << "Invalid position!" << endl;
            return;
        }

        // Create a new array with decreased size
        int newSize = size - 1;
        int *newArr = new int[newSize];

        // Copy elements to new array up to position
        for (int i = 0; i < position; ++i) {
            newArr[i] = arr[i];
        }

        // Copy remaining elements from original array
        for (int i = position; i < newSize; ++i) {
            newArr[i] = arr[i + 1];
        }

        // Delete the original array and assign the new array
        delete[] arr;
        arr = newArr;
        size = newSize;
    }

    void printArray() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int position = 2;

    ArrayDeletion deleter(arr, size);
    deleter.deleteElement(position);

    cout << "Array after deleting element at position " << position << ": ";
    deleter.printArray();

    return 0;
}

