#include<iostream>
using namespace std;

class x{
    
    public:
    
        int num;

    x(int a){
        num=a;
        cout<<"number : "<<num<<"\n";
    }

    x(x &value){
       cout<<"value : "<< value.num <<"\n";
    }

};


int main(){
    x c(2);

    x c1(c);
    return 0;
}