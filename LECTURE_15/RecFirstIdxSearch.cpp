#include <iostream>
using namespace std;
int FirstIdxLinSrch(int arr[], int n, int key, int i=0)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    // cout << i << " ";
    return FirstIdxLinSrch(arr, n, key, i+1);
    
}
int main()
{
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << FirstIdxLinSrch(arr, n, 4);
    return 0;
}