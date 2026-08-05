#include <iostream>
using namespace std;

class Area {
    public:
    float getArea(int r) {
        return 3.1415 * r * r;
    }
    // int getArea(int side) -> error
    int getArea(int base, int height) {
        return base * height;
    }
    int getArea(int mul, int height, int base) {
        mul = 0.5;
        return 0.5 * height * base;
    }
};

int main() {
    Area a1;
    cout << "area of circle = " << a1.getArea(10) << endl;
    cout << "area of rect = " << a1.getArea(10, 20) << endl;
    cout << "area of triangle = " << a1.getArea(0.5, 10, 20) << endl;
    return 0;
}