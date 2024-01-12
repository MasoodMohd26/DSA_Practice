#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int capacity, vector<int>& wt, vector<int>& val, int dp[][1000]) {
    if (n == 0 || capacity == 0)
        return dp[n][capacity] = 0;

    if (dp[n][capacity] != -1)
        return dp[n][capacity];

    int ans = INT_MIN;

    for (int i = 0; i <= capacity / wt[n - 1]; i++) {
        int choti = i * val[n - 1] + knapsack(n - 1, capacity - i * wt[n - 1], wt, val, dp);
        ans = max(ans, choti);
    }

    return dp[n][capacity] = ans;
}

int main() {
    int w, n;
    cin >> n >> w;
    vector<int> wt(n);
    vector<int> val(n);

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    // vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
    int dp[1000][1000];
	memset(dp, -1, sizeof(dp));
    cout << knapsack(n, w, wt, val, dp) << endl;

    return 0;
}
