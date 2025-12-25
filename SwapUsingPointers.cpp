#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    cout << a << " " << b;
    return 0;
}
