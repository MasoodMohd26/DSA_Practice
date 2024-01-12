#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1, pair<int,int>p2 ){
    return p1.second >= p2.second;
}
int main()
{
    int n;
    cin >> n;
	int k;
	cin >> k;
    unordered_map<int, int>h;
    // int maxi = INT_MIN;
    // int key = -1;
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
        // if (h[x] >=maxi)
        // {
        //     maxi = h[x];
        //     key = x;
        // }


    }
    // cout << key;
    vector<pair<int,int>>v;
    for(auto it:h)
    {
        v.push_back(make_pair(it.first, it.second));
    }
    
    sort(v.begin(), v.end(), cmp);
	vector<int> ans(k);
    for (int i=0; i<k; i++) 
		{ans[i] = v[i].first;}
	sort(ans.begin(), ans.end());
	for (int i=0; i<k; i++)
	{
		cout << ans[i] << " ";
	}
    return 0;
}