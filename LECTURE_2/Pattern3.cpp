/*
      1
     232
    34543
   4567654
  567898765
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int sp = n-1;
    while (i <= n){
        int t = 1;
        while (t <= sp){
            cout << " ";
            t++;
        }
        sp--;
        t = i;
        int cnt = 1;
        while (cnt <= i){
            cout << t;
            t++;
            cnt ++;
        }
        t--;
        t--;
        while (t >= i){
            cout << t;
            t--;
        }
        cout << endl;
        i++;
        

    }


    
    return 0;
}