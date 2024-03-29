#include <iostream>
using namespace std;
class ArrayInsertion {
private:
    int *arr;
    int size;

public:
    ArrayInsertion(int *a, int s) : arr(a), size(s) {}

    void insertElement(int element, int position) {
        if (position < 0 || position > size) {
            cout << "Invalid position!" << endl;
            return;
        }

        // Create a new array with increased size
        int newSize = size + 1;
        int *newArr = new int[newSize];

        // Copy elements to new array up to position
        for (int i = 0; i < position; ++i) {
            newArr[i] = arr[i];
        }

        // Insert the new element
        newArr[position] = element;

        // Copy remaining elements from original array
        for (int i = position + 1; i < newSize; ++i) {
            newArr[i] = arr[i - 1];
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

    int element = 6;
    int position = 2;

    ArrayInsertion inserter(arr, size);
    inserter.insertElement(element, position);

    cout << "Array after inserting " << element << " at position " << position << ": ";
    inserter.printArray();

    return 0;
}

