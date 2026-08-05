#include<iostream>
using namespace std;

class grandfather{

    public:
    int name1(string a){
        cout<<"grandfather name : "<<a<<endl;
    }

};

class father : public grandfather
{

    public:
    int name2(string b){
        cout<<"father name : "<<b<<endl;
    }
};

class child : public father
{

    public:
    int name3(string c){
        cout<<"child name : "<<c<<endl;
    }
};

int main(){

    child c1;
    c1.name1("abcdefg");
    c1.name2("cosmos");
    c1.name3("xyz");
    
    return 0;
}