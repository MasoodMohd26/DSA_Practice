#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int num = 2;
    while (num <= n){
        
        int i = 2;
        int flag = 0;
        // cout << num;
        while (i <= (num-1)){
            if (num % i == 0){
                flag = 1;
                
            }
            i++;
        }
        if (flag == 0){
            cout << num << endl;
        }
        
        num ++;
    }

    
    return 0;
}