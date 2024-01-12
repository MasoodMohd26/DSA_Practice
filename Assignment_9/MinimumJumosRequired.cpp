#include<bits/stdc++.h>
using namespace std;
int steps(vector<int>v, int n, int dp[], int idx=0)
{
    // cout << idx <<" " <<v[idx]<<endl;
    if (idx == n-1){ 
        return dp[idx] = 0;
    }
    if (dp[idx] != -1)
    {
        return dp[idx];
    }
    // if(idx >)
    int ans = INT_MAX;
    for (int i=1; i<=v[idx]; i++)
    {
        if ((idx + i)>=n) break;
        else 
            {int chotiProb = steps(v,n, dp,idx+i);
        
        ans = min(ans, chotiProb);}

    }
    if(ans!=INT_MAX)
        return dp[idx] = ans+1;
    return dp[idx] = INT_MAX;
}
// int steps(vector<int>v, int n, int idx = 0)
// {
//     if (idx == n-1)
//     {
//         return 0;
//     }
//     int current_step = v[idx];
//     int ans = INT_MAX;
//     for (int i=1; i<=current_step and i < n; i++)
//     {
//         if (idx+i < n)
//         {
//             ans = min(ans, steps(v,n,idx+i));
//         }
//     }
//     cout << "idx = " << idx << " ans = " << ans << endl;
//     if (ans!=INT_MAX)
//     {
//         return 1+ans;
//     }
//     return ans;

// }
int main()
{
    int t;
    cin >> t;
    int dp[1000];
    
    for (int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int k=0; k<n; k++) dp[k] = -1;
        for (int j=0; j<n; j++)
        {
            int x;
            cin >> v[j];
        }
        cout << steps(v,n,dp) << endl;
    }
    
    return 0;
}