#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void read() {
        cout << "Enter id, name, salary: ";
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.read();
    e.display();
    return 0;
}
