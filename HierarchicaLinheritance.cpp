#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int roll;
    void read() {
        cin >> name >> roll;
    }
    void display() {
        cout << "Student: " << name << " " << roll << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    void read() {
        cin >> name >> subject;
    }
    void display() {
        cout << "Teacher: " << name << " " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.read();
    t.read();

    s.display();
    t.display();
    return 0;
}
