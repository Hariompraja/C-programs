#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    int count = 0;
    char *p = str;

    while (*p != '\0') {
        if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            count++;
        p++;
    }

    cout << count;
    return 0;
}
