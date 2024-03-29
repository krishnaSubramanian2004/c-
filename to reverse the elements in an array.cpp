#include <iostream>
using namespace std;
class ArrayReverser {
private:
    int *arr;
    int size;

public:
    ArrayReverser(int *a, int s) : arr(a), size(s) {}

    void reverseArray() {
        for (int i = 0; i < size / 2; ++i) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }

    void printArray() {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ArrayReverser reverser(arr, size);
    reverser.reverseArray();

    cout << "Reversed array: ";
    reverser.printArray();

    return 0;
}

