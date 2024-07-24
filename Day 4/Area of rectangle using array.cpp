#include <iostream>
using namespace std;

class Rectangle {
    double length, breadth;
public:
    void setDimensions(double l, double b) {
        length = l;
        breadth = b;
    }
    double area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rects[3];
    for (int i = 0; i < 3; ++i) {
        double l, b;
        cout << "Enter length and breadth for rectangle " << i + 1 << ": ";
        cin >> l >> b;
        rects[i].setDimensions(l, b);
    }
    for (int i = 0; i < 3; ++i) {
        cout << "Area of rectangle " << i + 1 << ": " << rects[i].area() << endl;
    }
    return 0;
}

