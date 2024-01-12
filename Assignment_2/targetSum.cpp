#include <iostream>
#include <cmath>
using namespace std;


int target_sum(int x, int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++){
        int last_digit = x & 1;
        if (last_digit == 1)
        {
            
            sum +=arr[n-1-i];
        }

        else if (last_digit == 0)
        {
            
            sum -=arr[n-1-i];
        }
        x= x >> 1;
    }
    return sum;
}


int main()
{

    int n,t;
    cin >> n >> t;
    
    int arr[1000];
    for (int i=0 ; i<n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i=0; i<pow(2,n) - 1; i++)
    {
        // cout << i << " ";
        int current_sum = target_sum(i, n, arr);
        // cout << current_sum;

        if (current_sum == t)
        {
            cnt ++;
        }
        // cout << endl;
    }
    cout << cnt;
    

    return 0;
}