#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int *p = arr;
    for (int i = 0; i < n; i++)
        sum += *(p + i);

    cout << sum;
    return 0;
}
