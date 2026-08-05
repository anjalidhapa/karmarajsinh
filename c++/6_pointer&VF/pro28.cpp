#include<iostream>
using namespace std;

class media{
    public:
    virtual void msg(){
        cout<<"Thanks for your purchase"<<endl;
    }
};

class books : public media
{
    public:
     void msg(){
        cout<<"Thanks for purchase of book"<<endl;
    }
};

class tape : public media
{
    public:
     void msg(){
        cout<<"thanks for your purchase of tape"<<endl;
    }
};

int main(){
    books x1;
    tape y1;

    media *v1 = &x1;
    media *v2 = &y1;
    v1 -> msg();
    v2 -> msg();
    return 0;
}