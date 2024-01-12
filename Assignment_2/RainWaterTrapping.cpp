#include<iostream>
#include<vector>
using namespace std;
int ans(vector <int> &v)
{
	int n = v.size();
	int l=0;
	int r = n-1;
	int ans=0;
	int leftMax = 0;
	int rightMax = 0;
	while (l<r)
	{
		if (v[l] > v[r])
		{
            // cout << "hi";
            // cout <<v[r];
			if (v[r] < rightMax)
			{
				ans += (rightMax - v[r]);
				
				
			}
            rightMax = max(rightMax, v[r]);
            r--;
		}
        
		else
		{
            // cout << "bi";
            // cout << v[l];
			if (v[l] < leftMax)
			{
				ans += (leftMax-v[l]);
				
				
			}
            leftMax = max (leftMax, v[l]);
            l++;
		}
	}
	return ans ;
}

int main() {
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	cout << ans(arr);
	return 0;
}