#include <iostream>
using namespace std;

class item
{
public:
    int code;
    int pr;
    void getCode(int a)
    {
        // cout << "Item code : "<< a <<endl;
        code = a;
    }
    void printCode()
    {
        cout << "code = " << code << endl;
    }
    void printData() {
        cout << "price = " << pr << endl;
        cout << "code = " << code << endl;
    }
};

class price : public item {
public:
    void getPrice(int p) {
        pr = p;
    }
    void printData() {
        cout << "price = " << pr << endl;
    }
};

int main() {
    price p;
    p.getCode(101);
    p.getPrice(199);

    item *v = &p;
    v->printData();

     return 0;
}