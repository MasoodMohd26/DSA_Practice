#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int hts[] ={2,3,2,1,5,4,6,3};

    int n = 8;
    int ans[n];
    stack<int>s;
    s.push(0);
    for (int i=1; i<n; i++)
    {
        int current_ht = hts[i];
        while(!s.empty() and current_ht > hts[s.top()])
        {
            ans[s.top()] = current_ht;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
    }
    for (int i=0; i<n; i++)
    {
        cout << ans[i] << " ";

    }

}