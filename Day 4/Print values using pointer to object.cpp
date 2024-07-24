#include <iostream>
using namespace std;

class Value {
public:
    int val;
    void setValue(int v) {
        val = v;
    }
    void displayValue() {
        cout << "Value: " << val << endl;
    }
};

int main() {
    Value v;
    Value *ptr = &v;
    ptr->setValue(50);
    ptr->displayValue();
    return 0;
}

