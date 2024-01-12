#include <iostream>
using namespace std;
bool fn(int n){
    int div =0;
    for (int i =1; i <=n; i++ ){
        if (n%i == 0){
            div++;
        }
    }
    if (div%2 != 0){
        return true;
    }
    return false;
}
int main(){
    bool arr[101];
    int cnt =0;
    for (int i = 1; i <= 100; i++){
        if (fn(i) == true){
            cnt ++;
        }
    }
    cout << cnt;
    

    
    return 0;
}