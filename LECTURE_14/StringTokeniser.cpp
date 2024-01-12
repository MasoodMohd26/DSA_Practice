#include <iostream>
#include <cstring>  // Corrected include statement
using namespace std;

int main()
{
    char s[] = "Hello....##$$World..,,Coding";
    char* x = strtok(s,".,#$");
    string final = "";
    while (x != NULL)
    {
        final += x;
        final += " ";
        cout << x << " ";
        x = strtok(NULL, ".,#$");
    }
    cout <<endl << final;
    return 0;
}
