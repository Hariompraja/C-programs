#include <iostream>
using namespace std;

class Box {
public:
    int length, breadth, height;

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
};

int main() {
    Box b(2, 3, 4);
    cout << "Volume = " << b.volume();
    return 0;
}
