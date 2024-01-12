#include <iostream>
using namespace std;


int fac(int n){
    int f =1;
    while (n >= 1)
    {
        f *= n;
        n --;
    }
    return f;
}

int ncr (int n, int r){
    int ans = fac(n)/(fac(r) * fac(n-r));
    return ans;
}
int main(){
    int n;
    cin >> n;
    int row = 0;
    
    while (row < n)
    {
        //cout << "hi";
        int j = 0;
        while (j <= row)
        {
            cout << ncr(row, j) << "\t";
            j ++;
        }
        cout << endl;
        row ++;
    }
    return 0;
}