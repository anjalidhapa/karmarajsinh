#include<iostream>
using namespace std;

class student{

    public:

    int getname(string name){
        cout<<"name : "<<name<<endl;
    return 0;
    }
    
    int getrno(int a){
        cout<<"roll no. : "<<a<<endl;
    return 0;
    }
};

int main(){

    student s;
    s.getname("student");
    s.getrno(35);

    return 0;
}