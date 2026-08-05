#include <iostream>
using namespace std;

class Complex {
    int real, img;

    public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void printComplex() {
        // 3 + 2i;
        cout << real << " + " << img << "i " << endl;
    }

    Complex operator + (Complex &other) {
        Complex ans(0, 0);
        ans.real = real + other.real;
        ans.img = img + other.img;
        return ans;
    }

    Complex operator - (Complex &other) {
        Complex ans(0, 0);
        ans.real = real - other.real;
        ans.img = img - other.img;
        return ans;
    }
    
};

int main() {
    int a,b,a1,b1;
    char x;

    cout<<" COMPLEX NO. 'a+bi'/'a-bi' "<<"\n";
    
    cout<<"~~complex no. 1~~ "<<"\n";

    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;

    
    cout<<"~~complex no. 2~~ "<<"\n";
    
    
    cout<<"enter value of a : ";
    cin>>a1;
    cout<<"enter value of b : ";
    cin>>b1;
    
    cout<<"Enter +/- : ";
    cin>>x;
    
    Complex c1(a, b);
    Complex c2(a1, b1);

    c1.printComplex();
    c2.printComplex();

    if (x=='+'){
    Complex sum = c1 + c2;
    sum.printComplex();
       }
    else if (x=='-'){
    Complex sum = c1 - c2;
    sum.printComplex();
       } 
    else{
        cout<<"enter valid sign +/-";
    }

    return 0;
}