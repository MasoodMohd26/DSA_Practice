#include<iostream>
#include <vector>
using namespace std;
long long int binSearch(long long int arr[], int n, int key)
{
	long long int s = 0;
	long long int e = n-1;
	long long int m;
	while (s <=e )
	{
		m = (s+e)/2;
		if (arr[m] == key)
		{
			return m;
		}
		else if (arr[m] > arr[key])
		{
			e = m-1;
		}
		else 
		{
			s = m+1;
		}
	}
	return -1;
}
int main() {
	long long int n;
	cin >> n;
	long long int arr[n];
	// arr.resize(n);
	for (long long int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	long long int key;
	cin >> key;
	cout << binSearch(arr,n,key);
	return 0;
}