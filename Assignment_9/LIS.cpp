#include <bits/stdc++.h>
using namespace std;
long long int LISMaxLen(long long int n, vector<long long int>arr){
    vector<long long int> dp(n,1);
    long long int maxi = 1;
    for (long long int i=1; i<n; i++)
    {
        
        for (long long int j=i-1; j>=0; j--)
        {
            if (arr[i] >= arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }

        }
        maxi = max(maxi, dp[i]);
        
        
    }
    // for (auto it:dp)
    // {
    //     cout << it << ' ';
    // }
    // cout << endl;
    return maxi;
}
int main(){
    long long int n;
    cin >> n;
    vector <long long int>arr(n);
    for (long long int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << LISMaxLen(n,arr);
    
    return 0;
}