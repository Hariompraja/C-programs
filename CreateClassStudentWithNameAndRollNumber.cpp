#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
