#include <iostream>
using namespace std;
class student
{
    int no;
    char name[30];

public:
    void getData()
    {
        cout << "enter no:";
        cin >> no;
        cout << "enter name:";
        cin >> name;
    }
    void putData()
    {
        cout << "****student information*****";
        cout << "\nno:" << no << endl
             << "name:" << name << endl;
    }
};
int main()
{
    student s1, s2 ;
    s1.getData();
    s1.putData();
}