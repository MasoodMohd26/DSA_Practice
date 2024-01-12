#include <iostream>
using namespace std;
int BinSearch(int a[], int n, int key ){
    int s = 0;
    int e = n-1;
    int m;
    while (s<=e)
    {
        m=(s+e)/2;
        if (a[m] == key)
        {
            return m;
        }
        else if (a[m] > key)
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
int main()
{
    int arr[] = {1,4,7,12,15};
    int n = sizeof(arr)/sizeof(int);
    cout << BinSearch(arr,n,12);
    return 0;
}