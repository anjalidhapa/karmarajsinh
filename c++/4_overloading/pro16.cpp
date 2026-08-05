#include <iostream>
using namespace std;

class Num {
    private:
    int num;

    public:
    Num(int n) {
        num = n;
    }
    void printNum() {
        cout << "num = " << num << endl;
    }
 
    void operator ++(int) {
        cout << "num++ called " << endl;
        num++;
    }
    int operator --() {
        cout << "--num called " << endl;
        return --num;
    }
};

int main() {
    
    Num n1(10);
    n1.printNum();
    
    n1++;
    n1.printNum();
    
    int ans = --n1;
    n1.printNum();
    cout << "ans = " << ans << endl;
    return 0;
}
// int num = 10;
// cout << "num = " << num << endl;
// num++;
// cout << "num = " << num << endl;

// cout << "num++ = " << num++ << endl;
// cout << "num++ = " << ++num << endl;