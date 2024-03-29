#include <iostream>
#include <string>
using namespace std;
class ElementCounter {
public:
    int countElements(string str) {
        return str.length();
    }
};
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    ElementCounter obj;
    int count = obj.countElements(input);
    cout << "Number of elements in the string: " << count << endl;
    return 0;
}

