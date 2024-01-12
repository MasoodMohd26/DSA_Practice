#include <iostream>
using namespace std;
int pow(int x, int n)
{
    if (x == 0)
    {
        return 0;
    }
    if (n ==0)
    {
        return 1;
    }
    return x * pow(x, n-1);
}
int main()
{
    cout << pow(7,0);
    return 0;
}