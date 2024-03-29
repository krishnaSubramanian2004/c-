#include <iostream>
#include <string>
using namespace std;

class check {
public:
    void checks(string n) {
        string m;
        for (int i = n.length() - 1; i >= 0; i--) {
            m += n[i];
        }
        if (m == n) {
            cout << "Palindrome" << endl;
        } else {
            cout << "Not a palindrome" << endl;
        }
    }
};

int main() {
    check c;
    string n;
    cout << "Enter the string value: ";
    cin >> n;
    c.checks(n);

    return 0;
}
