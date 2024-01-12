/*
n = 5


ABCDEEDCBA
ABCDDCBA
ABCCBA
ABBA
AA
*/


#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    char ch;
    // generic work
    for (int row = 1; row <= n; row ++)
    {
        ch = 'A';
        // increasing character
        for (int col= 1; col <= (n - row + 1); col ++)
        {
            cout << ch;
            ch++;
        }
        ch --;
        // decreasing characters
        for (int col= 1; col <= (n - row + 1); col ++)
        {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}