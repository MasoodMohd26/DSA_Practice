#include <iostream>
using namespace std;
int chessElephant(int n, int i, int j)
{
    if (i==0 and j==0)
    {
        return 1;
    }
    if (i < 0 or j < 0)
    {
        return 0;
    }

    int ans=0;
    for (int k=0; k<i; k++)
    {
        ans += chessElephant(n,k,j);
    }
    for (int k=0; k<j; k++)
    {
        ans += chessElephant(n,i,k);
    }
    return ans;
}

int main()
{
    cout << chessElephant(3,2,2);
    return 0;
}