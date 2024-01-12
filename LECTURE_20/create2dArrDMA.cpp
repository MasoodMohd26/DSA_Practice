#include <iostream>
using namespace std;
int ** create2DArr(int r, int c)
{
    int ** x = new int*[r];
    for(int i=0; i<r; i++)
    {
        x[i] = new int[c];
    }
    int num = 0;
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            x[i][j] = num;
            num++;
        }
    }
    return x;
    
}
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
    int **a = create2DArr(10,10);
    del(a,10,10);
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            cout << a[i][j] << " ";
         }
        cout << endl;
    }

}