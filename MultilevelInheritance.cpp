#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void readName() {
        cin >> name;
    }
};

class Student : public Person {
public:
    int roll;
    void readRoll() {
        cin >> roll;
    }
};

class Result : public Student {
public:
    int marks;
    void readMarks() {
        cin >> marks;
    }

    void display() {
        cout << name << " " << roll << " " << marks;
    }
};

int main() {
    Result r;
    r.readName();
    r.readRoll();
    r.readMarks();
    r.display();
    return 0;
}
