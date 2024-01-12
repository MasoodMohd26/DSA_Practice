#include <bits/stdc++.h>
using namespace std;
int fn(char *s, int res=0)
{
    if (s[0] == '\0')
    {
        return res;
    }
    int num = s[0] - '0';
    res = res*10+num;
    return fn(s+1, res);
}
int main()
{
    char a[] = "123664";
    cout << fn(a);

    return 0;
}