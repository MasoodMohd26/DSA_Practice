#include <iostream>
using namespace std;
void PrintDec(int n)
{
    if (n<=0)
    {
        return;
    }
    cout << n << " ";
    PrintDec(n-1);
}
int main()
{
    PrintDec(-1);
    return 0;
}