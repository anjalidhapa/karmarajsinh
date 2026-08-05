#include <iostream>
using namespace std;

class cons{

    int a,b;

    public:

    cons(){
        
        cout << "enter value of 'a' ---> ";
        cin >> a ;
        cout << "enter value of 'b' ---> ";
        cin >> b ;
        
        cout << "a=" << a << endl ;
        cout << "b=" << b;
        
    }
};

int main(){
   cons();
}