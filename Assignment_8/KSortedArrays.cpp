#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    int posArr;
    int pos;
    node(int v, int p1,int p2)
    {
        val = v;
        posArr = p1;
        pos=p2;
    }
    struct Compare {
        bool operator()(const node& a, const node& b) {
            return a.val > b.val;
        }
    };

    

};
bool cmp(node a, node b)
    {
        return a.val < b.val;
    }
vector<int> mergeK(vector<vector<int>>arr, int n, int k)
{
    vector<int>ans;
    priority_queue<node, vector<node>, node::Compare>h;
    // push the first element of each array to heap
    for(int i=0; i<k; i++)
    {
        if (arr[i].size()!=0)
        {
            node n(arr[i][0], i, 0);
            h.push(n);
        }
    }
    while(!h.empty())
    {
        // cout << "ji";
        node n = h.top();
        // cout << "top value: " << n.val << " heap status";
        
        // cout << endl;

        h.pop();
        ans.push_back(n.val);
        // if not the last index
        if (n.pos + 1 < arr[n.posArr].size())
        {
            node x(arr[n.posArr][n.pos+1], n.posArr, n.pos+1);
            h.push(x);

        }


    }
    return ans;
}
int main(){
    int k,n;
    cin>>k>>n;
    vector<vector<int>>arr;

    for(int i=0; i<k; i++)
    {
        vector<int>v;
        for(int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        arr.push_back(v);
    }
    vector<int>ans = mergeK(arr,n,k);
    for (auto it:ans)
    {
        cout << it << ' ';
    }
    
    return 0;
}