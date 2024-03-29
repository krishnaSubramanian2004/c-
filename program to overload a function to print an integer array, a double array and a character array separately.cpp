#include <iostream>
using namespace std;
class Printer {
public:
    // Overloaded function to print an integer array
    void print(const int arr[], int size) {
        cout << "Printing integer array:" << endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overloaded function to print a double array
    void print(const double arr[], int size) {
        cout << "Printing double array:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Overloaded function to print a character array
    void print(const char arr[], int size) {
        cout << "Printing character array:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Printer printer;

    // Integer array
    int intArr[] = {1, 2, 3, 4, 5};
    printer.print(intArr, sizeof(intArr) / sizeof(int));

    // Double array
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printer.print(doubleArr, sizeof(doubleArr) / sizeof(double));

    // Character array
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};
    printer.print(charArr, sizeof(charArr) / sizeof(char));

    return 0;
}

