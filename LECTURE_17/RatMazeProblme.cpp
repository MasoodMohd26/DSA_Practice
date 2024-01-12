#include <iostream>
using namespace std;
bool RatInMaze(char maze[][10], int i, int j, int n, int m, int sol[][10])
{
    // base case
    if (i == n-1 and j == m-1)
    {
        // to make sure destination is also a part of a solution
        sol[i][j] = 1;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return false;
    }

    // recursive case

    //pehle maan lo ki i,j sol ka part hai
    sol[i][j] = 1;

    //right jakar dekho;
    if (j+1 < m and maze[i][j+1] != 'X')
    {
        bool ans1 = RatInMaze(maze, i, j+1, n,m,sol);
        if (ans1 == true)
        {
            return true;
        }  
    }

    // if ans1 is false
    // down jakar dekho
    if (i+1 < n and maze[i+1][j] != 'X')
    {
        bool ans2 = RatInMaze(maze, i+1,j,n,m,sol);
        if (ans2 == true)
        {
            return true;
        }
        
    }
    // backtracking
    sol[i][j] = 0;
    return false;

}
int main()
{
    char maze[][10] = {{'0','0','0','0'},{'0','0','X','X'},{'0','0','0','0'},{'X','X','0','0'}};
    int sol[][10]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    bool ans = RatInMaze(maze,0,0,4,4,sol);
    cout << ans << endl;
    

    return 0;
}