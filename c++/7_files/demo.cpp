#include <iostream>
#include <fstream>

using namespace std;
int main() {

    // write -> ofstream
    // input -> ifstream

    // create and write file 
    ofstream out("demo.txt");
    out << "hello from file " << endl;
    for (int i = 2; i <= 100; i += 2)
        out << i << " ";

    out << endl;
    out.close();

    // read 
    char ch[5];
    ifstream in("demo.txt");
    while (in >> ch)
        cout << ch << " ";

    in.close();        
    // in >> ch;
    // cout << "ch = " << ch << endl;
    // in >> ch;
    // cout << "ch = " << ch << endl;
    // in >> ch;
    // cout << "ch = " << ch << endl;
    return 0;
}