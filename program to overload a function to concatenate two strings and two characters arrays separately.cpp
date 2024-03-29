#include <iostream>
#include <cstring>
using namespace std;
class Concatenator {
public:
    // Overloaded function to concatenate two strings
    string concatenate(const string& str1, const string& str2) {
        return str1 + str2;
    }

    // Overloaded function to concatenate two character arrays
    char* concatenate(const char* arr1, const char* arr2) {
        size_t len1 = strlen(arr1);
        size_t len2 = strlen(arr2);
        char* result = new char[len1 + len2 + 1];
        strcpy(result, arr1);
        strcat(result, arr2);
        return result;
    }
};

int main() {
    Concatenator concat;

    // Concatenating two strings
    string strConcat = concat.concatenate("Hello, ", "world!");
    cout << "Concatenated string: " << strConcat << endl;

    // Concatenating two character arrays
    const char* arr1 = "Hello, ";
    const char* arr2 = "world!";
    char* charConcat = concat.concatenate(arr1, arr2);
    cout << "Concatenated character array: " << charConcat << endl;

    delete[] charConcat; // Freeing the dynamically allocated memory

    return 0;
}

