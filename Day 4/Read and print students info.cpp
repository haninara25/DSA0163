#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int studentID;
    void getStudentData() {
        getData();
        cout << "Enter student ID: ";
        cin >> studentID;
    }
    void displayStudentData() {
        displayData();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Student s;
    s.getStudentData();
    s.displayStudentData();
    return 0;
}

