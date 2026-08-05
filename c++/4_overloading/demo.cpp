#include <iostream>
using namespace std;

class x
{
public:
    int num;
    x(int a)
    {
        num = a;
        cout << "number : " << num << "\n";
    }

    int operator + (x obj) {
        cout << "operator + called " << endl;
        cout << "num = " << num << endl;
        cout << "obj.num = " << obj.num << endl;

        return num + obj.num;
    }
};

int main()
{
    x x1(10);
    x x2(30);

    int ans = x1 + x2;
    cout << "ans = " << ans << endl;

    x x3(-3);
    x x4(20);
    cout << "sum = " << x1 + x4 << endl;

    return 0;
}