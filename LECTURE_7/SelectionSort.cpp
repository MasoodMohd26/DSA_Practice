#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i ++){
        cout <<arr[i] << " ";
    }
}
void selectionSort(int arr[], int n)
{
    int min;
    for (int pos=0; pos<=n-2; pos++){
        min = pos;
        for (int j=pos; j<=n-1; j++){
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[pos], arr[min]);

    }
}
int main()
{
    int arr[] = {1,4,2,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting: ";
    printArray(arr, n);
    selectionSort(arr, n);
    cout<<"\nAfter sorting:";
    printArray(arr, n);
    return 0;

}