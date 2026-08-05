#include <iostream>
using namespace std;
class product
{
    int pid , price;
    char pname[30];

public:
    void getData()
    {
        cout << "enter product no:";
        cin >> pid;
        cout << "enter product name:";
        cin >> pname;
        cout << "enter product price:";
        cin >> price;
    }

    void putData()
    {
        cout << "*****product information*****";
        cout << "\nproduct id:" << pid << endl<< "product name:" << pname << endl<<"product price:"<<price ;
    }
};
int main()
{
    product s1,s2 ;
    s1.getData();
    s1.putData();
    
    s2.getData();
    s2.putData();

    return 0;
}