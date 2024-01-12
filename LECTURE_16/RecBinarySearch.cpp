#include <bits/stdc++.h>
using namespace std;
int bs(int *arr, int n, int key, int l, int r)
{
    if (l>r)
    {
        return -1;
    }
    int mid = (l+r)/2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return bs(arr,n,key,l,mid-1);
    }
    else
    {
        return bs(arr,n,key,mid+1,r);
    }
}
int main()
{
    int arr[] = {1,3,6,9,10};
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    
    cout << bs(arr,n,1,0,n-1);
    
    return 0;
}