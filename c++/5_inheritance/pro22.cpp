#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class str
{
public:
    string a;

    void value1() {
        cout << "enter sting : ";
        cin >> a;
    }
};

class cpy : public str
{
public:
    string b ;
    void copy() {
        b=a;
        cout << "sting 2 ---> " << b << endl;
    }
};

class rev : public str
{
public:
    void reverse() {
        reverse(a.begin(), a.end());
        cout << "reverse sting ---> " << a << endl;
    }
};

class concat : public str
{
public:
    string b,result ;
    void con() {
        cout << "Enter second string ---> ";
        cin >> b;
        
        result= a + "," + b + "!"
        cout << "concard ---> " << result << endl;
    }
};

int main() {
    int x;
    cout << "~~~Enter option~~~" << endl << "1. copy string " << endl << "2. reverse string "<< endl << "3.concat sting "<<endl <<" ";
    cin << x ;
    
    switch (x)
    {
    case 1:
        cpy s;
        s.value1;
        s.copy;
        break;
    
    case 2:
        rev e;
        e.value1;
        e.reverse;
        break;
    
    case 1:
        concat g;
        g.value1;
        g.con;
        break;
    
    default:
        break;
    }
    return 0;
}