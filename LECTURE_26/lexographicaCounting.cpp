#include <bits/stdc++.h>
using namespace std;
char arr[] = {'0','1', '2','3','4','5','6','7','8','9'};

void lex(string input, string output, bool isFirst = true)
{
    if (output.size()>input.size())
    {
        return;
    }

    if (!isFirst) {
        if (stoi(output) <= stoi(input)) cout << output<< " ";
        else return;
    }
    int start = isFirst ? 1 : 0;
    for (int i=start; i<=9; i++)
    {
        output.push_back('0' + i);
        lex(input, output, false);
        output.pop_back();

    }
    return;
}
int main()
{
    string n;
    getline(cin,n);
    string o ;
    cout << "0" << ' ';
    lex(n,o);
    return 0;
}