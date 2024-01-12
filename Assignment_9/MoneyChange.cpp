// #include <bits/stdc++.h>
// using namespace std;
// long long int solve(vector<long long int>v, long long int n, long long int remaining_val, int **dp)
// {
//     long long int i = n-1;
//     if (i == -1)
//     {
//         return dp[n][remaining_val] = 0;
//     }
//     if (remaining_val == 0)
//     {
//         return dp[n][remaining_val] = 1;
//     }
//     if (dp[n][remaining_val] != -1)
//     {
//         return dp[n][remaining_val];
//     }
//     long long int ans1,ans2;
//     ans1 = ans2 = 0;
//     // assuming humare ans main wo wala number hai 
//     if (v[i]<=remaining_val)
//     {
//         ans1 = solve(v,n,remaining_val - v[i], dp);
//     }
//     ans2 = solve(v,n-1,remaining_val, dp);
//     return dp[n][remaining_val] = ans1 + ans2;
    
// }
// int main()
// {
//     long long int t;
//     cin >> t;
//     for (long long int i=0; i<t; i++)
//     {
        
//         long long int n;
//         cin >> n;
//         vector<long long int>v(n);
//         for (long long int i=0; i<n; i++)
//         {
//             cin >> v[i];
//         }
//         long long int remaining_val;
//         cin >> remaining_val;

//         // allocating space for 2d array
//         int rows = n + 10;  // Change this to your desired number of rows
//         int cols = remaining_val + 10;  // Change this to your desired number of columns

//         // Dynamically allocate memory for the 2D array
//         int** dp = new int*[rows];
//         for (int i = 0; i < rows; ++i) {
//             dp[i] = new int[cols];
//         }
//         memset(dp,-1,sizeof(dp));

//         cout << solve(v,n,remaining_val,dp) << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
long long int solve(vector<long long int>v, long long int n, long long int remaining_val)
{
    long long int i = n-1;
    if (i == -1)
    {
        return 0;
    }
    if (remaining_val == 0)
    {
        return 1;
    }
    long long int ans1,ans2;
    ans1 = ans2 = 0;
    // assuming humare ans main wo wala number hai 
    if (v[i]<=remaining_val)
    {
        ans1 = solve(v,n,remaining_val - v[i]);
    }
    ans2 = solve(v,n-1,remaining_val);
    return ans1 + ans2;
    
}
int main()
{
    long long int t;
    cin >> t;
    for (long long int i=0; i<t; i++)
    {
        long long int n;
        cin >> n;
        vector<long long int>v(n);
        for (long long int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        long long int remaining_val;
        cin >> remaining_val;
        cout << solve(v,n,remaining_val) << endl;
    }
    return 0;
}