// #include <bits/stdc++.h>
// using namespace std;
// int knapsack(int n,int capacity, vector<int>wt ,vector<int>val)
// {
//     if (n == 0 || capacity == 0)
//         return 0;
//     // int ans = INT_MAX;
//     int op1, op2;
//     op1 = op2 = INT_MIN;
//     op1 =  knapsack(n-1, capacity, wt, val);
//     if (capacity >= wt[n-1])
//     {
//         op2 = val[n-1] + knapsack(n-1, capacity-wt[n-1], wt, val);
//     }
//     return max(op1, op2);
// }
// int main()
// {
//     int w,n;
//     cin >> n >> w;
//     vector<int>wt(n);
//     vector<int>val(n);
//     for (int i=0; i<n; i++)
//     {
//         cin >> wt[i];
//     }
//     for (int i=0; i<n; i++)
//     {
//         cin >> val[i];
//     }
//     cout << knapsack(n,w,wt, val);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int knapsack(int n,int capacity, vector<int>wt ,vector<int>val, int dp[][1000])
{
    if (n == 0 || capacity == 0)
        return dp[n][capacity] = 0;
    // int ans = INT_MAX;
	if (dp[n][capacity] != -1)
	{
		return dp[n][capacity];
	}
    int op1, op2;
    op1 = op2 = INT_MIN;
    op1 =  knapsack(n-1, capacity, wt, val, dp);
    if (capacity >= wt[n-1])
    {
        op2 = val[n-1] + knapsack(n-1, capacity-wt[n-1], wt, val, dp);
    }
    return dp[n][capacity] = max(op1, op2);
}
int main()
{
    int w,n;
    cin >> n >> w;
    vector<int>wt(n);
    vector<int>val(n);
	int dp[1000][1000];
	memset(dp, -1, sizeof(dp));
    for (int i=0; i<n; i++)
    {
        cin >> wt[i];
    }
    for (int i=0; i<n; i++)
    {
        cin >> val[i];
    }
    cout << knapsack(n,w,wt, val, dp);
    return 0;
}