#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; ++i) {
        cout << "Address of arr[" << i << "]: " << &arr[i] << endl;
    }
    return 0;
}

