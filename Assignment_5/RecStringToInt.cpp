#include <iostream>
using namespace std;
int solve(string s, int n, int i)
{
    
    if (i==0)
    {
        return s[i]-'0';
    }
    return (s[i]-'0') + 10 * solve(s,n, i-1);
}
int main(){
    string s;
    getline(cin, s, '\n');
    int n = s.length();
    cout << solve(s, n, n-1);


    return 0;
}