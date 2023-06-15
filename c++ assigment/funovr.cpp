#include <iostream>

using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double area(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double area(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    double radius = 5.0;
    double length = 6.0;
    double width = 4.0;
    double base = 3.0;
    double height = 2.0;

    double circleArea = area(radius);
    double rectangleArea = area(length, width);
    double triangleArea = area(base, height, 't');

    cout << "Area of circle: " << circleArea << endl;
    cout << "Area of rectangle: " << rectangleArea << endl;
    cout << "Area of triangle: " << triangleArea << endl;

    return 0;
}