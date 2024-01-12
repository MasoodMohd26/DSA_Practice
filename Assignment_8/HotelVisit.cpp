#include <iostream>
#include <queue>
#include <functional>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, k;
    cin >> t >> k;
    priority_queue<double>h;
    
    for(long long int i=0; i<t; i++)
    {
        long long int q;
        cin >> q;
        if (q == 1)
        {
            long long int x,y;
            cin >> x >> y;
            int d = sqrt(pow(x,2)+pow(x,2));
            if (h.size()<k)
            {
                h.push(d);
            }
            else{
                
                if (d < h.top()){
                    h.pop();
                    h.push(d);
                }
            }


        }
        if (q == 2)
        {
            cout << h.top() << endl;
            
        }
    }
    return 0;
}