#include <iostream>
using namespace std;
int main()
{
    char a[100];
    char ch;
    int i = 0;
    ch = cin.get();
    while (ch != '\n')
    {
        a[i] = ch;
        i++;


        ch = cin.get();
    }
    a[i] = '\0';
    cout << a;

    
    return 0;

}