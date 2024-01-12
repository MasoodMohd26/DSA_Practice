#include <iostream>
using namespace std;
int fac(int n) {
    if (n == 0 || n == 1){
        return n;
    }
    else{
        int a = 1;
        while(n > 0){
            a *= n--;
        }
        return a;
    }
}
int main () {

    cout << fac(4);
    return 0;
}