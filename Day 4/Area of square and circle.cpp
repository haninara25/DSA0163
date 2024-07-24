#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

class Square : public Shape {
    double side;
public:
    Square(double s) : side(s) {}
    double area() {
        return side * side;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() {
        return M_PI * radius * radius;
    }
};

int main() {
    Square s(5.0);
    Circle c(3.0);
    cout << "Area of square: " << s.area() << endl;
    cout << "Area of circle: " << c.area() << endl;
    return 0;
}

