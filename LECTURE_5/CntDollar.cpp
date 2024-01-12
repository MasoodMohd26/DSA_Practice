#include <iostream>
using namespace std;
int a = 100; // global
int main (){
    char ch;
    int cnt =0;
    cin >> ch;
    while (ch!='$')
    {
        cnt++;
        cin >> ch;

    }

    cout << cnt;

    return 0;
}