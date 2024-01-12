#include <iostream>
using namespace std;
int a = 100; // global
int main (){
    int a = 1  ; // local
    cout << "local : " << a;
    cout << endl;
    cout << "Global : " << ::a;



    return 0;
}