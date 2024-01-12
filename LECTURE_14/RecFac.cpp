#include <iostream>
using namespace std;
int Factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    int ChotaAns = Factorial (n-1);
    int BadaAns = n * ChotaAns;
   
    return BadaAns;
}
int main()
{
    cout << Factorial (3);
    
    return 0;
}