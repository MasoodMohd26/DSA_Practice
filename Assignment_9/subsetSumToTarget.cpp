#include <bits/stdc++.h>
using namespace std;
int arr[10000];
int dp[1000][10000];
bool solve(int n, int sum){
    if (sum == 0)
        return true;
    if (n==0)
        return false;
    bool op1, op2;
    if (sum - arr[n-1] >= 0)
        op1 = solve(n-1, sum - arr[n-1]);
    if (op1)
    {
        // dp[n][sum] = 1;
        return true;
    }
    op2 = solve(n-1, sum);
    if (op2)
    {
        dp[n][sum] = 1;
        return true;
    }
    dp[n][sum] = 0;
    return false;
}

int main(){
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << solve(n,sum);
    return 0;
}