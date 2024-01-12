#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "enter total number " << endl;
    cin >> n;

    int max = INT_MIN;
    int i = 1;
    while (i <= n){
        int  num;
        cin >> num;
        if (num > max){
            max = num;
        }
        i ++;
    }
    cout << "LARGEST " << max;




    
    return 0;
}