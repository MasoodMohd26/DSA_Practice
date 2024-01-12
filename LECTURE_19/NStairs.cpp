#include <iostream>
using namespace std;
int NStairs(int n,int k)
{
    if (n == 0)
    {
        return 1;
    }
    if (n<0)
    {
        return 0;
    }
    int ans=0;
    for (int i=1; i<=k; i++)
    {
        ans += NStairs(n-i,k);
    }
    return ans;
}
int main()
{

    int n,k;
    k=3;
    for (int i=0; i<10; i++)
    {
        cout << "N " << i << " = "  << NStairs(i,k) << endl;

    }
    cout << endl;

}