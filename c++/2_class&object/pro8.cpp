#include <iostream>
using namespace std;
class arithmetic
{
    int a,b,c;

public:
    void sum()
    {
        cout << "\nenter no 'a' :";
        cin >> a;
        cout << "enter no 'b' :";
        cin >> b;
        c=a+b;
    }

    void sub()
    {
        cout << "\nenter no 'a' :";
        cin >> a;
        cout << "enter no 'b' :";
        cin >> b;
        c=a-b;
    }

    void multi()
    {
        cout << "\nenter no 'a' :";
        cin >> a;
        cout << "enter no 'b' :";
        cin >> b;
        c=a*b;
    }

    void div()
    {
        cout << "\nenter no 'a' :";
        cin >> a;
        cout << "enter no 'b' :";
        cin >> b;
        c=a/b;
    }

    void print()
    {
        cout << "\nans ---> "<< c;
    }
};
int main()
{
    arithmetic s1 ;
    s1.sum();
    s1.print();
    s1.sub();
    s1.print();
    s1.multi();
    s1.print();
    s1.div();
    s1.print();
    return 0;
}