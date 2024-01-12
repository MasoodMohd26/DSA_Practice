#include <iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int vertical = 0;
    int horizontal = 0;
    while (ch != '\n'){
        if (ch == 'N' || ch == 'n')
        {
            vertical ++;
        }
        else if (ch == 'S' || ch == 's')
        {
            vertical --;
        }
        else if (ch == 'E' || ch == 'e')
        {
            horizontal ++;
        }
        else if (ch == 'W' || ch == 'w')
        {
            horizontal --;
        }
        ch = cin.get();
    }
    if (horizontal > 0){
        for (int i =1; i <= horizontal; i ++)
        {
            cout << "E";
        }
    }
    if (vertical > 0){
        
        for (int i =1; i <= vertical ; i ++)
        {
            cout << "N";
        }
    }
    if (vertical < 0){
        int x = -1 * vertical;
        for (int i =1; i <= x; i ++)
        {
            cout << "S";
        }
    }
    if (horizontal < 0){
        int x = -1 * horizontal;
        for (int i =1; i <= x; i ++)
        {
            cout << "W";
        }
    }
    

    
    return 0;
}