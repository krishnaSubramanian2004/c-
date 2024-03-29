#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class PalindromeChecker {
public:
    bool isPalindrome(string str) {
        str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    PalindromeChecker obj;
    if (obj.isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}

