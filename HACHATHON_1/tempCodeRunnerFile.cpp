#include<iostream>
#include <vector>
using namespace std;
// int main () {
// 	char arr[1000];
// 	string s;
// 	getline(cin,s);
// 	int l = s.size();
// 	int j=998;
// 	int i=l-1;
// 	arr[999] = '\0';
// 	while (i >=0)
// 	{
// 		if (s[i] != ' ')
// 		{
// 			arr[j] = s[i];
// 			j--;
// 			i--;

// 		}
// 		else
// 		{
// 			arr += (j+1);
// 			cout << arr;
// 			j = 998;
// 			while (s[i] == ' ')
// 			{
// 				i--;
// 			}
// 		}
		
// 	}
	

// 	return 0;
// }
int main()
{
	vector <string> v;
	string s;
	getline(cin, s);
	string temp = "";
	int i=0;
	while (i < s.size())
	{
		if (s[i] != ' ')
		{
			temp += s[i];
			i++;
		}
		else 
		{
			while (s[i] == ' ')
			{
				
				i++;
			}
			v.push_back(temp);
			temp = "";
		}

	}
	if (temp != "")
	{
		v.push_back(temp);
	}
	for (int i=v.size()-1; i>=0; i--)
	{
		cout << v[i] << " ";
	}
	return 0;
}