#include <bits/stdc++.h>
using namespace std;
const int p = 10000;
int dp[p][p];
int solve (int n, int m){
    if (n == 0)
        return dp[n][m] = 1;
    
    if (n == 1 and m == 1)
        return dp[n][m] = 2;
    if (n == 1)
        return dp[n][m] = 1;
    
    if (dp[n][m] != -1)
        return dp[n][m];
    // option1 placing the first line of tile by vertical tiles
    int op1, op2;
    op1 = op2 = 0;
    if (n>=m)
    {
        op1 = solve(n-m,m);
    }
    op2 = solve(n-1,m);
    return dp[n][m] = op1+op2;

}
int main()
{
    int t;
    cin >> t;
    memset(dp,-1, sizeof(dp));
    for (int i=0; i<t; i++)
    {
        int n ,m;
        //cout << "hello\n";
        cin >> n >> m;
        cout << solve(n,m) << endl;
    }
    return 0;
}