// #include <bits/stdc++.h>

// Prateek went to purchase fruits mainly apples, mangoes and oranges. There are N different fruit sellers in a line. Each fruit seller sells all three fruit items, but at different prices. Prateek, obsessed by his nature to spend optimally, decided not to purchase same fruit from adjacent shops. Also, Prateek will purchase exactly one type of fruit item (only 1kg) from each shop.
// Prateek wishes to spend minimum money buying fruits using this strategy. Help Prateek determine the minimum money he will spend. If he becomes happy, he may offer you discount on your favorite course in Coding Blocks ;). All the best!

// Input Format
// First line indicates number of test cases T. Each test case in its first line contains N denoting the number of fruit sellers in Fruit Market. Then each of next N lines contains three space separated integers denoting cost of apples, mangoes and oranges per kg with that particular fruit seller.

// Constraints
// 1 ≤ T ≤ 10 1 ≤ N ≤ 10^5 Cost of each fruit(apples/mangoes/oranges) per kg does not exceed 10^4

// Output Format
// For each test case, output the minimum cost of shopping taking the mentioned conditions into account in a separate line.

// Sample Input
// 2
// 3
// 1 50 50
// 50 50 50
// 1 50 50
// 4
// 1 2 3
// 3 2 1
// 1 1 1
// 1 1 1
// Sample Output
// 52
// 4
// Explanation
// Test Case 1:
// There are two ways, each one gives 52 as minimum cost. One way is buy apples from first shop, mangoes from second shop and apples from third shop or he can buy apples from first shop, oranges from second shop and apples from third shop.

// Both ways , cost comes up to 1 + 50 + 1 = 52

// Test Case 2:
// Answer is 4. Total 6 ways
#include <bits/stdc++.h>
using namespace std;
int arr[100000][3];

int solve(int dp[][10], int n, int i, int j = 5)
{
    if (i == n){

            dp[i][j] = 0;
        
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    for (int k = 0; k<3; k++){
        if (k != j)
        {   int chotiProblem = arr[i][k] + solve(dp, n, i+1, k );
            ans = min(ans, chotiProblem);
        }
    }

        dp[i][j] = ans;

    return ans;
}
int main(){
    int t;
    cin >> t;
    for (int k=0; k<t; k++)
    {
        
       int n;
        cin >> n;
        for (int i=0; i<n; i++){
            for (int j=0; j<3; j++){
                cin >> arr[i][j];
            }
        }
        int dp[n+1][10];
        memset(dp, -1, sizeof(dp));
        cout << solve(dp, n, 0) << endl;
    }
}