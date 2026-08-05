#include <iostream>
using namespace std;

class cons{

    int ans,a,b;

    public:
    cons(int a ,int b) {

        cout<< "~~~FINDING AREA OF RECTANGLE~~~" << endl;
        ans=a*b;

        cout<< "AREA OF RECTANGLE :" << ans << endl;

    }
};

int main(){
    cons(5,4);
}