#include <iostream>
#include <climits>
using namespace std;
int bottomUp(int** a, int n, int m)
{
    int dp[n][m];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (i==0 and j==0)
            {
                dp[i][j] = a[i][j];
            }
            else{
                // upar se aane wali cost
                int op1Upar;
                // left se aane wali cost
                int op2Left;
                if (i == 0)
                {
                    op1Upar = INT_MAX;
                }
                else{
                    op1Upar = dp[i-1][j];
                }

                if (j == 0)
                {
                    op2Left = INT_MAX;
                }
                else{
                    op2Left = dp[i][j-1];
                }
                dp[i][j] = min(op1Upar, op2Left) + a[i][j];
                
            
            }
        }
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n-1][m-1];
}
int main()
{
    int n,m;
    cin >> n >> m;
    int** a = new int*[m];
    for (int i=0; i<n; i++)
    {
        a[i] = new int[m];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    
    bottomUp(a,n,m);
    return 0;
}