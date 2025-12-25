#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

void increment(Employee &e) {
    e.salary = e.salary + (e.salary * 0.10);
}

int main() {
    Employee e;
    cin >> e.id >> e.name >> e.salary;

    increment(e);

    cout << "Updated Salary = " << e.salary;
    return 0;
}
