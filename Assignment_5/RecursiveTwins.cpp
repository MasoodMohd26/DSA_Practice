#include <iostream>
#include <cstring>
using namespace std ;
int fn(string s, int i, int len, int cnt)
{
    if (i >= len)
    {
        return cnt;
    }
    if (i+2 <len && s[i] == s[i+2])
    {
        cnt ++;
    }
    fn(s,i+1,len,cnt);
    return 1;
    
}
int main()
{
    string s ;
    getline(cin, s);
    cout << (fn(s,0, s.size(),0));
    return 0;
}