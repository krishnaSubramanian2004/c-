#include <iostream>
using namespace std;
class OccurrenceCounter {
private:
    int *arr;
    int size;

public:
    OccurrenceCounter(int *a, int s) : arr(a), size(s) {}

    int countOccurrences(int value) {
        int count = 0;
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetValue = 2;

    OccurrenceCounter counter(arr, size);
    int occurrences = counter.countOccurrences(targetValue);

    cout << "Number of occurrences of " << targetValue << " in the array: " << occurrences << endl;

    return 0;
}

