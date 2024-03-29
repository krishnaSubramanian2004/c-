#include <iostream>
using namespace std;
class DynamicArray {
private:
    int *arr;
    int size;

public:
    DynamicArray(int s) : size(s) {
        arr = new int[size];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void fillArray() {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void displayArray() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    DynamicArray dynamicArray(size);
    dynamicArray.fillArray();
    dynamicArray.displayArray();

    return 0;
}

