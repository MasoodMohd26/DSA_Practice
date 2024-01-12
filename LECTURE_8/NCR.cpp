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

int ncr(int n, int r){
    int ret = fac(n)/(fac(r) *fac (n-r));
    return ret;
}
int main () {

    cout << ncr(10,2);
    return 0;
}