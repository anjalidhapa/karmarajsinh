#include <iostream>
using namespace std;

class Person {
    public:
    int age;
    Person(int a) {
        // age = a;
        this->age = a;
    }
};
int main() {
    int b,c;
    cout<<"enter age of person 1 : "<< endl;
    cin>>b;
    cout<<"enter age of person 2 : "<< endl;
    cin>>c;
    Person p1(b);
    Person p2(c);
    
    if (p1.age > p2.age)
        cout << "Person1 is older than person2 " << endl;
    else if (p1.age < p2.age)
        cout << "Person2 is older than person1 " << endl;
    else 
        cout << "both persons are of same age " << endl;
    return 0;
}