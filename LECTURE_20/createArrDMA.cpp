#include <iostream>
using namespace std;
int *createArray(int n)
{
    int *x = new int[n];
    // for (int i=0; i<n; i++)
    // {
    //     x[i] = i;
    // }
    *x = 0;
    return x;
}
int main()
{
    int *arr = createArray(10);
    for (int i=0; i<10; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}