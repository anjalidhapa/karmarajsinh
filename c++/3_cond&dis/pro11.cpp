#include <iostream>
using namespace std;

class multi{

    int ans,a,b;

    public:
    multi() {
        cout << "Enter value of a : ";
        cin >> a; 
        cout << "Enter value for b : ";
        cin >> b;

        cout<< "multiplication of 'a' and 'b' = " << a * b << endl;
    }
    multi(int a,int b){
        ans=a*b;
        cout<< "multiplication of 'a' and 'b' = " << ans << endl;
    }
    // multi(int a, int b, int c) {}
};

int main(){
   multi m(5,2);
   multi m2;

}