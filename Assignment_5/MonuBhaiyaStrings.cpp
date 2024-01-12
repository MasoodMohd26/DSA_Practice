#include <bits/stdc++.h>
using namespace std;
unordered_map <char, int>pq;
void solve (string s, int i = 0){
    
    if ( i==s.size()){
        return;
    }
    char c = s[i];
    pq[c] = 1;
    solve(s, i+1);
}
int main(){
    for (int i=0; i<26; i++){
        char c = 'a'+i;
        pq[c] = 0;
    }
    string s;
    cin >> s;
    solve(s);
    for (auto i=0; i<26; i++){
        if (pq['a' + i] != 0)
        {char c = 'a' + i;
        cout << c;}
    }
    
    return 0;
}