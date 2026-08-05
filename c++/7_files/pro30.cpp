#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class person
{
public:
    char name[20];
    int age;
    person(char n[], int a)
    {
        strcpy(name, n);
        age = a;
    }
};

int main()
{
    char name[] = "hadi ";
    person p(name, 10);

    ofstream w("pro30.txt");
    w << "name = " << p.name << " age = " << p.age << endl;
    w.close();

    char ch[5];
    ifstream in("pro30.txt");
    while (in >> ch)
        cout << ch << " ";

    in.close();

    return 0;
}
