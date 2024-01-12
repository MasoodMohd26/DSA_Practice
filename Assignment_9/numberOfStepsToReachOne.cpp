#include <bits/stdc++.h>
using namespace std;
int steps(int n)
{
    if (n==1)
    {
        return 0;
    }
    int op1 = INT_MAX;
    int op2 = INT_MAX;
    int op3 = INT_MAX;
    if (n%2 == 0)
    {
        op1 = steps(n/2);
    }
    else{
        if (n>1) op2 = steps(n-1);
        op3 = steps(n+1);
    }
    return min(min(op1, op2), op3) + 1;
}
int main(){
    int n;
    cin >> n;
    cout << steps(n);
    return 0;
}