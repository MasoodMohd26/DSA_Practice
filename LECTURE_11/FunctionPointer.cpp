#include <iostream>
using namespace std;
void printArray(int *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";  // *(a+i)
    }
}
int main()
{

    int a[] = {1,2,3,4};
    int *p = a;
    int n = sizeof(a)/sizeof(a[0]);
    printArray(p,n);
    return 0;

}