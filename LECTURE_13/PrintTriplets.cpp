#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(int);
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                cout <<arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
            }
        }
    }

    
    return 0;
}