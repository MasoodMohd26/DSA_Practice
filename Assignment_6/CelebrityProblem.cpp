#include<bits/stdc++.h>
using namespace std;

bool isCeleb(int p, vector<vector<int> >& M, int n)
    {
        for (int i=0; i<n; i++)
        {
            if (i==p)
            {
                continue;
            }
            if (M[p][i] || !M[i][p]){
                return false;
            }
        }
        return true;
        
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // for (int i=0; i<n; i++)
        // {
        //     if (isCeleb(i,M,n))
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        int l = 0;
        int r = n-1;
        while (l<r)
        {
            if (M[l][r]){
                l++;
            }
            else{
                r--;
            }
        }
        if (isCeleb(l,M,n))
        {
            return l;
        }
        return -1;
        
    }

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>v;
    vector<int>v1(n);
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            cin >> v1[j];
        }
        v.push_back(v1);
    }
    cout << celebrity(v,n);
    return 0;
}