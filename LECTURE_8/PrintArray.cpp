#include <iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,4,7,12,15};
    int n = sizeof(arr)/sizeof(int);
    PrintArray(arr,n);
    return 0;
}