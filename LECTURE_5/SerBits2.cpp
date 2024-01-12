#include <iostream>
using namespace std;
int main (){
    int cnt = 0;
    // cout << "ENTER NO :";
    int n;
    cin >>n;
    int lstDig;
    while (n > 0){
        lstDig = n & 1; 
        n = n >> 1;
        cnt += lstDig;
    } 
    cout << "set bits are "<< cnt;
    return 0;
}