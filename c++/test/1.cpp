#include<iostream>
using namespace std;

 class employe{
    public:
    employe(int age , int salary){
    cout<<"age : "<<age<<endl<<"salary : "<<salary<<endl;
}
};

int main(){

    employe e(22,45000);
    

    return 0;
}