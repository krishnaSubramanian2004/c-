#include <iostream>
#include <string>
using namespace std;
class MyClass {
private:
    std::string data;

public:
    // Constructor
    MyClass(const std::string& d) : data(d) {}

    // Friend function to overload the << operator
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj);
};

// Overloading the << operator using a friend function
std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
    os << "BOT: " << obj.data;
    return os;
}

int main() {
    MyClass obj("Hello, World!"); // Creating object of MyClass

    // Printing object using overloaded << operator
    std::cout << obj << std::endl;

    return 0;
}

