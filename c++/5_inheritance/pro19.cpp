#include <iostream>
using namespace std;

class grandfather
{
public:
    void name_1(string name_1)
    {
        cout << "Grandfather name : " << name_1 << endl;
    }
};

class father : public grandfather
{
public:
    void name_2(string name_2)
    {
        cout << "Father name : " << name_2 << endl;
    }
};

class Child : public father
{
public:
    void name_3(string name_3)
    {
        cout << "Child name : " << name_3 << endl;
    }
};

int main()
{

    Child c1;
    c1.name_1("grandfather");
    c1.name_2("father");
    c1.name_3("child");

    return 0;
}