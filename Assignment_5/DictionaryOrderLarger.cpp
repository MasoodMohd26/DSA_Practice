#include <bits/stdc++.h>
using namespace std;
string ans;
set<string>s1;
void solve(string a, int i){
    if (a[i] == '\0')
    {
        if (a.compare(ans) > 0)
        {
            s1.insert(a);
        //    cout << a << endl;
            return;
        }
    }
    for (int j=i; j<a.size(); j++){
        swap(a[i], a[j]);
        solve(a, i+1);
        swap(a[i], a[j]); //backtracking to restore the original string
    }
}
int main(){
    string s;
    getline(cin, s, '\n');
    ans = s;
    // sort(s.begin(), s.end());
    solve(s,0);
    for (auto it:s1)
    {
        cout << it << endl;
    }
    // cout << s;
    return 0;
}