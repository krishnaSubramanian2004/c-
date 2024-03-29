#include <iostream>
using namespace std;
class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h = 0, double w = 0) : height(h), width(w) {}

    // Virtual functions to calculate area and perimeter
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    // Calculate area of rectangle
    double area() const override {
        return height * width;
    }

    // Calculate perimeter of rectangle
    double perimeter() const override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    // Calculate area of triangle
    double area() const override {
        return 0.5 * height * width;
    }

    // Perimeter of a triangle is not trivial, so we'll return -1 as an indicator
    double perimeter() const override {
        return -1;
    }
};

int main() {
    Rectangle rect(5, 4);
    Triangle tri(4, 3);

    cout << "Rectangle:" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << tri.area() << endl;
    cout << "Perimeter: " << tri.perimeter() << endl;

    return 0;
}

