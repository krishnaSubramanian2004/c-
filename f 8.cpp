#include <iostream>
using namespace std;
class Circle {
public:
    double calculateArea(double radius) {
        return 3.14159 * radius * radius; // p * r^2
    }
};
int main() {
    Circle obj;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = obj.calculateArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}

