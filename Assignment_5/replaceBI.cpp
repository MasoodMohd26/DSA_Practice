#include<iostream>
#include <cstring>
using namespace std;

void fn (string s, int i, string ans1, string ans2, int cnt)
{
	if (s.size() == i)
	{
		cout << ans1 << endl;
		cout << ans2<< endl;
		return;

	}
	if (s[i] == 'h' && i+1 <s.size() && s[i+1] = 'i')
	{
		// ans1 += '';
		ans2 += "bye";
		fn(s,i+1,ans,ans2,++cnt);
	}
	else 
	{
		ans1 += s[i];
		ans2 += s[i];
		fn(s,i+1,ans,ans2,cnt);
	}
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	for (int i=0;i<n; i++)
	{
		string s,ans1,ans2;
		getline(cin,s);
		ans1 = "";
		ans2 = "";
		fn(s,0,ans1,ans2,0);
	}
	return 0;
}