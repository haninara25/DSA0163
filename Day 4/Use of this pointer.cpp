#include <iostream>
using namespace std;

class Example {
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }
    void displayValue() {
        cout << "Value: " << this->value << endl;
    }
};

int main() {
    Example ex;
    ex.setValue(10);
    ex.displayValue();
    return 0;
}

