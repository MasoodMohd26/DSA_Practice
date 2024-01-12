#include<iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	int n,x;
	cin >> n;
	vector <int> v(n);
	for (int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    int q;
    cin >> q;
    for (int i = 0 ;i <q ; ++i)
    {
        cin >>x;
        for (int j=0; j<n; j++)
        {
            int idx;
            idx = j-x;
            if (idx<0)
            {
                idx = j - x + n;
            }
            v[j] += v[idx];
        }
    }
    long long int sum=0;
    for (int i=0; i<n; i++)
    {
        sum += v[i];
    }

    int ans = sum %(pow(10,9) + 7);
    cout << sum;


	return 0;
}