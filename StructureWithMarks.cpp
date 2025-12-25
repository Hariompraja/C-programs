#include <iostream>
using namespace std;

struct Student {
    int marks[5];
};

int main() {
    Student s;
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> s.marks[i];
        total += s.marks[i];
    }

    cout << "Total = " << total << endl;
    cout << "Average = " << total / 5.0;
    return 0;
}
