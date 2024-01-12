#include <iostream> 
#include <vector>
#include<queue>
#include <functional>
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

};
vector<int> mergeK(vector<vector<int>>arr, int n, int k)
{
    vector<int>ans;
    priority_queue<node, vector<node>, greater<node>>h;
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
        node n = h.top();
        h.pop();
        ans.push_back(n.val);
        // if not the last index
        if (n.pos != arr[n.posArr].size()-1)
        {
            node x(arr[n.posArr][n.pos+1], n.posArr, n.pos);
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
        cout << it;
    }
    
    return 0;
}