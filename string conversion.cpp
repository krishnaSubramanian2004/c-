#include <iostream>
#include <string>
using namespace std;

class conversion {
public:
    void upper(string a) {
        string c;
        for (char ch :a) {
            c += toupper(ch);
        }
        cout << "Uppercase value: " << c << endl;
    }

    void lower(string b) {
        string c;
        for (char ch : b) {
            c += tolower(ch);
        }
        cout << "Lowercase value: " << c << endl;
    }
};

int main() {
    conversion c;
    string s;
    int choice;

    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the choice (1 for uppercase, 2 for lowercase): ";
    cin >> choice;

    if (choice == 1) {
        c.upper(s);
    } else if (choice == 2) {
        c.lower(s);
    }

    
}
