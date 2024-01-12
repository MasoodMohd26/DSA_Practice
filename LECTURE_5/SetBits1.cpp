#include <iostream>
using namespace std;
int main (){
    int cnt = 0;
    // cout << "ENTER NO :";
    int n;
    cin >>n;
    int rem;
    while (n > 0){
        rem = n % 2;
        n = n/2;
        cnt += rem;
    } 
    cout << "set bits are "<< cnt;
    return 0;
}