#include <iostream>
using namespace std;
int main(){
    int n, x ;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i ++){
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0; i<n; i++){
        for (int j =0; j <n; j ++){
            if ((arr[i] + arr[j] == x) && (arr[i] <= arr[j])){
                cout << i << ' '<< j;
                cout << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
    return 0;
}