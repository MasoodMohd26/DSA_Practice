/*
input odd number n and then input n odd numbers such that each have a pair except one. O/P unique number
*/

# include <iostream>
using namespace std;
int main(){
    int n, no, res;
    cin >> n;
    int i = 1;
    res = 0; // coz 0 ka xor s se karenge to s hi ayega
    while (i <=n){
        cin >> no;
        res = res ^ no;
        i ++;
    }
    cout << res;
    return 0;
}