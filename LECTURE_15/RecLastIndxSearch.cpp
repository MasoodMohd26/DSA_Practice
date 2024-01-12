#include <iostream>
using namespace std;
int LastIdxLinSrch(int *arr, int n, int key)
{
    if(n==0)
    {
        return -1;
    }
    if (arr[n-1] == key)
    {
        return n-1;
    }
    return LastIdxLinSrch(arr, n-1,key);
}
int main()
{
    int arr[] = {1,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << LastIdxLinSrch(arr, n, 0);
    return 0;
}