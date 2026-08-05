#include <iostream>
using namespace std;

class Area {

    public:

    float getArea(int a) {
        return 6 * a * a;
    }
    
    float getArea(int r , int h) {
        return 3.1415 * 2 * r * (r + h);
    }
    
    float getArea(int l , int b , int h) {
        return 2*(l*b+b*h+h*l);
    }

};

int main() {
    Area a1;
    cout << "area of cube  = " << a1.getArea(10) << endl;
    cout << "area of cuboid = " << a1.getArea(10, 20) << endl;
    cout << "area of cylinder = " << a1.getArea(5, 10, 20) << endl;
    return 0;
}