#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int coin(int n, int m, vector<int>v, int dp[][50], int idx=0)
{
    // cout << n << " " <<  idx << endl;

    if (n == 0)
    {
		dp[n][idx] = 1;
        return 1;
    }
	if (dp[n][idx] != -1)
	{
		return dp[n][idx];
	}

    
    int ans = 0;
    for (int i=idx; i<m; i++)
    {
        if (n-v[i] >= 0)
        {
            ans += coin(n-v[i], m, v, dp,i);
        }
    }
	dp[n][idx] = ans;
    return ans;


}
int main()
{
	int dp[250][50];
	memset(dp, -1, sizeof(dp));
    int n;
    int m;
    cin >> n >> m;
    vector <int>v;
    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << coin(n, m, v, dp) << endl;
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    // cout << cnt;
    return 0;
}
// 10 2
// 2 5