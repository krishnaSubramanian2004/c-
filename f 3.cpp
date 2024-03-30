#include <iostream>
#include <string>
using namespace std;
class StringReverser {
public:
    string reverseString(string str) {
        int n = str.length();
        for (int i = 0; i < n / 2; ++i) {
            char temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }
        return str;
    }
};
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    StringReverser obj;
    string reversedString = obj.reverseString(input);
    cout << "Reverse of the string: " << reversedString << endl;
    return 0;
}

