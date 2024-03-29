#include <iostream>
using namespace std;
class MaximumFinder {
public:
    // Overloaded function to find maximum of two integers
    int findMaximum(int num1, int num2) {
        return (num1 > num2) ? num1 : num2;
    }

    // Overloaded function to find maximum of two floating-point numbers
    float findMaximum(float num1, float num2) {
        return (num1 > num2) ? num1 : num2;
    }

    // Overloaded function to find maximum of two characters
    char findMaximum(char char1, char char2) {
        return (char1 > char2) ? char1 : char2;
    }
};

int main() {
    MaximumFinder finder;

    // Finding maximum of two integers
    int maxInt = finder.findMaximum(5, 10);
    cout << "Maximum of integers: " << maxInt << endl;

    // Finding maximum of two floating-point numbers
    float maxFloat = finder.findMaximum(3.5f, 4.5f);
    cout << "Maximum of floating-point numbers: " << maxFloat << endl;

    // Finding maximum of two characters
    char maxChar = finder.findMaximum('A', 'Z');
    cout << "Maximum of characters: " << maxChar << endl;

    return 0;
}

