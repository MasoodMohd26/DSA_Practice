#include <iostream>
using namespace std;
int main()
{
    char a[] = "WELCOME";
    cout << a;  //WELCOME gets printed completely
    cout << endl;
    char x[] = {'W', 'E', 'L', 'C', 'O', 'M', 'E'}; // wrong
    cout << x << endl;

    char y[] = {'W', 'E', 'L', 'C', 'O', 'M', 'E', '\0'}; // right
    cout << y;

    
    return 0;

}