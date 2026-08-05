#include <iostream>
using namespace std;

class Parent {
    public:
    virtual void greet() {
        cout << "greet method from Parent " << endl;
    }
};
class Child : public Parent {
    public:
    void greet() {
        cout << "greet method from Child " << endl;
    }    
};

int main() {
    Child ch;
    ch.greet();

    Parent *pObj = &ch;
    pObj->greet();

    // p -> c => normal
    // c -> p => with virtual functin + pointer object
    return 0;
}