#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int b[], int c[], int s, int m, int e)
{
    int i=s;
    int j =m+1;
    int k = s;
    while (i <=m and j <= e)
    {
        if (b[i] < c[j])
        {
            arr[k] = b[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = c[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        arr[k] = b[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        arr[k] = c[j];
        j++;
        k++;
    }

}
void MergeSort(int *a, int s, int e)
{
    if (s>=e)
    {
        return;
    }
    int mid = (s+e)/2;
    int b[10000]; 
    int c[10000];

    // 1. Divide
    for (int i=s; i<=mid; i++)
    {
        b[i] = a[i];
    }
    for (int i=mid + 1; i<=e; i++)
    {
        c[i] = a[i];
    }

    MergeSort(b,s,mid);
    MergeSort(c,mid + 1,e);
    merge(a,b,c,s,mid,e);

    
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
    MergeSort(arr,0,n-1);
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}