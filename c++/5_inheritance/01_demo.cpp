#include <iostream>
using namespace std;

class Demo
{
public:
    void printMsg()
    {
        cout << "msg method from demo class " << endl;
    }
};

class Child : virtual public Demo
{
public:
    void greet()
    {
        cout << "greetings from child class " << endl;
    }
};
class Child1 : virtual public Demo
{
public:
    void msg()
    {
        cout << "greetings from child1 class " << endl;
    }
};
class Child2 : public Child, public Child1
{
public:
    void hello()
    {
        cout << "greetings from child2 class " << endl;
    }
};

int main()
{

    Child2 c1;
    c1.greet();
    c1.printMsg();

    return 0;
}