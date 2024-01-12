#include <iostream>
using namespace std;
long long int divide(long long int *a, long long int s, long long int e)
{
    if (s > e) return -1;
    long long int sum = 0;
    for (long long int i=s; i<=e; i++){
        sum += a[i];
    }
    long long int current_sum = 0;
    for (long long int i=s; i<e; i++)
    {
        current_sum += a[i];
        if (current_sum == sum-current_sum)
        {
            return i;
        }
        if (current_sum > sum-current_sum)
        {
            return -1;
        }
        
    }
    return -1;
}
long long int solve(long long int *a, long long int s, long long int e){
    long long int n = e-s+1;
    if (s > e){
        return 0;
    }
    long long int index = divide(a, s, e);
    if (index == -1){
        return 0;
    }
    long long int op1 = solve(a, s, index );
    long long int op2 = solve(a, index+1, e);
    return max(op1, op2) + 1;
}
int main(){
    long long int t;
    // cin >> t;
    t = 1;
    for (long long int j=0; j<t; j++)
    {   
        long long int n;
        cin >> n;
        long long int arr[1000];
        for (long long int i=0; i<n; i++){
            cin >> arr[i];

        }
        cout << divide(arr, 0, n-1);
    }
    return 0;
}