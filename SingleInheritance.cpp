#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter roll: ";
        cin >> roll;
    }

    void display() {
        cout << name << " " << age << " " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
