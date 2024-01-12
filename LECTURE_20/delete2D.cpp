#include <iostream>
using namespace std;
void del(int **x, int r, int c)
{
    for (int i=0; i<r; i++)
    {
        delete[] x[i];
    }
    delete[]x;
    x = NULL;
}
int main()
{

    return 0;
}