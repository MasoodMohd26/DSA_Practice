#include <iostream>
using namespace std;
 fib(int n)
{
    if (n==0 or n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    cout << fib(10);
    return 0;
}