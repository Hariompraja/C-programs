#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void read() {
        cin >> roll >> name;
    }

    void show() {
        cout << roll << " " << name;
    }
};

int main() {
    Student s;
    s.read();
    s.show();
    return 0;
}
