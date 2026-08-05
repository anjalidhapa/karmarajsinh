#include <iostream>
using namespace std;

class employe
{
public:
    int empno(int empno)
    {
        cout << "~~~DETAILS~~~" << endl << "empno : " << empno << endl ;
        return 0;
    }
};

class detail : public employe 
{
public:
    void name(string name)
    {
        cout << "name :  " << name << endl;
    }
    
    int salary(int sal)
    {
        cout<< "salary : "<< sal << endl;
        return 0;
    }
};

int main()
{

    detail e;
    e.empno(24541100);
    e.name("abc");
    e.salary(50000);

    return 0;
}