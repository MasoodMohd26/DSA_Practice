#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int n, int i=0)
{
    if (i == n-1)
    {
        return ;
    }
    for (int j=0; j<n-1-i; j++)
    {
        if (arr[j] > arr[j+1])
        {
            swap(arr[j], arr[j+1]);
        }
    }
    bubbleSort(arr,n,i+1);
}
void BubbleSort(int *arr, int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i=0; i<n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
}
int main()
{
    int arr[] = {1,5,2,6,4,3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Before Sorting: ";
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout<<"After Sorting: ";
    BubbleSort(arr,n);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
