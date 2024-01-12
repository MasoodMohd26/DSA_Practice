#include <iostream>
using namespace std;
int main()
{
    int n,m,k,s;
    cin >>n>>m>>k>>s;
    char x;
    char arr[100][100];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> arr[i][j];
            


        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << arr[i][j]<< " ";


        }
        cout << endl;
    } 
    
    return 0;
}