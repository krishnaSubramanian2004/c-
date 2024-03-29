#include <iostream>
using namespace std;
class finds{
    public:
        int finding(int arr[], int size) {
            int i = 0;
            while (i < size) {
                if (arr[i] != i) {
                    return i;
                }
                i++;
            }
            return i; 
        }
};

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    finds f;
    int smallestMissing = f.finding(arr, size);
    cout << "The smallest missing element is: " << smallestMissing << endl;

    return 0;
}
