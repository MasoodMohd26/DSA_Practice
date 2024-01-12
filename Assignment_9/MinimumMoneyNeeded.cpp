#include <bits/stdc++.h>
using namespace std;
// int solve(int n, int capacity, vector<int>arr, int items_left)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int ans = INT_MAX;
//     int ni = 0;
//     while (ni * arr[n] <= capacity)
//     {
//         int chotiProb = ni*arr[n] + solve(n-1, capacity - ni*n, arr);
//         ans = min(ans, chotiProb);
//         ni++;
//     }
//     return ans;
    
// }
int solve(int n, int capacity, vector<int>arr, int remaining_items, int dp[][1000]){
    if (capacity == 0 || n == 0 || remaining_items == 0)
    {
        if (capacity == 0 and remaining_items == 0)
        {
            return 0;
        }
        else {
            return -1;
        }
    }
    int ans = INT_MAX;
    // int ni = 0;
    // while (ni * n <= capacity){
    for (int ni=0; ni<=remaining_items; ni++){
        if (capacity-ni*n >= 0)
        {    
            int chotiProb = solve(n-1, capacity - ni*n, arr, remaining_items - ni, dp);
            if (chotiProb != -1){
                ans = min(ans, ni*arr[n] + chotiProb);
            }
        }
        else break;
        
    }
    if (ans == INT_MAX){
        return -1;
    }
    return ans;
}
int main()
{
    int n,w;
    cin >> n >> w;
    vector<int>v(n+1);
    v[0] = -1;
    for (int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    int dp[1000][1000];
    memset(dp,-1,sizeof(dp));
    cout << solve(n,w,v,n, dp);

    return 0;
}

// ----------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
// int solve(int n, int capacity, vector<int>arr, int items_left)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     int ans = INT_MAX;
//     int ni = 0;
//     while (ni * arr[n] <= capacity)
//     {
//         int chotiProb = ni*arr[n] + solve(n-1, capacity - ni*n, arr);
//         ans = min(ans, chotiProb);
//         ni++;
//     }
//     return ans;
    
// }
int solve(int n, int capacity, vector<int>arr, int remaining_items){
    if (capacity == 0 || n == 0 || remaining_items == 0)
    {
        if (capacity == 0 and remaining_items == 0)
        {
            return 0;
        }
        else {
            return -1;
        }
    }
    int ans = INT_MAX;
    // int ni = 0;
    // while (ni * n <= capacity){
    for (int ni=0; ni<=remaining_items; ni++){
        if (capacity-ni*n >= 0)
        {    
            int chotiProb = solve(n-1, capacity - ni*n, arr, remaining_items - ni);
            if (chotiProb != -1){
                ans = min(ans, ni*arr[n] + chotiProb);
            }
        }
        else break;
        
    }
    if (ans == INT_MAX){
        return -1;
    }
    return ans;
}
int main()
{
    int n,w;
    cin >> n >> w;
    vector<int>v(n+1);
    v[0] = -1;
    for (int i=1; i<=n; i++)
    {
        cin >> v[i];
    }
    // int dp[1000][1000];
    // m
    cout << solve(n,w,v,n);

    return 0;
}