#include <iostream>
using namespace std;
void fn(int *t)
{
    *t = 1000;
}
int main()
{
    int a = 1;
    int *x = &a;
    fn(x);
    cout << *x;
    
    return 0;
}