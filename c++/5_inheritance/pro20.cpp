#include <iostream>
using namespace std;

class value_1
{
public:
    int v1;

    void value1() {
        cout << "Enter v1 : ";
        cin >> v1;
    }
};

class value_2 {
public:
    int v2;

    void value2() {
        cout << "Enter v2 : ";
        cin >> v2;
    }
};
class multi : public value_1, public value_2 {
public:
    int getProd() {
        return v1 * v2;
    }
};

int main() {

    multi c;
    c.value1();
    c.value2();
    cout << "product = " << c.getProd() << endl;

    return 0;
}