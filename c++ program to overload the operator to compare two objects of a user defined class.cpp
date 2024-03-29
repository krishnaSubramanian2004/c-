#include <iostream>
#include <string>
using namespace std;
class MyClass {
private:
    string data;

public:
    // Constructor
    MyClass(const string& d) : data(d) {}

    // Overloading the == operator
    bool operator==(const MyClass& other) const {
        return this->data == other.data;
    }
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2("World");
    MyClass obj3("Hello");

    // Comparing objects using overloaded == operator
    if (obj1 == obj2) {
        cout << "obj1 and obj2 are equal." << endl;
    } else {
        cout << "obj1 and obj2 are not equal." << endl;
    }

    if (obj1 == obj3) {
        cout << "obj1 and obj3 are equal." << endl;
    } else {
        cout << "obj1 and obj3 are not equal." << endl;
    }

    return 0;
}

