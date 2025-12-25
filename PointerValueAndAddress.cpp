#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int *p = &x;
    cout << *p << endl;
    cout << p;
    return 0;
}
