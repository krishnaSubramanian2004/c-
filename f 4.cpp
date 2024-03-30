#include <iostream>
#include <climits>
using namespace std;
class MinMaxFinder {
public:
    void findMinMax(int arr[], int size, int &minElement, int &maxElement) {
        minElement = INT_MAX;
        maxElement = INT_MIN;

        for (int i = 0; i < size; ++i) {
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
    }
};
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    MinMaxFinder obj;
    int minElement, maxElement;
    obj.findMinMax(arr, size, minElement, maxElement);
    cout << "Minimum element in the array: " << minElement << endl;
    cout << "Maximum element in the array: " << maxElement << endl;
    delete[] arr;
    return 0;
}

