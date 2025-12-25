#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int marks;
};

int main() {
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
        cin >> s[i].roll >> s[i].name >> s[i].marks;

    for (int i = 0; i < n; i++)
        cout << s[i].roll << " " << s[i].name << " " << s[i].marks << endl;

    return 0;
}
