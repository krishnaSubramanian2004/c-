#include <iostream>
using namespace std;
class Counter {
private:
    int count;

public:
    // Constructor to initialize count
    Counter(int c = 0) : count(c) {}

    // Overloading the prefix increment operator
    Counter operator++() {
        ++count;
        return *this;
    }

    // Overloading the postfix increment operator
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    // Function to display count
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1; // Creating object of Counter class

    cout << "Before increment: ";
    c1.display();

    // Using prefix increment operator
    ++c1;
    cout << "After prefix increment: ";
    c1.display();

    // Using postfix increment operator
    c1++;
    cout << "After postfix increment: ";
    c1.display();

    return 0;
}

