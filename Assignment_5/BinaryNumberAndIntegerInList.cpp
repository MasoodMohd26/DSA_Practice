#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    list<int>l;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        l.push_back(x);
    }
    int ans = 0;
    for(auto it: l){
        ans = 2*ans + it;
    }
    cout << ans;
    return 0;
    
}
