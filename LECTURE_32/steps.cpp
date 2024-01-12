#include <iostream>
#include <limits>
#include <vector>
using namespace std;

// basic
int cntSteps(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 3 || n==2)
    {
        return 1;
    }
    int minAns = INT32_MAX;
    if (n%3 == 0 and n%2 == 0)
    {
        minAns = min(min(1+cntSteps(n/3), 1+cntSteps(n/2)), 1+cntSteps(n-1));
    }
    else if (n%2 == 0)
    {
        minAns = min(1+cntSteps(n/2), 1+cntSteps(n-1));
    }
    else if (n%3 == 0){
        minAns = min(1+cntSteps(n/3), 1+cntSteps(n-1));
    }
    else {
        minAns = 1+cntSteps(n-1);
    }
    return minAns;
}
int cntStepsBottomsUp(int n)
{
    vector<int>dp(n+1);
    dp[0] = 0, dp[1] = 0;
    dp[2] = dp[3] = 1;
    for (int i=4 ;i<=n; ++i)
    {
        if (i%3 == 0 and i%2 == 0)
        {
            dp[i] = min(min(1+dp[i/3], 1+dp[i/2]), 1+dp[i-1]);
        }
        else if (n%2 == 0)
        {
            dp[i] = min(1+dp[i/2], 1+dp[i-1]);
        }
        else if (n%3 == 0){
            dp[i] = min(1+dp[i/3], 1+dp[i-1]);
        }
        else {
            dp[i] = 1+dp[i-1];
        }
    }
    return dp[n];
}

//topDown
int cntStepsTopDown(int n, int *dp)
{
    if (n <= 1)
    {
        dp[n] = 0;
        return 0;
    }
    if (n == 3 || n==2)
    {
        dp[n] = 1;
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int minAns = INT32_MAX;
    if (n%3 == 0 and n%2 == 0)
    {
        minAns = min(min(1+cntStepsTopDown(n/3, dp), 1+cntStepsTopDown(n/2,dp)), 1+cntStepsTopDown(n-1, dp));
    }
    else if (n%2 == 0)
    {
        minAns = min(1+cntStepsTopDown(n/2, dp), 1+cntStepsTopDown(n-1, dp));
    }
    else if (n%3 == 0){
        minAns = min(1+cntStepsTopDown(n/3, dp), 1+cntStepsTopDown(n-1, dp));
    }
    else {
        minAns = 1+cntStepsTopDown(n-1,dp);
    }
    dp[n] = minAns;
    return minAns;
}

int main()
{
    int n;
    cin >> n;
    // int dp[10000];
    int* dp = new int[n+1];
    for (int i=0; i<=n; i++)
    {
        dp[i] = -1;
    }
    cout << cntSteps(n) << endl;
    cout << cntStepsTopDown(n,dp) << endl;
    cout << cntStepsBottomsUp(n) << endl;

    return 0;
}