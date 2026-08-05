#include <iostream>
using namespace std;
class student
{
    int rno;
    char name[30];

public:
    void getData()
    {
        cout << "enter no:";
        cin >> rno;
        cout << "enter name:";
        cin >> name;
    }
    void putData()
    {
        cout << "*****student information*****";
        cout << "\nroll no:" << rno << endl
             << "name:" << name << endl;
    }
};
int main()
{
    student s1 ;
    s1.getData();
    s1.putData();
    return 0;
}