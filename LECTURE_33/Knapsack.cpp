#include <iostream>
#include <climits>
#include <string.h>
using namespace std;
int knapsack(int* price, int* wt, int n, int capacity)
{
    if (n ==0 or capacity == 0)
    {
        return 0;
    }
    int op1,op2;
    op1 = op2 = INT_MIN;
    if (capacity >= wt[n-1])
    {
        op1 = price[n-1] + knapsack(price, wt, n-1, capacity - wt[n-1]);

    }
    op2 = knapsack(price, wt, n-1, capacity);
    return max(op1, op2);
}
int TopDown(int* price, int* wt, int n, int capacity, int dp[][100])
{
    if (n ==0 or capacity == 0)
    {
        return dp[n][capacity] = 0;
        
    }
    if (dp[n][capacity] != -1)
    {
        return dp[n][capacity];
    }
    int op1,op2;
    op1 = op2 = INT_MIN;
    if (capacity >= wt[n-1])
    {
        op1 = price[n-1] + TopDown(price, wt, n-1, capacity - wt[n-1], dp);

    }
    op2 = TopDown(price, wt, n-1, capacity, dp);
    return dp[n][capacity] = max(op1, op2);
}
int main()
{
    int dp[100][100];
    memset(dp, -1, sizeof(dp));
    int price[] = {2,3,3,5};
    int wt[]  = {1,2,4,3};
    int cap =5;
    cout << knapsack(price, wt, 4,cap) << endl;
    cout << TopDown(price, wt, 4,cap, dp);   
    return 0;
}