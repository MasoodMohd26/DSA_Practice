#include <bits/stdc++.h>
using namespace std;
void insert(priority_queue<int>&maxHeap, priority_queue<int , vector<int>, greater<int>>&minHeap, int x)
{
    if (maxHeap.size() == minHeap.size())
    {
        if (maxHeap.size() == 0)
        {
            maxHeap.push(x);
        }
        else if (x > maxHeap.top())
        {
            minHeap.push(x);
        }
        else
        {
            maxHeap.push(x);
        }
    }
    else if (maxHeap.size() > minHeap.size())
    {

        if (x > maxHeap.top())
        {
            minHeap.push(x);
        }
        else{
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(x);
        }
    }
    else{
        if (x < minHeap.top())
        {
            maxHeap.push(x);
        }
        else{
            maxHeap.push(minHeap.top());
            minHeap.pop();
            minHeap.push(x);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        priority_queue<int>maxHeap;
        priority_queue<int, vector<int>, greater<int>>minHeap;
    

        for (int j=0; j<n; j++)
        {
            int x;
            cin >> x;
            insert(maxHeap, minHeap, x);
            int ans;
            if (maxHeap.size() == minHeap.size())
            {
                cout << (minHeap.top() + maxHeap.top())/2 << " ";
            }
            else if (maxHeap.size() > minHeap.size())
            {
                cout << maxHeap.top() << ' ';
            }
            else{
                cout << minHeap.top() << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}