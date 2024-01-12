#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,-1,0,-2, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout <<arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                }
                
            }
        }
    }

    
    return 0;
}