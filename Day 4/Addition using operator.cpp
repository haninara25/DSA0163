#include <iostream>

class Add {
private:
    int value;

public:
    // Constructor
    Add(int v = 0) : value(v) {}

    // Overload the + operator
    Add operator+(const Add& other) const {
        return Add(value + other.value);
    }

    void display() const {
        std::cout << "Sum: " << value << std::endl;
    }
};

int main() {
    Add num1(10);
    Add num2(20);

    Add result = num1 + num2; // Use overloaded + operator
    result.display();

    return 0;
}

