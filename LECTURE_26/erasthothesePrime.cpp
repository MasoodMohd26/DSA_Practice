#include <bits/stdc++.h>
using namespace std;
int primePrint(int n)
{
    vector <int> arr(n+1,1);
    // for (int i=0; i<=n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (int i=2; i<=n; i++)
    {
        if (arr[i] == 1)
        {
            cout << i << " ";
            for (int x = 2*i; x<=n; x = x + i)
            {
                arr[x] = 0;
            }
        }
    }

}
int main()
{
    int n;
    cin >> n;
    primePrint(n);
    return 0;
}