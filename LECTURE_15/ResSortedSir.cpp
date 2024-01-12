#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 0 or n == 1)
    {
        return true;
    }
    return arr[0] <= arr[1] and isSorted(arr++, n-1) ;

}
int main()
{
    int arr[] = {1,2,3};
    int n= sizeof(arr)/ sizeof(int);
    cout << isSorted(arr, n);
    return 0;
}