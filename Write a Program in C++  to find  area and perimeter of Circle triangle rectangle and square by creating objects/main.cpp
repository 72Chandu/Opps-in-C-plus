#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() {
        return M_PI * radius * radius;
    }
    float perimeter() {
        return 2 * M_PI * radius;
    }
};

class Triangle : public Shape {
private:
    float side1, side2, side3;
public:
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}
    float area() {
        float s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    float perimeter() {
        return side1 + side2 + side3;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() {
        return length * width;
    }
    float perimeter() {
        return 2 * (length + width);
    }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float s) : side(s) {}
    float area() {
        return side * side;
    }
    float perimeter() {
        return 4 * side;
    }
};

int main() {
    Circle circle(5);
    cout << "Circle:" << endl;
    cout << "Area: " << circle.area() << endl;
    cout << "Perimeter: " << circle.perimeter() << endl;

    Triangle triangle(3, 4, 5);
    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.area() << endl;
    cout << "Perimeter: " << triangle.perimeter() << endl;

    Rectangle rectangle(4, 6);
    cout << "\nRectangle:" << endl;
    cout << "Area: " << rectangle.area() << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl;

    Square square(4);
    cout << "\nSquare:" << endl;
    cout << "Area: " << square.area() << endl;
    cout << "Perimeter: " << square.perimeter() << endl;

    return 0;
}
