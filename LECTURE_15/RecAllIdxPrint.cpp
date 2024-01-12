#include <iostream>
using namespace std;
void Print(int arr[], int n, int key)
{
    if (n == 0)
    {
        return ;
    }
    if (arr[n-1] == key)
    {
        cout << n-1 << ' ';
    }
    Print(arr,n-1,key);
}
int main()
{
    int arr[] = {4,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    Print(arr, n, 9);
    return 0;
}