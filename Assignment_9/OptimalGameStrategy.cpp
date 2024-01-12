#include <bits/stdc++.h>
using namespace std;
long long int solve(long long int n, vector<long long int>v, long long int l, long long int r, long long int dp[][100]){
    if (l>r)
        return dp[l][r] = 0;
    if (l == r)
        return dp[l][r] = v[l];
    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }
    // agar main pehle lth choose karun
    //agar opp     l+1 choose kare rem:l+2,r|| r choose kare to rem: l+1,r-1
    long long int op1 = v[l] + min(solve(n,v, l+2, r,dp), solve(n,v,l+1,r-1,dp));
    long long int op2 = v[r] + min(solve(n,v,l,r-2,dp), solve(n,v,l+1,r-1,dp));
    return dp[l][r] = max(op1, op2);
}
int main()
{
    long long int n;
    cin >> n;
    vector<long long int>v(n);
    long long int dp[100][100];
    memset(dp,-1,sizeof(dp));
    for (long long int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << solve(n,v,0,n-1, dp);

    return 0;
}