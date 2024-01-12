#include <iostream>
using namespace std;
int main (){
    int a = 1;
    int b = 2;
    if( b > 0){
        int a =10;
        cout << a<< endl;   //10
        cout << b<< endl;   //2
    }
    
    cout << a<<endl;    //1
    cout << b<<endl;    //2
    


    return 0;
}