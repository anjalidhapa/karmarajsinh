#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int a,no;
    ofstream n("5.txt");

    for(a=1;a<=100;a++){
        n<<a<<" ";
    }   
    
    n.close();

    ifstream g("5.txt");

    char b[5];
    while(g>>b){
        cout<<b<<" ";
    }
  
    n.close();
    return 0;
}