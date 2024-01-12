#include <bits/stdc++.h>
using namespace std;
void TowerofHanoi(int n, string src, string helper, string dest)
{
    if (n == 0)
    {
        // cout << src << " to " << dest << endl;
        return ;
    }
    TowerofHanoi(n-1,src,dest, helper);
    cout<<n<< " from " << src<<" to "<<dest<<endl;
    TowerofHanoi(n-1, helper, src, dest);
    
}
int main()
{
    
    TowerofHanoi(3,"t1" , "t2" , "t3");
    
    return 0;
}