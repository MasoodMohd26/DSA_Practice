#include <iostream>
using namespace std;
int CntSumDivx(int *arr, int n, int x)
{
    int sum;
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            sum = 0;
            for (int k=i; k<=j; k++)
            {
                sum += arr[k];
            }
            if (sum % x == 0)
            {
                cnt ++;
                // cout << sum << endl;
            }
        }
    }
    return cnt;
}
int main()
{
    int arr[] = {0,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << CntSumDivx(arr, n, 5);
    
    return 0;
}