#include <iostream>
using namespace std;
int sum(int arr1[], int arr2[], int l1, int l2)
{
    int i = l1-1;
    int j = l2-1;
    int sum1 = 0;
    int sum2 = 0;
    int sum = 0;
    
    while(i<l1 && j<l2)
    {
        sum1 = 0;
        sum2 = 0;
        while (arr1[i] != arr2[j] and i < l1 and j < l2)
        {
            sum1 += arr1[i];
            i++;
            while (arr1[i] > arr2[j] && j<l2)
            {
                sum2 += arr2[j];
                j++;
            }
        }
        if (sum1 > sum2)
        {
            sum += sum1;
        }
        else 
        {
            sum += sum2;
        }
        if (i<l1)
        {
            sum += arr1[i];
            i++;
        }
        else if (j<l2)
        {
            sum += arr2[j];
            j++;
        }

    }
    return sum;
}
int main() {
	int t;
	cin >> t;
	for (int x=0; x<t; x++)
	{
	int l1;
	int l2;
	cin >> l1;
	cin >> l2;
	int arr1[l1];
	int arr2[l2]; 
	for (int i=0; i<l1; i++)
	{
		cin >> arr1[i];
	}
	for (int i=0; i<l2; i++)
	{
		cin >> arr2[i];
	}
	cout << sum(arr1,  arr2, l1,l2) << endl;
}
	return 0;
}