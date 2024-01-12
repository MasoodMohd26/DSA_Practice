#include <iostream>
using namespace std;
int Sum(int arr[], int n)
{
    if (n == 0 )
    {
        return 0;
    }
    int ChotiProb = Sum(arr+1, n-1);
    return arr[0] + ChotiProb;

}
int main()
{
    int arr[] = {1,2,4};
    int n= sizeof(arr)/ sizeof(int);
    cout << Sum(arr, n);
    return 0;
}