#include <iostream>
using namespace std;
int fibDP(int n, int *dp)
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
    int x = fibDP(n-1, dp) + fibDP(n-2,dp);
    dp[n] = x;
    return x;

}
int main()
{
    int n;
    cin >> n;
    int dp[1000];
    for (int i=0;i<1000;i++){
        dp[i]=-1;
    }
    cout << fibDP(n, dp);
    return 0;
}