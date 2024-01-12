#include <iostream>
using namespace std;
bool SafeHai(int Board[][100], int r, int c, int n)
{
    // checking upar ke col main rani hai ki nhi
    for (int i=0; i<r; i++)
    {
        if (Board[i][c] == 1)
        {
            return false;
        }
    }
    int x=r-1;
    int y=c+1;
    // checking upar ke right diagonal main rani hai ki nahi
    while (x >=0 and y < n)
    {
        if (Board[x--][y++] == 1)
        {
            return false;
        }

    }
    x=r-1;
    y = c-1;
    // checking upar ke left diagonal main rani hai ki nahi
    while (x >=0 and y >= 0)
    {
        if (Board[x--][y--] == 1)
        {
            return false;
        }
    }
    return true;

}
bool nQueen(int board[100][100], int r, int n )
{
    // base case
    if (r == n)
    {
        
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (board[i][j] == 1)
                {
                    cout << "Q ";
                }
                else 
                {
                    cout << "_ ";
                }
            }
            cout << endl;
        }
        return true;
    }
    //recursive case
    for (int c=0; c<n; c++)
    {
        // pehle check karo ki r c safe hai bhi for rani to be placed
        if (SafeHai(board, r, c, n))
        {
            // board ko 1 kardo
            board[r][c] =1;
            // if yes then true return kardo
            if (nQueen(board, r+1, n) == true)
            {
                return true;
            }
            // warna backtrack karo aur box ko zero kardo 
            board[r][c] = 0;
        }
        
    }
    
    return false;

}
int main()
{
    int n = 10;
    int arr[100][100] = {{0,0,0,0}};
    nQueen(arr,0,n);
}