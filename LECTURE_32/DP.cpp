#include <iostream>
#include <vector>
using namespace std;
int topDown(int n, int *dp)
{
    if (n<=1)
    {
        dp[n] = n;
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }
    int x = topDown(n-1, dp) + topDown(n-2,dp);
    dp[n] = x;
    return x;

}
int bottomUp(int n){
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i=2; i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];

}
int main()
{
    int n;
    cin >> n;
    int dp[1000];
    for (int i=0;i<1000;i++){
        dp[i]=-1;
    }
    cout << topDown(n, dp) <<" "<< bottomUp(n);
    // for (int i=0; i<n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    return 0;
}