#include <iostream>
using namespace std;
bool isSorted(int arr[], int n, int i=0)
{
    if (i == n-1 or n == 0)
    {
        return true;
    }
    bool chotiProb = (arr[i] < arr[i+1]) and isSorted(arr,n, i+1);
    if (chotiProb == false )
    {
        return false;
    }
    else{
        return chotiProb;
    }

}
int main()
{
    int arr[] = {};
    int n= sizeof(arr)/ sizeof(int);
    cout << isSorted(arr, n);
    return 0;
}