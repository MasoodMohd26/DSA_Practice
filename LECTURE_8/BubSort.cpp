#include <iostream>
using namespace std;

void BubSort(int arr[], int n){
    for (int i = 0 ;i<=n-2; ++i){
        int cnt = 0;
        for (int j = 0; j <= n-2-i; j ++){
            if (arr[j] > arr[j+1]){
                cnt ++;
                swap(arr[j], arr[j + 1]);
            }
        if (cnt == 0){
            return;
        }
        }
    }
    return;
}

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
    return ;
}
int main() {
    int arr[] = {4,3,1,7};
    cout << "Before sorting -> ";
    PrintArr(arr, 4);
    cout << endl;
    BubSort(arr, 4);
    cout << "After sorting -> ";
    PrintArr(arr, 4);
}