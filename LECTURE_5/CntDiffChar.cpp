#include <iostream>
using namespace std;
int a = 100; // global
int main (){
    char ch;
    int dig =0;
    int alpha =0;
    int white =0;
    int cnt =0;
    ch = cin.get();
    while (ch!='$')
    {
        if (ch >='0' && ch <= '9'){
            dig ++;
        }
        if (ch >='a' && ch <= 'z'){
            alpha ++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n'){
            white ++;
        }
        ch = cin.get();
        cnt ++;

    }

    cout << "ALPHABETS : " << alpha << endl;
    cout << "DIGITS : " << dig << endl;
    cout << "white : " << white << endl;


    return 0;
}