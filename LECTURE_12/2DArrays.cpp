#include <iostream>
using namespace std;
int main()
{
    int a[][100] = {{1,2,3}, {4,5,6}};
    int row  = 2;
    int col = 3;
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}