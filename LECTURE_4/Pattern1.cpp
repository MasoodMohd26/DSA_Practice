#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i ++){
        int strt;
        if (i % 2 == 0){
            
            strt = 0;
        }
        else {
            strt = 1;
        }

        for (int j =1; j <= i; j ++){
            cout << strt << ' ';
            strt = !strt;

        }
        cout << endl;
    }
}