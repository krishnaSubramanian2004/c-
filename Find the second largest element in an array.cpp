#include <iostream>
#include <climits>

class SecondLargestElementFinder {
private:
    int *arr;
    int size;

public:
    SecondLargestElementFinder(int *a, int s) : arr(a), size(s) {}

    int findSecondLargest() {
        int max = INT_MIN;
        int secondMax = INT_MIN;

        for (int i = 0; i < size; ++i) {
            if (arr[i] > max) {
                secondMax = max;
                max = arr[i];
            } else if (arr[i] > secondMax && arr[i] != max) {
                secondMax = arr[i];
            }
        }

        return secondMax;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    SecondLargestElementFinder finder(arr, size);
    int secondLargest = finder.findSecondLargest();

    if (secondLargest != INT_MIN)
        std::cout << "Second largest element in the array: " << secondLargest << std::endl;
    else
        std::cout << "There is no second largest element in the array." << std::endl;

    return 0;
}

