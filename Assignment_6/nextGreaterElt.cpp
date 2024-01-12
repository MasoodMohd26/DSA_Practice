#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void fn(vector<int>v, int n)
{
    stack<int>s;
    vector<int>v1(n);
    for (int i=n-1; i>=0; i--)
    {
        
        while(s.empty() != 1 && s.top()<= v[i])
        {
            s.pop();
        }
        if (s.empty() == 1)
        {
            v1[i] = -1;
            s.push(v[i]);
        }
        else{
            v1[i]= s.top();
            s.push(v[i]);
        }
    }
    for (int i=0; i<n; i++)
    {
        cout << v[i]<<"," << v1[i] << endl;
    }
}


int main()
{
    int t;
    cin >> t;
    for (int j=0; j<t; j++)
    {int n;
    cin >> n;
    vector<int>v(n);
    for (int i=0; xi<n; i++)
    {
        cin >> v[i];  
    }
    fn(v,n);}
    

    return 0;
}