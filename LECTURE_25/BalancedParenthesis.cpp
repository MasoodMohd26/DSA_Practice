#include <bits/stdc++.h>
using namespace std;
bool isbalanced(string x)
{
    stack <char> s;
    for (int i=0; i<x.size(); i++)
    {
        char ch = x[i];
        switch(ch)
        {   case '(':
            case '{':
            case '[':
                s.push(ch);
                break;
            case '}':
                if (s.empty() == 0 and s.top() == '{')
                {
                    s.pop();
                }
                else{
                    return false;
                }
                break;
            case ')':
                if (s.empty() == 0 and s.top() == '(')
                {
                    s.pop();
                }
                else{
                    return false;
                }
                break;
            case ']':
                if (s.empty() == 0 and s.top() == '[')
                {
                    s.pop();
                }
                else{
                    return false;
                }
                break;
        }
        

    }
    return (s.empty() == 1);
}
int main()
{
    string s = "({a}";
    cout << isbalanced(s);
    return 0;
}