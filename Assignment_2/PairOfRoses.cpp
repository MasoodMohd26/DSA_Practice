#include<iostream>
#include<climits>
using namespace std;
void fn(int n, int arr[], int target )
{

	//sorting array
	for (int i=1; i<n; i ++)
	{
		int hpc = arr[i];
		int pos = i-1;
		while (pos >= 0)
		{
			if (hpc < arr[pos])
			{
				arr[pos+1] = arr[pos];

			}
			else
			{
				break;
			}
			pos--;
		}
		arr[pos + 1] = hpc;
	}
	int min = INT_MAX;
	int x1,x2;
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if ((arr[j] + arr[i] == target) && (arr[j]-arr[i]) < min)
			{
				x1 = arr[i];
				x2 = arr[j];
			}
		}
	}
	cout << "Deepak should buy roses whose prices are "<<x1 << " and " << x2 << ".\n";

}

int main() {
	int t, target;
	cin >> t;
	int n;
	
	int arr[10000];
	for (int i=0; i<t; i++)
	{
		cin >> n;
		for (int j=0; j<n; j++){
			cin >> arr[j];
			
		}
		cin >>target;
		fn(n, arr, target);
	}

	




	return 0;
}