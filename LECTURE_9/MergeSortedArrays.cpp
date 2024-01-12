#include <iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void MergeSortedArrays(int a[], int b[], int m, int n)
{
    int i = m-1;
    int j = n - 1;
    int k = m + n - 1;
    while ((i >=0) and (j >= 0)){
        if (a[i] > b [j]){
            a[k] = a[i];
            k --;
            i --;
        }
        else
        {
            a[k] = b[j];
            k--;
            j--;
        }
    }
    while (j>=0){
        a[k] = b[j];
        k--;
        j--;
    }
}

int main()
{
    int a[7] = {3,5,8};
    int b[4] = {1,2,4,6};
    PrintArray(a,7);
    MergeSortedArrays(a,b,3,4);
    cout << endl;
    PrintArray(a,7);
    
    return 0;
}