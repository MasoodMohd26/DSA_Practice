#include <bits/stdc++.h>
using namespace std;
vector <string>v;
void subSequences(char *s)
{
    if (strlen(s) == 1)
    {
        v.push_back("");
        v.push_back(s);
        return;
    }
    if (strlen(s) == 0)
    {
        v.push_back("");
        return;
    }
    char a = s[0];
    s++;
    subSequences(s);
    int n = v.size();
    for (int i=0; i < n; i++)
    {
        cout << v[i]+a << endl;
        v.push_back(a+v[i]);
    }
    return ;


    
}
int main()
{
    char s[100];
    cin.get(s, 100);
    subSequences(s);
    for (auto it:v)
    {
        cout << it << " ";
    }
    return 0;
}