#include <iostream>
using namespace std;
long long solve(long long n)
{
    long long dp[n+1];
    long long firstNot1[n+1];
    dp[0] = firstNot1[0] = 0;
    dp[1] = 2;
    firstNot1[1] = 1;
    for (long long i=2; i<=n; i++)
    {
        //      purani i-1 lenght string ke aage zero laga diya
        dp[i] = dp[i-1] +
                    // jinke first digit 1 nhi hai unke aage 1 laga diya               
                        (firstNot1[i-1]);
        firstNot1[i] = dp[i]-firstNot1[i-1];
    }
    // for (long long i=0; i<=n; i++)
    // {
    //     cout << i << " = " << dp[i] << " and first digit 1 : " << firstNot1[i] << endl;
    // }
    return dp[n];
}
int main(){
    long long t;
    cin >> t;
    for (long long i=0; i<t; i++)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}