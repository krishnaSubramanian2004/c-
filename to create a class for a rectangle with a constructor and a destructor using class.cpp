#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {
        std::cout << "A rectangle with length " << length << " and width " << width << " has been created." << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "The rectangle with length " << length << " and width " << width << " has been destroyed." << std::endl;
    }
};

int main() {
    // Creating an object of Rectangle class
    Rectangle myRectangle(5.0, 3.0);

    // The destructor will be called automatically when myRectangle goes out of scope
    return 0;
}

