#include <iostream>
using namespace std;

class Base1 {
public:
    void displayBase1() {
        cout << "Base1 class method" << endl;
    }
};

class Base2 {
public:
    void displayBase2() {
        cout << "Base2 class method" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "Derived class method" << endl;
    }
};

int main() {
    Derived d;
    d.displayBase1();
    d.displayBase2();
    d.displayDerived();
    return 0;
}

