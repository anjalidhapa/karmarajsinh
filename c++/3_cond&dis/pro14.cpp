#include <iostream>
using namespace std;

class NumberManager
{
private:
    int *ptr; // Pointer to dynamically allocated memory

public:
    // Constructor: Allocates memory and stores the number
    NumberManager(int value)
    {
        ptr = new int(value);
        cout << "Constructor: Allocated number " << *ptr << "\n";
    }

    // Destructor: Automatically called to delete the allocated memory
    ~NumberManager()
    {
        delete ptr;
        cout << "Destructor: Freed the allocated memory.\n";
    }

    // Optional helper to read the value
    void printValue()
    {
        if (ptr)
        {
            cout << "Value: " << *ptr << "\n";
        }
    }
};

int main()
{
    cout << "--- Local Scope Example ---\n";
    // Object created in a block scope
    NumberManager num(42);
    num.printValue();
    
    // <-- Destructor is automatically called here when 'num' goes out of scope
    return 0;
}
