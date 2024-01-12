#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> PositionOf(n);
    vector<int> ValueAt(n);
    priority_queue<int>h;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        PositionOf[x] = i+1;
        ValueAt[i] = x;
        h.push(x);
    }
	for(int i=0; i<n; i++)
	{
		cout << ValueAt[i] << " " << PositionOf[i] << endl;
	}
    int cnt =0;
    int i = 0;
    while(i<n && cnt<k)
    {
        int x = h.top();
        h.pop();
        if (PositionOf[x] != i)
        {
			cout << " hi";
            swap(PositionOf[x], PositionOf[ValueAt[i]]);
            swap(ValueAt[i], ValueAt[PositionOf[x]]);
            cnt++;


            // swap(v[])
        }
        i++;

    }
    for(int i=0; i<n; i++)
    {
        cout << ValueAt[i] << " ";
    }
    return 0;
}