#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<string,int>p1, pair<string, int>p2)
    {
        if (p1.second == p2.second)
        {
            if (p1.first.compare(p2.first) == -1)
                return true;
            return false;
        }
        return p1.second < p2.second;
    }
};
int main()
{
    int x;
    cin >> x;
    int n;
    cin >> n;
    cin.get();
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp>h;
    for (int i=0; i<n; i++)
    {
        string s;
        int m;
        cin >> s >> m;
        if(m >= x)
        {
            h.push(make_pair(s,m));
        }
        cin.get();

    }
    while(!h.empty()){
        pair<string, int>p = h.top();
        cout << p.first << " " << p.second << endl;
        h.pop();
    }
    return 0;
}