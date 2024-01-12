#include<iostream>
using namespace std;
int kadaneMaxSum(int arr[], int n)
{
    // int n = sizeof(arr)/sizeof(int);
    int s=0;
    int ans =0;
    for (int i=0; i<n; i++)
    {
        s+=arr[i];
        if (s<0)
        {
            s=0;
        }
        ans = max(ans,s);
    }
    return ans;
}
int main()
{
    int arr[] = {1,-5,2,4,-3,10,-20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<kadaneMaxSum(arr,n)<<endl;

    return 0;
}