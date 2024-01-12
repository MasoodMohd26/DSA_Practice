#include <bits/stdc++.h>
using namespace std;

void rotate(int v[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = v[i];
        v[i] = v[n-i-1];
        v[n-i-1] = temp;
    }
}

vector<int> leaders(int a[], int n)
{
    rotate(a,n);
    stack<int> s;
    vector<int> v;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.empty()==1)
        {
            flag = 0;
            s.push(a[i]);
        }
        else if (a[i]>s.top())
        {
            flag = 0;
            s.push(a[i]);
        }
        else if (flag == 0)
        {
            flag = 1;
            v.push_back(s.top());
        }
    }
    if (a[n-1]>s.top())
    {
        v.push_back(a[n-1]);
    }
    v.push_back(a[0]);
    reverse(v.begin(),v.end());
    // for (int i:v)
    // {
    //     cout<<i<<" ";
    // }
}

int main()
{
    int A[] = {16,17,4,3,5,2};
    leaders(A,6);
    return 0;
}