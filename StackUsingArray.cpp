#include <iostream>
using namespace std;

int stack[5], top = -1;

void push(int x) {
    if (top == 4)
        cout << "Stack full";
    else
        stack[++top] = x;
}

void pop() {
    if (top == -1)
        cout << "Stack empty";
    else
        top--;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
}

int main() {
    push(10);
    push(20);
    display();
    pop();
    display();
    return 0;
}
