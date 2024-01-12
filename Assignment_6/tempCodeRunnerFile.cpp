#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int c = 0;
    int m = 0;
    for(int i=0; i<n; i++)
    {
        c = i;
        m = (i+1)%n;
        int flag = 0;
        while (c != m)
        {
            if (v[m] > v[c])
            {
                // cout << v[m];
                flag = 1;
                break;
            }
            m++;
        }
        if (flag == 1)
        {
            cout << v[m] << " ";
        }
        else{
            cout << -1 << " ";
        }
    }
    return 0;
}