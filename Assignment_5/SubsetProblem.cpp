#include <bits/stdc++.h>
using namespace std;
deque <long long int>ans;
vector <long long int>arr;
long long int cnt = 0;
bool solve(long long int sum, long long int n)
{
    if (n == 0){
        if (sum == 0)
        {
            cnt++;
            for (auto it:ans){
                cout << it << " ";
            }
            cout << " ";
            
        }
        return false;
    }
    bool op2 = solve(sum, n-1);
    ans.push_front(arr[n-1]);
    bool op1 = solve(sum - arr[n-1], n-1);
    ans.pop_front();
    
    return op1 or op2;

}
int main(){
    long long int n;
    cin >> n;
    for (long long int i=0; i<n; i++){
        long long int x;
        cin >> x;
        arr.push_back(x);
    }
    long long int sum;
    cin >> sum;
    solve(sum, n);
    cout << endl << cnt;
    return 0;
}