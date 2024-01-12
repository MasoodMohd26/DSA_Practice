#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // int arr[] = {1,2,5,4,3};
    // int n = 5;
    int n;
    cin >> n;
    int arr[1000];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans[1000];
    stack<int>s;
    s.push(n-1);
    for(int i=n-2; i>=0; i--)
    {
        int x = arr[i];
        while (!s.empty() and x> arr[s.top()])
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
    // for (int i=0; i<n; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    for (int i=0; i<n; i++)
    {
        cout << (i-ans[i]) << " ";
    }
    cout << "END";
    return 0;

}