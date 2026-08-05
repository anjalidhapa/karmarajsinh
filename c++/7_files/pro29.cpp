#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream w("pro29.txt");
    for ( int i=0 ; i<=100 ; i++ )
    {
        w<< i << " ";
    }
    w << endl;
    w.close();

    char ch[5];
    ifstream in("pro29.txt");
    while (in >> ch)
        cout << ch << " ";

    in.close();

    return 0;
}

