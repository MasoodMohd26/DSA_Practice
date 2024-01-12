#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<int, int>h;
    int maxi = INT_MIN;
    int key = -1;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        // exists
        if (h.find(x) != h.end())
        {
            h[x]+=1;
        }
        else h[x] = 1;
        if (h[x] >=maxi)
        {
            maxi = h[x];
            key = x;
        }


    }
    cout << key;
    return 0;
}