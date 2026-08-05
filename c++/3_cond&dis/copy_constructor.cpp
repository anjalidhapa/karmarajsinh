#include <iostream>
using namespace std;

class Demo
{
public:
    int num;
    Demo(int n)
    {
        num = n;
    }

    Demo(Demo &d_obj)
    {
        cout << "Copy constructor obj, num = " << d_obj.num << endl;
        num = d_obj.num;
    }

    void printNum()
    {
        cout << "num = " << num << endl;
    }
};

int main()
{

    Demo d(2);
    d.printNum();

    Demo d2(d);
    cout << "d2.num = " << d2.num << endl;

    return 0;
}