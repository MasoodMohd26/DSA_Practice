#include <iostream>
#include <stack>
#include <limits>
using namespace std;
int* nextSmaller(int hts[], int n)
{
    
    int *ans = new int[n];
    stack<int>s;
    s.push(0);
    for (int i=1; i<n; i++)
    {
        int current_ht = hts[i];
        while(!s.empty() and current_ht < hts[s.top()])
        {
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        ans[s.top()] = n;
        s.pop();
    }
    return ans;

}
int* prevSmaller(int hts[], int n)
{
    
    
    int *ans = new int[n];
    stack<int>s;
    s.push(n-1);
    for (int i=n-1; i>=0; i--)
    {
        int current_ht = hts[i];
        while(!s.empty() and current_ht < hts[s.top()])
        {
            ans[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        ans[s.top()] = -1;
        s.pop();
    } 
    // for(int i=0; i<n/2; i++)
    // {
    //     swap(ans[i],ans[n-i-1]);
    // }
    return ans;

}
int main()
{
    int n;
    cin >> n;
    int* hts = new int[n];
    for (int i=0; i<n; i++)
    {
        cin >> hts[i];
    }
    
    int max_ar = -1;
    
    int *ans1 = nextSmaller(hts, n);
    int *ans2 = prevSmaller(hts, n);
    for (int i=0; i<n; i++)
    {
        int lenght = ans1[i] - ans2[i] - 1;
        int ht = hts[i];
        int ar = lenght * ht;
        max_ar = max(max_ar, ar);


    }
    cout << max_ar;
    
    // for (int i=0; i<n; i++)
    // {
    //     cout << ans1[i] << " ";

    // }
    // cout << endl;
    // for (int i=0; i<n; i++)
    // {
    //     cout << ans2[i] << " ";

    // }

}