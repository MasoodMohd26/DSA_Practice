#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    priority_queue<int>h;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        h.push(x);

    }
    for (int i=0; i<k-1; i++)
    {
        h.pop();
    }
    cout << h.top();
    return 0;
}