#include <iostream>
using namespace std;

class Base {
private:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
    void showNum() {
        cout << "Number: " << num << endl;
    }
};

class Derived : private Base {
public:
    void setDerivedNum(int n) {
        setNum(n);
    }
    void showDerivedNum() {
        showNum();
    }
};

int main() {
    Derived d;
    d.setDerivedNum(5);
    d.showDerivedNum();
    return 0;
}

