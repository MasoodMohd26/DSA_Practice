#include<iostream>
#include<climits>
using namespace std;
int sum(int arr[], int n, int strt, int end)
{
    int sum;
    if (strt == end)
    {
        sum = arr[strt];
    }
    else if (strt < end){
        sum = arr[strt];
        int i = (strt+1);
        while (i<= end)
        {
            // if (i>=n)
            // {
            //     i = i%n;
            // }
            sum += arr[i];
            i = (i+1);
        }
    }
    else{
        sum = arr[strt];
        int i = (strt+1);
        while (i<n)
        {
            // if (i>=n)
            // {
            //     i = i%n;
            // }
            sum += arr[i];
            i = (i+1);
        }
        i=0;
        while (i <= end)
        {
            sum += arr[i];
            i++;
        }
    }
	return sum;
}
int main() {
	int t;
	cin >> t;
	for (int x=0; x<t; x++)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i=0; i<n; i++)
		{
			cin >> arr[i];
		}
		int maxSum = INT_MIN;
		for(int j=0; j<n; j++)
		{
			for (int k=0; k<n; k++)
            {
                maxSum = max(sum(arr,n,j,k), maxSum);   
            }
		}
        cout << maxSum << endl;
	}
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i=0; i<n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << sum(arr, n, 2,1);
	
	// return 0;
}