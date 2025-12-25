#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    try {
        if (n < 0)
            throw n;
        cout << "Number is positive";
    }
    catch (int x) {
        cout << "Error: Negative number";
    }
    return 0;
}
