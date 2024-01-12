#include <iostream>
#include <algorithm>

using namespace std;

int cmpStr(string s1, string s2)
{
    if (s1.size() == s2.size())
    {
        return s1 > s2;
    }
    else 
    {
        s1.size() < s2.size();
    }
}



int main()
{
    string a[5];
    a[0] = "a";
    a[1] = "uid";
    a[2] = "ba";
    a[3] = "kj";
    a[4] = "jimm";
    sort(a, a+5, cmpStr);
    for (int i=0; i<5; i++)
    {
        cout << a[i] << endl;
    }

    
    return 0;
}