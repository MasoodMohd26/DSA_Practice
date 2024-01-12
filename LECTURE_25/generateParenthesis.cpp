#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(int n, int cntOpen, int cntClosed, int i, char*s)
{
    if (i == 2*n)
    {
        // for (auto it : v)
        // {
        //     cout << it;
            
        // }
        s[i] = '\0';
        cout << s << endl;
        return ;
    }
	if (cntClosed < cntOpen )
    {
        s[i] = ')';
        generateParenthesis(n, cntOpen, cntClosed+1, i + 1,s );
        
    }
    if (cntOpen < n)
    {
        s[i] = '(';
        generateParenthesis(n, cntOpen+1, cntClosed, i + 1,s );
        

    }
    
}

int main()
{
    char s[1000] = "";
	int n;
	// cin >> n;
    n = 2;
    generateParenthesis(n, 0, 0, 0, s );
    return 0;
}