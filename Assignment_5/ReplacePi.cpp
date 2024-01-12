#include<iostream>
#include <cstring>
using namespace std;
string fn(string s, int i, string ans)
{
	if (i == s.size() - 1)
	{
		return ans;
	}
	if (s[i] == 'p' && s[i+1] == 'i')
	{
		ans += "3.14";
		fn(s,i+1,ans);
	}
}

int main() {
	int n;
    cin >> n;
    string x;
    getline(cin,x);
	for (int i=0; i<n; i++)
	{
		string s;
		getline(cin, s);
		string ans = "";
		cout << fn(s,0,ans);

	}
	
	return 0;
}