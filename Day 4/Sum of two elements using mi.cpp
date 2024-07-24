#include <iostream>
using namespace std;

class Addend1 {
protected:
    int num1;
public:
    void setNum1(int n) {
        num1 = n;
    }
};

class Addend2 {
protected:
    int num2;
public:
    void setNum2(int n) {
        num2 = n;
    }
};

class Sum : public Addend1, public Addend2 {
public:
    int getSum() {
        return num1 + num2;
    }
};

int main() {
    Sum s;
    s.setNum1(10);
    s.setNum2(20);
    cout << "Sum: " << s.getSum() << endl;
    return 0;
}

