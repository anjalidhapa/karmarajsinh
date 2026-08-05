#include <iostream>
using namespace std;

class test_1
{
public:
    int v1;

    void value1() {
        cout << "Enter marks of test 1 : ";
        cin >> v1;
    }
};

class test_2 {
public:
    int v2;

    void value2() {
        cout << "Enter marks of test 2 : ";
        cin >> v2;
    }
};
class Total : public test_1, public test_2 {
public:
    int getsum() {
        return v1 + v2;
    }
};

int main() {

    Total c;
    c.value1();
    c.value2();
    cout << "Total marks = " << c.getsum() << endl;

    return 0;
}